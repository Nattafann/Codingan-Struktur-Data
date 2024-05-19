#include <iostream>
using namespace std;

// Fungsi untuk melakukan Bubble Sort pada *array*
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar posisinya
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk mencetak *array*
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8}; // *Array* awal
    int N = sizeof(arr) / sizeof(arr[0]); // Jumlah elemen dalam *array*
    
    bubbleSort(arr, N); // Panggil fungsi Bubble Sort
    
    cout << "Array terurut: " << endl;
    printArray(arr, N); // Cetak *array* yang sudah terurut
    
    return 0;
}
