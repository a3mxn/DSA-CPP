#include <bits/stdc++.h>
using namespace std;

void insertit(stack<int> &stk,int x){
    if(stk.empty() || stk.top()>=x){
        stk.push(x);
        return;
    }
    int temp = stk.top();
    stk.pop();
    insertit(stk,x);
    stk.push(temp);
}


void sortit(stack<int> &stk){
    if(stk.size()==1) return;
    int val = stk.top();
    stk.pop();
    sortit(stk);
    insertit(stk,val);
}

int main(){
    stack<int> stk;
    stk.push(2);
    stk.push(4);
    stk.push(0);
    stk.push(5);
    stk.push(3);
    stk.push(1);
    stk.push(6);

    sortit(stk);

    while (!stk.empty()) {
        std::cout << stk.top() << std::endl;
        stk.pop();
    }
}