#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<t-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}