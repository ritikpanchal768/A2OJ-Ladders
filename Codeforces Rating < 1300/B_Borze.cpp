#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else{
            cout<<2;
            i++;
        }

    }
    return 0;
}