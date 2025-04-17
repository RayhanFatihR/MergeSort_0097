#include <iostream>
using namespace std;

int arr[20], B[20]; // ArrayUtama dan ArrayBantu
int n;

void input()
{
    while(true)
    {
        cout << "Masukkan Panjang elemen array: ";
        cin >> n;
        if (n <= 20)
        break;
        cout << "\nMaksimal panjang array adalah 20\n" << endl;
    }





}

void mergeSort(int low, int high){
    if(low >= high){
        return;
    }
}