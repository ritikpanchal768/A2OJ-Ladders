#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int a[t];
    int mini=INT_MAX;
    int maxi=INT_MIN; 
    int c=0;
    for(int it=1;it<=t;it++) 
    {
        cin>>a[it];
        if(mini>a[it])
        {
            if(it!=1)
            {
                c++;
            }
            
            mini=min(mini,a[it]);
        }
        if(maxi<a[it])
        {
            if(it!=1)
            {
                c++;
            }
            
            maxi=max(maxi,a[it]);
        }
    }
    cout<<c;
    return 0;
}