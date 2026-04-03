#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang element array : " << ;
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
        cout << "-------------------------------" << endl;
        cout << "\ninputkan isi element array" << endl;
        cout << "-------------------------------" << endl;

        for (int i = 0; i < n; i++)
        {
            cout << "Array ke-" << i << " : ";
            cin >> arr[i];
        }
    }
}

void mergesort(int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(low, mid);
    mergesort(mid + 1, high);
    int i(low);
    int j(mid + 1);
    int k(low);

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
    }
}