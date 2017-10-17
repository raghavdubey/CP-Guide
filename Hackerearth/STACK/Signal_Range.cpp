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
     #include <stack>
     using namespace std;
     typedef vector<int> vi;
     typedef vector<vi> vvi;
     typedef pair<int,int> ii;
     typedef long long int lli;
     int main()
     { lli n,t;
     cin>>t;
     while(t--)
     {cin>>n;
     stack<lli> stk;
     lli *inp=new lli[n];
     lli *ans=new lli[n];
     for(lli x=0;x<n;x++)
     { cin>>inp[x];

     }
     /*Processing for elements*/
     ans[0]=1;
     stk.push(0);
     for(lli x=1;x<n;x++)
     { while(!stk.empty() and inp[stk.top()]<= inp[x])
       stk.pop();
       ans[x]=(stk.empty())?(x+1) : (x-stk.top());
       stk.push(x);

     }
     for(lli x=0;x<n;x++)
     { cout<<ans[x]<<" ";
       //cout<<"a";
     }
     }
     }
