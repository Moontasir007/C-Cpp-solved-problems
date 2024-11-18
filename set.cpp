#include <set>
#include <utility>
#include <iostream>
using namespace std;

int main()
{

    static int a[100];
    for(int i=0; i<a.length(); i++)
        {
            cin>>a[i];
        }
    set<int> const  numbers( begin( a ), end( a ) );
    for( auto const v : numbers ) { cout << v<<" "; }
    cout << endl;
}
