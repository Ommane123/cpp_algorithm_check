#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    merge_sort(v);

    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity = O(n^2/2)+4