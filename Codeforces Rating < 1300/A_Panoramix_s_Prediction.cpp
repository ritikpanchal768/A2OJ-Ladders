#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;
int prime(int m)
{
    for(int i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            return 1;
        }
        
    }
    return 0;
}


int main()
{
    int n,m;
    cin>>n>>m;
    int v=0;
    
    if(prime(m))
    {
        cout<<"NO";
    }
    else{
        for(int i=n+1;i<=50;i++)
        {
            if(prime(i)==0)
            {
                if(i==m)
                {
                    cout<<"YES";
                }
                else{
                    cout<<"NO";
                }
                break;
            }
        }
    }
    
    
    
    return 0;
}