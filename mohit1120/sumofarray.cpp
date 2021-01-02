#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sum(int arr[], int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    cout<<s;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sum(arr,n);
    return 0;
}