#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int disyear(int i)
{
    int n=i;
    int a=n%10;
    n=n/10;
    int b=n%10;
    n=n/10;
    int c=n%10;
    n=n/10;
    int d=n;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        return true;
    }
    else{
        return false;
    }
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=t+1;i<=9013;i++) 
    {
        //cout<<i<<endl;
        
        if(disyear(i))
        {
            cout<<i;
            break;
        }
    }
    return 0;
}