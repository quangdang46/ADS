#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d=0;
        cin >> n;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%2==0)d++;
                if((n/i)%2==0&&i!=n/i)d++;
            }
        }
        cout << d << endl;
    }
}