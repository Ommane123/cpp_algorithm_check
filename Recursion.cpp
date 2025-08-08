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
    // Base case is the last recursive step where the recursion stops
    // Stack Space stores the yet to be executed recursions or  data

    recur();
    return 0;
}