#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        // finding min ele in unsorted array;
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;
            }
        }

        // placing minimum ele in 1st place;
        if (i != min_index)
        {
            swap(v[i], v[min_index]);
        }
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    selectionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Repeatedly find the minimum element in unsorted array and put it at beginning" << endl;
    return 0;

    // Time complexity = n(n-1)/2; = O(n^2)
    // Space Complexity = O(1)
    // It is a unstable sorting algorithm
}