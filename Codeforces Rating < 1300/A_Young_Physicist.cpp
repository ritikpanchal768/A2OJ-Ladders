#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int x,y,z;
    int sumx=0;
    int sumy=0;
    int sumz=0;
    for(int it=1;it<=t;it++) 
    {
        //cout << "Case #" << it+1 << ": ";
        cin>>x>>y>>y;
        sumx=sumx+x;
        sumy=sumy+x;
        sumz=sumz+x;
        
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}