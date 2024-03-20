#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int low,high;
    cin>>low;
    cin>>high;

    int cnt=0;
    vector<int> vec(high-low+1,0);
    for(int i=0;i<str.size();i++){
        if(str[i]=='I'){
            cnt++;
        }
    }

    for(int i=0;i<str.size();i++){
        if(str[i]=='I'){
            vec[i]=high-cnt+1;
            high++;
        }
    }

    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='D'){
            vec[i]=low;
            low++;
        }
    }

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

}