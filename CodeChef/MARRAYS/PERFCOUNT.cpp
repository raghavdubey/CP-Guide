#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <set>
#include <functional>
#include <numeric>
#include <math.h>
#include <string>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <utility>
#define pii              pair <int,int>
#define pll              pair <long long,long long>
#define sc               scanf
#define pf               printf
#define pb               push_back
#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define MP               make_pair
#define db               double
#define EPS              10E-10
#define ff               first
#define ss               second
#define sqr(x)           (x)*(x)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define VI               vector <ll>
#define DBG              pf("Hi\n")
#define MOD              1000000007
#define SZ(a)            (int)a.size()
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define stlloop(v)       for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define loop(i,n)        for(ll i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<n;i++)
#define loop2(i,n)       for(int i=2;i<n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
#define DRT() ll test_case; cin>>test_case; while(test_case--)
using namespace std;

int main()
{
  ll N,P,a,b,temp1;
  DRT()
  {
    cin>>N>>P;

    ll arr[N];
    loop(i,N)
    {
      cin>>arr[i];
    }

    a=0;
    b=0;
    temp1=P/2;

    for(ll u=0;u<N;temp1=P/2,u++)
    {
      if(temp1<=arr[u])
        {
          a+=1;
        }
      else if((temp1/5)>=arr[u])
      {
        b+=1;
      }
    }
    if((b==2) and (a==1))
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;

  }
  return 0;
}
/*
6
3 100
10 1 100
3 100
11 1 100
3 100
10 1 10
3 100
10 1 50
4 100
50 50 50 50
4 100
1 1 1 1
*/
