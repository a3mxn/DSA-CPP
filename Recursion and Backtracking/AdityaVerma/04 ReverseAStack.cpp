#include <bits/stdc++.h>
using namespace std;

void insertval(stack<int> s,int val) {
    while (!s.empty()) {
        s.pop();
    }
    s.push(val);
}

void reverseee(stack<int> &s){
    if(s.empty()){
        return;
    }
    int val=s.top();
    s.pop();
    reverseee(s);
    insertval(s,val);
}

void printStack(std::stack<int> s) {
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
}

int main(){
    stack<int> s;
    s.push(5);
    s.push(7);
    s.push(2);
    s.push(8);
    s.push(0);

    printStack(s);
    reverseee(s);
    printStack(s);
}