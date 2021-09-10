#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int sum=0;
    int maxsum=0;
    for(int it=1;it<=t;it++) 
    {
        int l,r;
        cin>>l>>r;
        
        sum=(sum-l)+r;
        if(sum>maxsum)
        {
            maxsum=sum;
        }

    }
    cout<<maxsum;
    return 0;
}