#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) 
    {
        string s;
        cin>>s;

        if(s.size()>10)
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}