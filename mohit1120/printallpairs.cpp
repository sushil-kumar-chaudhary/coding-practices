#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printpairs(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            if((k-sum)==arr[j])
            cout<<arr[i]<<" "<<arr[j]<<"\n";
        }
    }
}


int main(){
    int arr[]={1,3,5,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 7;
    printpairs(arr,n,k);
    return 0;
}