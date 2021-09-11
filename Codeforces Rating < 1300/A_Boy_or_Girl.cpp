#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    
    unordered_map<char,int> mp;

    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int count=0;
    for(auto x:mp)
    {
        count++;
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}