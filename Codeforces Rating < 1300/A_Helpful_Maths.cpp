#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        if(s[i]!='+')
        {
            v.push_back(s[i]-48);
        }
    }
    sort(v.begin(), v.end());
    

    for(int i=0;i<v.size();i++)
    {
        if(i!=v.size()-1)
        {
            cout<<v[i]<<"+";
        }
        else{
            cout<<v[i];
        }
    }
    
    return 0;
}