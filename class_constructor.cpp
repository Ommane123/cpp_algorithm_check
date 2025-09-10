#include<bits/stdc++.h>
using namespace std;

class rectangle{
    public:
    int heigth = 10;            // directly assigned 
    int width;

    rectangle(){                //default constructor
        width = 20; 
    }
};

int main(){

    rectangle r;
    cout<<r.heigth<<endl<<r.width;

    return 0;
}