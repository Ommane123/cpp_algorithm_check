#include <bits/stdc++.h>

using namespace std;

void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int input;
    cout << "Enter how many times test case : " << endl;
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        int n;
        cin >> n;
        pattern(n);
        cout << n;
    };

    return 0;
}
