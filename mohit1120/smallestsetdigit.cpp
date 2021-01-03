#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int smallest(int n){
    vector<int>v;
    int num=0;
    while(n>0){
        v.push_back(n%10);
        n=n/10;
    }
    sort(v.begin(), v.end());
    for(auto i : v){
        num=num*10+i;
    }
    return num;
}


int main(){
    int n;
    cin>>n;
    cout<<smallest(n)<<"\n";
    return 0;
}