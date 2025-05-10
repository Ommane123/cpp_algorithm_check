#include <iostream>

using namespace std;

void merge(int arr[], int l, int mid, int r)
{

    int an = mid - l + 1;
    int bn = r - mid;
    // create 2 temp arrays
    int a[an];
    int b[bn];

    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
}

int main()
{
    return 0;
}