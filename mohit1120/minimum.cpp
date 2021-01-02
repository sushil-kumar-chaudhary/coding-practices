#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void minimum(int arr[], int n){
    int sm = INT_MAX;
    for(int i=0;i<n;i++){
        sm = min(sm, arr[i]);
    }
    cout<<sm;
}


int main(){
    int arr[] = {5,10,2,15,20,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    minimum(arr,n);
    return 0;
}