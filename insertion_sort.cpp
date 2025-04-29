#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int current_index = i;
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the size of String :" << endl;
    cin >> n;
    int vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    insertionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }

    return;
}