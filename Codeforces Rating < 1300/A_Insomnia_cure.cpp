#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c=0;
    for(int i=1;i<=d;i++)
    {
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
        {
            c++;
        }
    }
    cout<<d-c;
    return 0;
}