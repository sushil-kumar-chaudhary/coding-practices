#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void countfreq(int arr[], int n){
    int m = INT_MIN;
    for(int i=0;i<n;i++){
        m=max(m,arr[i]);
    }
    int h[m+1]={0};
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    cout<<"Array element with corresponding frequencies"<<"\n";
    for(int i=0;i<m+1;i++){
        if(h[i]>0){
            cout<<i<<" "<<h[i]<<"\n";
        }
    }
}


int main(){
    int arr[]={1,2,4,5,2,1,6,7,4,5,9,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    countfreq(arr,n);
}