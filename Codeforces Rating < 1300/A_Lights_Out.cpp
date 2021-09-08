#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3][3];
    
    // input

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //output
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    //logic
    int sum;
    int b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            if(i==0 && j==0)
            {
                //cout<<a[i][j]<<" "<<a[i+1][j]<<" "<<a[i][j+1]<<endl;
                sum=a[i][j]+a[i+1][j]+a[i][j+1];
            } 
            else if(i==0)
            {
                if(j==2)
                {
                    //cout<<a[i][j]<<" "<<a[i][j-1]<<" "<<a[i+1][j]<<endl;
                    sum=a[i][j]+a[i][j-1]+a[i+1][j];
                }
                else{
                    //cout<<a[i][j]<<" "<<a[i][j-1]<<" "<<a[i+1][j]<<" "<<a[i][j+1]<<endl;
                    sum=a[i][j]+a[i][j-1]+a[i+1][j]+a[i][j+1];
                }
                
            }
            else if(j==0)
            {
                if(i==2)
                {
                    //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j+1]<<endl;
                    sum=a[i][j]+a[i-1][j]+a[i][j+1];
                }
                else{
                    //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i+1][j]<<" "<<a[i][j+1]<<endl; 
                    sum=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1];
                }
                
            }
            else if(i==2 && j==2)
            {
                //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j-1]<<endl;
                sum=a[i][j]+a[i-1][j]+a[i][j-1];
            }
            else if(i==2 )
            {
                if(j==0)
                {
                    //cout<<"y"<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j+1]<<endl;
                    sum=a[i][j]+a[i-1][j]+a[i][j+1];
                }
                else{
                    //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j-1]<<" "<<a[i][j+1]<<endl;
                    sum=a[i][j]+a[i-1][j]+a[i][j-1]+a[i][j+1];
                }  
            }
            else if(j==2)
            {
                //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j-1]<<" "<<a[i+1][j]<<endl;
                sum=a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j];
            }
            else{
                //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j-1]<<" "<<a[i+1][j]<<" "<<a[i][j+1]<<endl;
                sum=a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1];
            }

            b[i][j]=sum;
        }
    }
    //cout<<endl;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(b[i][j]%2==0)
            {
                b[i][j]=1;
            } 
            else{
                b[i][j]=0;
            }
        }
       
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
       
    }
    
    

   
    
    
    


    return 0;
}