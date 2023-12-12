#include <bits/stdc++.h>
using namespace std;

int main(){

    ordered_map<string,int> mp;


    //insertion
    pair<string,int> p = make_pair("aman",2417);
    mp.insert(p);
    pair<string,int> q = make_pair("abc",1);
    mp.insert(q);
    pair<string,int> r = make_pair("def",2);
    mp.insert(r);


    mp["thakur"] = 2433;



    //searcching
    // cout<<mp["aman"];
    // cout<<mp.at("aman");


    // //size
    // cout<<mp.size();

    // // to check presence
    // mp.count("aman");

    // //erase
    // mp.erase("aman");

    // //treaverse or iterate
    // unordered_map <string,int> :: iterator it = mp.begin();

    // while(it!=mp.end()){
    //     cout<<endl<< it->first <<"  "<<it->second;
    //     it++;
    // }

    for(auto it:mp){
        cout<<endl<< it.first <<"  "<<it.second;
    }


    return 0;
}