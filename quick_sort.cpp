#include <iostream>

using namespace std;

int partition(int arr[], int first, int last)
{

    int pivot = arr[last];
    int i = first - 1; // for inserting ele lest than pivot
    int j = first;     // for finding ele < pivot

    for (; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // now i is pointing to the last ele < pivot
    //  correct position for pivot will be = i+1
    swap(arr[i + 1], arr[last]);
    return i + 1;
}

void quickSort(int arr[], int first, int last)
{

    // base case
    if (first >= last)
    {
        return;
    }

    // recursive caase
    int pi = partition(arr, first, last);
    quickSort(arr, first, pi - 1);
    quickSort(arr, pi + 1, last);
}

int main()
{

    int arr[] = {20, 12, 35, 16, 18, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity = worst case O(n^2)

// Space COmplexity = O(n) worst case

//  unstable algorithm