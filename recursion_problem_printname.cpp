#include <bits/stdc++.h>
using namespace std;

void print_name(int i, int n)
{
    if (i > n)
        return;
    cout << "om" << endl;

    print_name(i + 1, n);
}

int main()
{
    cout << "Enter value of recur :" << endl;
    int n;
    cin >> n;
    print_name(1, n);
    return 0;
}