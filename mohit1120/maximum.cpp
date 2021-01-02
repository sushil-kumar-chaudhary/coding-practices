#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void maximum(int arr[], int n){
    int gr = INT_MIN;
    for(int i=0;i<n;i++){
        gr=max(gr,arr[i]);
    }
    cout<<gr;
}


int main(){
    int arr[] = {5,10,2,15,20,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    maximum(arr,n);
    return 0;
}