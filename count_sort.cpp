#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &v)
{

    int n = v.size();

    // find the max ele
    int max_ele = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        max_ele = max(v[i], max_ele);
    }

    // create the freq array
    vector<int> freq(max_ele + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    // calculate cumulative freq
    for (int i = 1; i <= max_ele; i++)
    {
        freq[i] += freq[i - 1];
    }

    // calculate the sorted array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[v[i]]] = v[i];
    }

    // copy back the ans to original array
    for (int i = 0; i < n; i++)
    {
        v[i] = ans[i];
    }
}

int main()
{

    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    countSort(a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

// time complexity = O(n) where max order is in order of n not n^2 or n^3,etc
// space complexity = O(n+k)
