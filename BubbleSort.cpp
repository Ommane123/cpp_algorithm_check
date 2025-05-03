#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                flag = true;
                swap(v[j], v[j + 1]);
            }
        }
        if (!flag)
            break;
    }
    return;
}

int main()
{

    cout << "Bubble Sort Algorithm" << endl;
    cout << "Enter the size of array!" << endl;
    int n;
    cin >> n;

    cout << "Enter " << n << " Numbers: " << endl;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bubbleSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;

    // The Maximum no of swaps in worst case in bubble sort is = n-1 + n - 2 + .....+1;
    // which is n(n-1)/2

    // Time complexity : depends on n(n-1)/2  therefore, = O(n^2) due to ignoring constant
    // Space complexity : O(1)
}
