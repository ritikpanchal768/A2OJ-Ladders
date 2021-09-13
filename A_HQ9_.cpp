#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int i=0;
    for(int x=0;x<s.size();x++)
    {
        if(s[x]=='H' || s[x]=='Q'|| s[x]==9)
        {
            cout<<"YES";
            i=1;
            break;
        }
        
    }
    if(i==0)
    {
        cout<<"NO";    
    }
    return 0;
}