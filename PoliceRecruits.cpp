#include <iostream>

using namespace std;

int main()
{
    int e, rest = 0, officers = 0, event;

    cin >> e;

    for( int i = 0; i <e;i++ )
    {
        cin >> event;

        if( event < 0 )
        {

            if( officers == 0 )
                rest++;
            else
                officers--;

        }
        else
        {
            officers += event;
        }

    }

    cout << rest << endl;

}
