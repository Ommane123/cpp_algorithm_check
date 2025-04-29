#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int current_index = v[i];

        int j = i - 1;
        while (j >= 0 && v[j] > current_index)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = current_index;
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the size of String :" << endl;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    insertionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}