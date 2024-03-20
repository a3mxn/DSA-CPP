#include <bits/stdc++.h>
using namespace std;

    void solve(stack<int>&s,int i,int n){
        if(i==(n/2)+1){
            s.pop();
            return;
        }
        int val = s.top();
        s.pop();
        solve(s,i+1,n);
        s.push(val);
    }
    

    void deleteMid(stack<int>&s, int n){
        solve(s,1,n);
    }

int main(){
    // delete mid function ko call karde
}