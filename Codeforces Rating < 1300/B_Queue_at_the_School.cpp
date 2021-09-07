#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int t;
    cin>>t;
    
    string s;
    cin>>s;
    for(int j=1;j<=t;j++)
    {
        for(int i=0;i<n;i++) 
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    return 0;
}