#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //range loop
    for(auto value : v){
        cout<<value<<" ";
    }
    cout<<endl;


    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for(it=vp.begin();it!=vp.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(it=vp.begin();it!=vp.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }

    //range loop in pair
    for(auto value: vp){
        cout<<value.first<<" "<<value.second<<endl;
    }

}
