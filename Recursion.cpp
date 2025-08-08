#include <bits/stdc++.h>
using namespace std;
int n = 0;
void recur()
{

    if (n == 4)
        return;

    cout << n << endl;
    n++;
    recur();
}

int main()
{

    // Recursion leads to stack overflow.

    recur();
    return 0;
}