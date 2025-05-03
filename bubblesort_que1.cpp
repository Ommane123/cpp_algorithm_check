// Que : Given an integer array arr, move all 0's to the end of it while maintaining the reverse order of the non zero elements
#include <iostream>
#include <vector>
using namespace std;

void swap_zeros_to_end(vector<int> &v)
{

    int n = v.size();

    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag = false;

        while (j != i)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
        }
        if (!flag)
            break;
    }

    return;
}

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    swap_zeros_to_end(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
