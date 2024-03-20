#include <bits/stdc++.h>
using namespace std;

void insertinto(vector<int> &vec,int x){
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
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}