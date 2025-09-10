#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Hello, World!"<<endl;

    string str;
    // cin>>str;
    getline(cin,str);

    reverse(str.begin(),str.end());
    
    cout<<str<<endl<<str.size();

    return 0;
}