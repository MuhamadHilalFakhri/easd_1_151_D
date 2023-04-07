// Jawaban
// 1. Karena tujuan algoritma untuk memberikan proses atau serangkaian aturan yang harus diikuti dalam perhitungan atau operasi pemecahan masalah lainnya terutama oleh komputer, dan algoritma diperlukan untuk menyelesaikan suatu masalah sebab algoritma adalah langkah-langkah sistematis yang diatur secara logis untuk menyelesaikan suatu tugas atau masalah dengan efisien dan efektif.
// 2. Static dan dynamic
// 3. 
// 4. Selection sort, karena konsep dari selection sort adalah mencari nilai terkecil dan menukarnya dengan indeks paling awal pada setiap tahap
// 5. - Quadratic = Bubble sort, selection sort, insertion sort - Loglinear = Quick sort, merge sort, dam sort

#include <iostream>
using namespace std;

void Input(int arr[], int n) 
{
    cout << "Masukkan data : ";
    for (int MHF = 0; MHF < n; MHF++) {
        cin >> arr[MHF];
    }
} 
  
void selectionsort(int arr[], int n) 
{
    for (int MHF = 0; MHF < n - 1; MHF++) 
    {
        int min_index = MHF;
        for (int i = MHF + 1; i < n; i++) 
        {
            if (arr[MHF] < arr[min_index])
            {
                min_index = MHF;
            }
        }
        int temp = arr[MHF];
        arr[MHF] = arr[min_index];
        arr[min_index] = temp;
    }
} 