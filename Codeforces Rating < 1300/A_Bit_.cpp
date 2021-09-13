#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;
int x=0;
void solve()
{
    string s;
    cin>>s;
    
    if(s=="X++" || s=="++X")
    {
        x++;
    }
    else{
        x--;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) 
    {
        //cout << "Case #" << it+1 << ": ";
        solve();
    }
    cout<<x;
    return 0;
}