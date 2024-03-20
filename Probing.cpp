// #define print(arr,n) for(int i=0;i<n;i++){cout<<arr[i]<<" ";} cout<<endl;

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={12,34,13,10,5,23};
	vector<vector<int>>ans(3,vector<int>(5,0));
	int curr=0;
	for(int i=0;i<arr[i];i++){
		int mod=arr[i]%5;
		if(ans[curr][mod]==0) ans[curr][mod]=arr[i];
		else{
			int end=mod;
			while(true){
				mod=(mod+1)%5;
				if(mod==end) curr++;
				if(ans[curr][mod]==0){
					ans[curr][mod]=arr[i];
					break;
				}
			}
		}
	}
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			if(ans[i][j]!=0) cout<<ans[i][j]<<" ";
		}
	}
}