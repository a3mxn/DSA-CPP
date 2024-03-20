#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int one[n];
	    int two[n];
	    for(int i=0;i<n;i++){
	        cin>>one[i];
	       // cout<<one[i]<<" ";
	    }
	   // cout<<endl;
	    for(int i=0;i<n;i++){
	        cin>>two[i];
	       // cout<<two[i]<<" ";
	    }
	    sort(one,one+n);
	    sort(two,two+n,greater<int>());
	    int x = one[0]+two[0];
	    int z=1;
	    for(z;z<n;z++){
	        
	        if(x!=one[i]+two[i]){
	            cout<<-1;
	            break;
	        }
	       // cout<<one[i]<<" "<<two[i]<<endl;
	        
	    }
	    if(z==n){
	        for(int z=0;z<n;z++){
    	        cout<<one[z]<<" ";
    	    }
    	    cout<<endl;
    	    for(int z=0;z<n;z++){
    	        cout<<two[z]<<" ";
    	    }
    	    cout<<endl;
	    }
	    
	}

}
