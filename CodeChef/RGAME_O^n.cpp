#include <iostream>
#define MOD 1000000007
#include <math.h>
#include <stdio.h>
using namespace std;
typedef long long int lli;
long long power(long long a,long long b){
    long long x=1,y=a;
    while(b > 0){
        if(b%2){
            x = (x*y);
            if (x>MOD)
            	x%=MOD;
        }
        y = (y*y);
        if(y>MOD)
        	y%=MOD;
        b /= 2;
    }
    return x;
}
int main()
{ lli t;
	scanf("%lld",&t);
	while(t--)
   { lli n;
   	cin>>n;
   	lli * inp=new lli[n+1];
    for(lli x=0;x<=n;x++)
    	scanf("%lld",&inp[x]);
 
    lli ans=0;
    lli temp=0;
    lli * suffix=new lli[n+1];
    suffix[n]=inp[n];
    for(lli i=n-1;i>=0;i--)
      {suffix[i]=((inp[i]%MOD*(lli)power(2,n-i)%MOD)%MOD+suffix[i+1]%MOD)%MOD;
      ans=(ans+(inp[i]%MOD*(lli)power(2,i-1)%MOD*suffix[i+1]%MOD)%MOD)%MOD;}
 
 
   // for(lli x=0;x<=n;x++)
    //	cout<<suffix[x]<<endl;
    printf("%lld\n",2*ans%MOD);
   }
 
 
}
