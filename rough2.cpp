#include <bits/stdc++.h>
using namespace std; 

int main(){
    // for(int i=0;i<vec.size();i++){
    //     // if(vec[i]==0){
    //     //     vec.insert(vec.begin(),0);
    //     //     vec.erase(vec.begin()+i+1);
    //     // }
        
    //     // if(vec[i]==0){
    //     //     idx = i;
    //     //     while(idx!=0){
    //     //         swap(vec[idx-1],vec[idx]);
    //     //         idx--;
    //     //     }
    //     // }
    // }

    // vector<int> vec={1,3,0,2,9,1,0,8,0};
    vector<int> vec={0,1,0,5,7,8,9,0,13,0,0,999,333};
    // vector<int> vec={0,0,0,0,0,0,0,5,0};
    // vector<int> vec = {1,2,3,4,5,6,0,0,0,0,0};

    int x = vec.size()-1;
    int y = vec.size()-1;

    while(y!=0){
        while(vec[y]!=0) y--;
        while(y>0 && vec[y]==0){
            y--;
        }
        while(x>0 && vec[x]!=0){
            x--;
        }
        swap(vec[x],vec[y]);
    }

    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }


}

