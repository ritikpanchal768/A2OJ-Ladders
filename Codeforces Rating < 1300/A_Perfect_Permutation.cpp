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
    for(int i=1;i<=t;i++) 
    {
        a[i]=i;
    }
    for(int i=1;i<t;i++)
    {
        if(a[i]==i)
        {
            swap(a[i],a[i+1]);
        }
    }
    for(int i=1;i<=t;i++)
    {   
        if(t%2!=0)
        {
            cout<<-1;
            break;
        }
        cout<<a[i]<<" ";
    }
    return 0;
}