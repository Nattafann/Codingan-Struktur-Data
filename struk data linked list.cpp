#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head = NULL; // Pointer ke node pertama

// Menambahkan node baru di akhir linked list
void addNode(int data) {
	Node* newNode = new Node; // Membuat node baru
	newNode->data = data; // Mengisi data node
	newNode->next = NULL; // Menunjuk ke NULL karena mode terakhir
	
	if (head == NULL) { // Jika linked list kosong
	  head = newNode; // NOde baru menjadi node pertama
	} else {
	  Node* temp = head; // pointer untuk traversal
      while (temp->next != NULL) { // Mencari node terakhir
      temp = temp->next;
	  }
	  temp->next = newNode; // Menghubungkan node baru ke node terakhir
	}
}

 // Mencetak data semua node dalam linked list
 void printList() {
 	Node* temp = head; // Pointer untuk traversal
 	while (temp != NULL) { // Melooping selama temp tidak NULL
 	   cout << temp->data << " "; // Mencetak data node
 	   temp = temp->next; // Pindah ke node berikutnya
	 }
	 cout << endl;
 }
 
 int main() {
 	addNode(10);
 	addNode(20);
 	addNode(30);
 	addNode(40);
 	
 	printList(); // Mencetak: 1 2 3 4
 	
 	return 0;
 }
