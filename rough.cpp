#include <bits/stdc++.h>
using namespace std;
int main(){

  vector<int> vec(1000,-1);
  for(int i=0;i<1000;i++){
    int s;
    cin>>s;
    vec[i]=s;
    if(vec[i]==vec[i-1]){
      vec[i]=-1;
      break;
    }
  }

  vector<int> arr;
  int i=0;
  while(vec[i]!=-1){
    arr[i]=vec[i];
    i++;
  }
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i];
  }
  

 return 0;
}