#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1,s2;
    cin>>s>>s1>>s2;
    int n=s.size();
    int m=s1.size();
    int l=s2.size();
    unordered_map<char,int> mp;
    unordered_map<char,int> mp1;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    // for(auto x:mp)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // cout<<endl;
    for(int i=0;i<m;i++)
    {
        mp[s1[i]]++;
    }
    // for(auto x:mp)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // cout<<endl;
    for(int i=0;i<l;i++)
    {
        mp1[s2[i]]++;
    }
    

    if(mp==mp1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    
    return 0;
}