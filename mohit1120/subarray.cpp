#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void subarray(int arr[], int n){
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<"\n";
        }
    }
}


int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    subarray(arr,n);
    return 0;
}