#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[5][5];
    int b,c;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                b=i+1;
                c=j+1;
            }
        }
    }
    
    b=abs(b-3);
    
    c=abs(c-3);
    
    cout<<b+c<<endl;
    return 0;
}