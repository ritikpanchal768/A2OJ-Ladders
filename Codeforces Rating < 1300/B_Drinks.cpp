#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    long double a[t];
    long double x=0;
    for(int it=0;it<t;it++) 
    {
        cin>>a[it];
        x=x+(a[it]/100);
    }
    cout<<(x/t)*100;

    return 0;
}