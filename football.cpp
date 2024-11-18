#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <utility>
#include <vector>
#include <set>
#include <ctype.h>
#include <algorithm>
using namespace std;


int main() {

string str;

int c=1;
int j=0;

 getline(cin, str);

 //cout<<str.length()<<endl;

 for(int i=0;i<str.length()-1;i++){

     j=i;
    // cout<<"start "<<str[i]<<endl;
     while(str[i]==str[j+1]){

     // cout<<"pair are "<<str[i]<<" & "<<str[j+1]<<endl;
      c++;
      j++;
     }

     //cout<<"Result of count "<<c<<endl;
     if(c>=7){
         break;
     }
     c=1;
 }

 //cout<<"Result"<<c<<endl;

 if(c>=7){
     cout<<"YES";
 }else{
      cout<<"NO";
 }

	return 0;
}
