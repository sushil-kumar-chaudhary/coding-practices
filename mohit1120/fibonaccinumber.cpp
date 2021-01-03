#include<iostream>
using namespace std;


void fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i=2;i<n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    cout<<c<<"\n";
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
}