#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int>a;
    int k;
    for(int i=1;i<=3;i++){
        cin>>k;
        a.push_back(k);
    }
    vector<int>b = a;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<endl;
    }
    return 0;
}
