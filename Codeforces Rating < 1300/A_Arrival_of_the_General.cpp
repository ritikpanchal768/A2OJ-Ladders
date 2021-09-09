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
    int mi,mx;
    int maxi=INT_MIN;
    for(int it=0;it<t;it++) 
    {
        cin>>a[it];
        if(mini>=a[it])
        {
            mini=a[it];
            mi=it;
        }
        if(maxi<a[it])
        {
            maxi=a[it];
            mx=it;
        }

    }
    int count=0;
    
    for(int i=mi;i<t;i++)
    {
        if(a[t-1]==mini)
        {
            break;
        }

        if(a[i]==mini && a[i]<a[i+1] && i!=t-1)
        {
            swap(a[i],a[i+1]);
            count++;
            // for(int it=0;it<t;it++) 
            // {
            //     cout<<a[it]<<" ";
            // }
            // cout<<endl;
        }
    }
    cout<<endl;
    for(int i=mx;i>=0;i--)
    {
        if(a[0]==maxi)
        {
            break;
        }

        if(a[i]==maxi && a[i]!=a[i-1] && i!=0 )
        {
            swap(a[i],a[i-1]);
            count++;
            // for(int it=0;it<t;it++) 
            // {
            //     cout<<a[it]<<" ";
            // }
            // cout<<endl;
        }
    }
    // for(int it=0;it<t;it++) 
    // {
    //     cout<<a[it]<<" ";
    // }
    //cout<<endl;
    cout<<count;
    return 0;
}