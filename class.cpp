#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
    string tree_name;
};

class fruits{
    public:
    string name;
    string color;
};

class flowers{
    public:
    string name;
    string color;
};

int main(){

    fruits apple;
    apple.name = "Apple";
    apple.color = "Red";

    cout<<apple.name<<" "<<apple.color<<endl;

    flowers rose;
    rose.name = "Rose";
    rose.color = "Pink";

    cout<<rose.name<<" "<<rose.color<<endl;

    return 0;
}