//Even Odds Solution
#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
int main(){
ll n, k;
cin>>n>>k;
//Suppose n=10.
//Odd series then Even series 1,3,5,7,9,2,4,6,8,10.
n=(n+1)/2; //Finding the mid point.In above case it is 9.
//Condition 1.greater than 9 Even and vice-versa(Odd).
cout<<(k>n? 2*(k-n):2*k-1)<<endl;//if and else condition

return 0;
}
