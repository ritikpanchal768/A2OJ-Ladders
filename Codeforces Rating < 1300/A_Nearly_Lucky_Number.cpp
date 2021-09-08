#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll c=0;
    while(n>0)
    {
        if(n%10==7 || n%10==4)
        {
            c++;
        }
        n=n/10;
    }
    if(c==7 || c==4)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}