#include <iostream>
using namespace std;

int arr[20], B[20]; // ArrayUtama dan ArrayBantu
int n; //

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
    if(low >= high){ //step 1
        return; //step 1a
    }

    int mid = (low + high) / 2; //step 2

    mergeSort(low, mid); //step 3a
    mergeSort(mid + 1, high); //step 3b

    int j, k; //step 4a
    int i = low; 
    j = mid + 1; //step 4b
    k = low; //step 4c

}