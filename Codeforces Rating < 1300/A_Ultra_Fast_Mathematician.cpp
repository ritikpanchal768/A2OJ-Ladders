#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string h;
    cin>>h;
    int x;
    for(int i=0;i<s.size();i++)
    {
        int x=s[i]^h[i];
        cout<<x;
    }
    return 0;
}