#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[4];
    int count=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i!=j && a[i]==a[j])
            {
                count++;
            }
        }
    }
    
    cout<<floor(sqrt(count));
    
    return 0;
}