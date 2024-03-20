#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int low,high;
    cin>>low;
    cin>>high;

    int cnt=0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='I'){
            cnt++;
        }
    }
    int p = high;
    int o = low;
    for(int x=0;x<3;x++){
        high=p;
        low=o;
        vector<int> vec(high-low+1,0);
        for(int i=0;i<str.size();i++){
            if(str[i]=='I'){
                vec[i]=high-cnt+1-x;
                high++;
            }
        }
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='D'){
                vec[i]=low-x;
                low++;
            }
        }
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl<<x<<endl;
    }

}