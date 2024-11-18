#include <bits/stdc++.h>
using namespace std;
void Short(){
    string s;
    cin>> s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[0]=='a' || s[1]=='b' || s[2]=='c'){
            ans = "yes";
        }
        else{
            ans = "no";
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin>> t;
    while(t--){
        Short();
    }
}
