#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define lli long long int
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    boost;
int t;
cin>>t;
while(t--){
    lli n,k;
    cin>>n>>k;
    if(k%(n-1)==0){
        cout<<(((k*n)/(n-1))-1)<<endl;
    }
    else{
         cout<<(((k*n)/(n-1)))<<endl;
    }
}
}
