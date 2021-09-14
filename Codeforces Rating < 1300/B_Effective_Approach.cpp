#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<ll,ll> mp;
    int n;
    cin>>n;

    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    
    
    int m;
    cin>>m;
    int v;
    ll sum=0;
    ll sum1=0;
    for(int i=1;i<=m;i++)
    {
        cin>>v;
        sum=sum+mp[v];
        sum1=sum1+((n-mp[v])+1);
    }
    cout<<sum<<" "<<sum1;

    return 0;
}