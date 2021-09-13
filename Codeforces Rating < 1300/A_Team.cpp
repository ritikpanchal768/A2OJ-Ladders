#include<iostream>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    int a,b,c;
    int sum=0;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum>1)
        {
            count++;
        }
        
    }
    cout<<count;
    return 0;
}