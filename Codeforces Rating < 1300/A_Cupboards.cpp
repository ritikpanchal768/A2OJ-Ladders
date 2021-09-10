#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int countl=0;
    int countr=0;
    int countlr=0;
    int countrl=0;
    for(int i=1;i<=t;i++) 
    {
        int l,r;
        cin>>l>>r;
        if(l==0 && r==1)
        {
            countl++;
        }
        else if(l==1 && r==0)
        {
            countr++;
        }
        else if(l==1 && r==1)
        {
            countlr++;
        }
        else 
        {
            countrl++;
        }

    }
    //cout<<countl<<" "<<countr<<" "<<countlr<<" "<<countrl;
    // if(countl>=countr && countlr<countl && countrl<countl)
    // {
    //     cout<<(countr*2)+countlr+countrl;
    // }
    // else if(countl<countr && countlr<countr && countrl<countr)
    // {
    //     cout<<(countl*2)+countlr+countrl;
    // }
    // else if(countrl>countl  && countrl>countr && countrl>countlr)
    // {
    //     cout<<(countl)+(countr)+(countlr*2);
    // }
    // else{
    //     cout<<(countl)+(countr)+(countrl*2);
    // }

    cout<<min(min((countr*2)+countlr+countrl,(countl*2)+countlr+countrl),min((countl)+(countr)+(countlr*2),(countl)+(countr)+(countrl*2)));
    return 0;
}