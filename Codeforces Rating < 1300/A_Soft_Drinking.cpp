#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int z=((k*l)/n)/nl;
    int x=((c*d)/n);
    int y=(p/n)/np;

    cout<<min(min(z,x),y);

    return 0;
}