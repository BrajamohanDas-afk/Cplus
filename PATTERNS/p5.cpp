#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Print1() {
    for(int i=1;i<5;i++){
        for(int j=1;j<5-i+1;j++){
        cout<<j;
        }
    cout<<endl; 
    }
}

int main() {
  
    Print1();
    return 0;
}
