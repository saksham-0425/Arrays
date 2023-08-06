#include<iostream>
using namespace std;

//subarray- continuous part of the array  e.g,- [1,2,0,7,2,0,2]
                                            //   i         j    

// number of subarrays of an array with n elements= nC2+n = n*(n+1)/2

//subsequence- a subsequence is a sequence that can be derived by an array by selecting zero or more elements, without changing the order of the remaining elements.
// e,g.- [1,2,0,7,2,0,2] ---->subsequence ---->[2,7,2]

//number of subsequences of an array with n elements= 2^n.

//every subarray is a subsequence but every subsequence is not a subarray.

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //ques- given an array a[] of size n. Output sum of each subarray of the given array.

    int current=0;
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current=current+a[j];
            cout<<current<<endl; 
        }
    }
    return 0;
}