// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=100;

//     int *pointer=&a;

//     cout<<pointer;


//     return 0;

// }


#include<bits/stdc++.h>
using namespace std;

void firstandlast_a(string s, char ch, int *firstptr_a, int *lastptr_a){

    for(int i=0; i<=s.size();i++){
        if(s[i]==ch){
            *firstptr_a=i;
            break;
        }
    }

    for (int i = s.size(); i >= 0; i--)  //can also use i=s.size()-1
    {
        if(s[i]==ch){
            *lastptr_a=i;
            break;
        }
    }return;
    
}

int main(){

    string s="aabacadf";
    char ch='a';

    int first_a = -1;
    int last_a = -1;

    int *firstptr_a=&first_a;
    int *lastptr_a=&last_a;

    firstandlast_a(s,ch,firstptr_a,lastptr_a);

    cout<<first_a<<" "<<last_a<<endl;
    
    return 0;
}