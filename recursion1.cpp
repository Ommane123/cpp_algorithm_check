#include <bits/stdc++.h>
using namespace std;

int sumation(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return 0;
    }
    sumation(i - 1, sum + i);
}

int main()
{
    // sumation of 1st n numbers
    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    sumation(n, 0);

    return 0;
}