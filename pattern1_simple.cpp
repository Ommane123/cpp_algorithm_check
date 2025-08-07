// Rules :
// 1. For outer loop = focus on rows, count rows
// 2. For inner loop = focus on columns and connect them with rows somehow
// 3. Print them '*' in inner loop
// 4. observe symetry (optional)

#include <bits/stdc++.h>

using namespace std;

void pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
    for (int i = 0; i < input; i++)
    {
        int n;
        cin >> n;
        pattern(n);
        cout << n;
    };

    return 0;
}

// Output :
// for test cases in online apps

// Enter how many times test case :
// 2 5 3
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * *
// * * *