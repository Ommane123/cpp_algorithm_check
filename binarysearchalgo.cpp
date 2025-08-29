#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &input, int target) {
    //define search space
    int lo = 0; // start of the search space
    int hi = input.size() -1; //end of the search space 
    while (lo <= hi) 
    {
        //calculate midpoint for the search space
        int mid = (lo + hi)/2;
        if (input[mid] == target) return mid;
        else if(input[mid] < target) {
            // discard left
            lo = mid +1;
        }
        else {
            // discard right
            hi = mid -1;
        }
        
    }
    return -1;
    
}

int main(){

    vector<int> input = {1,2,3,4,5,6,7,8,9};
    int target = 2;
    cout<<binarySearch(input,target)<<endl;
    return 0;
}