#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void checkelement(int arr[], int n, int x){
   for(int i=0;i<n;i++){
       if(x==arr[i]){
       cout<<"Element present in a given array at position: "<<i+1;
       return;
       }
   }
}


int main(){
    int arr[] = {5,10,2,15,20,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 15;
    checkelement(arr,n, x);
    return 0;
}