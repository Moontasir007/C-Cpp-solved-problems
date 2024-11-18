#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count = 1;
        int count1 = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int s = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr + s);
        for(int i=0; i<s; i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                if(count>=3 && count<6)
                {
                    count1++;
                    count = 1;
                }
                else if(count>=6)
                {
                    count1+=count/3;
                    count = 1;
                }
                else cout<<count1<<endl;

            }

        }
        cout<<count1<<endl;
    }
}
