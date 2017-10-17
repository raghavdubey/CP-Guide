#include <iostream>
     #include <vector>
     #include <string.h>
     #include <sstream>
     #define sz(a) int((a).size())
     #define pb push_back
     #define all(c) (c).begin(),(c).end()
     #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
     #define present(c,x) ((c).find(x) != (c).end())
     #define cpresent(c,x) (find(all(c),x) != (c).end())
     #include<stdio.h>
     #include<set>
     #include<algorithm>
     #include <numeric>
     using namespace std;
     typedef vector<int> vi;
     typedef vector<vi> vvi;
     typedef pair<int,int> ii;
     typedef long long int lli;
     int main()
     { lli n,x,q,track=0,ans=-1;
     scanf("%lld",&n);
     vector<lli> v;
     lli * inp=new lli[n];
     for(lli i=0;i<n;i++)
     {scanf("%lld",&inp[i]);}
     scanf("%lld %lld",&q,&x);
     while(q--)
     { string res;
     cin>>res;
     if(res=="Harry")
     { v.push_back(inp[track++]);
       if(x==accumulate(v.begin(),v.end(),0) && ans==-1)
       {ans=v.size();
       //cout<<accumulate(v.begin(),v.end(),0)<<endl;
       }


     }else
     { v.pop_back();



     }

     }
     printf("%lld\n",ans);

     }
