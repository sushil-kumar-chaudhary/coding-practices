#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printtriplets(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        int sum1=arr[i];
        for(int j=i+1;j<n;j++){
            int sum2 = arr[j];
            for(int k=j+1;k<n;k++){
                if((x-(sum1+sum2))==arr[k])
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"\n";
            }
        }
    }
}


int main(){
    int arr[]={1,3,5,2,6,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    printtriplets(arr,n,x);
    return 0;
}