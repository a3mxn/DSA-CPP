#include <bits/stdc++.h>
using namespace std; 

void print(char a[]){
    if(a[0]=='\0') return;
    cout<<&a[0]<<" ";
    print(a+1);
}

void rev(char a[]){
    if(a[0]=='\0') return;
    rev(a+1);
    cout<<&a[0]<<" ";
}

int main(){
    char a[] = "abcd";
    print(a);
    cout<<endl;
    rev(a);
}