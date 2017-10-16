#include<bits/stdc++.h>
using namespace std;

long long dish1[2][1000009],dish2[2][1000009];

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        if(n==2)
        {
            long long lar,sma,lar1,sma1;
            for(long long i=0;i<n;i++)
            {
                long long s;
                cin>>s;
                lar=INT_MIN;
                sma=INT_MAX;
                for(long long j=0;j<s;j++)
                {
                    long long a;
                    cin>>a;
                    lar=max(lar,a);
                    sma=min(sma,a);
                }
                if(i==0)
                {
                    lar1=lar;
                    sma1=sma;
                }
            }
            cout<<max(abs(lar1-sma),abs(sma1-lar))<<endl;
        }
        else
        {
            for(long long i=0;i<1000009;i++)
            {
                dish1[0][i]=0;
                dish1[1][i]=0;
                dish2[0][i]=0;
                dish2[1][i]=0;
            }
            long long s1;
            cin>>s1;
            for(long long i=s1;i>0;i--)
                cin>>dish1[0][i];
            dish1[0][0]=dish1[0][s1];
            long long s2;
            for(long long i=1;i<n;i++)
            {
                cin>>s2;
                for(long long j=s2;j>0;j--)
                    cin>>dish2[0][j];
                dish2[0][0]=dish2[0][s2];

                for(long long j=1;j<=s1;j++)
                {
                    for(long long k=0;k<s2;k++)
                        dish2[1][k+1]=max(dish2[1][k+1],abs(dish2[0][k]-dish1[0][j])*i+dish1[1][j]);
                }
                for(long long k=0;k<=s2;k++)
                {
                    dish1[0][k]=dish2[0][k];
                    dish1[1][k]=dish2[1][k];
                }
                s1=s2;
            }
            long long ans=INT_MIN;
            for(long long i=1;i<=s2;i++)
                if(ans<dish2[1][i])
                    ans=dish2[1][i];
            cout<<ans<<endl;
        }
    }
}
 
