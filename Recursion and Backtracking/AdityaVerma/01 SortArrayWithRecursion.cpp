#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& vec,int i){
    if(i>vec.size()/2) return;
    swap(vec[i],vec[vec.size()-i-1]);
    reverseArray(vec,i+1);
}

void insertinto(vector<int> &vec,int x){
    //agar vec[vec.size()-1]>=x toh array decending
    //order mai sort ho jayega
    if(vec.size()==0 || vec[vec.size()-1]<=x){
        vec.push_back(x);
        return;
    }
    int z = vec[vec.size()-1];
    vec.pop_back();
    insertinto(vec,x);
    vec.push_back(z);
}

void sortArray(vector<int> &vec){
    if(vec.size()==1) return;
    int x = vec[vec.size()-1];
    vec.pop_back();
    sortArray(vec);
    insertinto(vec,x);
}

int main(){
    vector<int> vec = {4,8,5,2,7,1,0};
    sortArray(vec);
    // reverseArray(vec,0);

    //Do read line 11.

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}