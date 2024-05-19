#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack; // Buat stack dengan tipe data integer

    // Tambahkan elemen ke dalam stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Cetak elemen teratas (top) dari stack
    cout << "Top element: " << myStack.top() << endl;

    // Hapus elemen teratas dari stack
    myStack.pop();

    // Cetak elemen teratas setelah penghapusan
    cout << "Top element after pop: " << myStack.top() << endl;

    // Cek apakah stack kosong
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Cetak jumlah elemen dalam stack
    cout << "Number of elements in stack: " << myStack.size() << endl;

    return 0;
}
