#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int countu=0;
    int countl=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<97)
        {
            countu++;
        }
        else{
            countl++;
        }
    }
    if(countu>countl)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<97)
            {
                s[i]=s[i]+32;
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    return 0;
}