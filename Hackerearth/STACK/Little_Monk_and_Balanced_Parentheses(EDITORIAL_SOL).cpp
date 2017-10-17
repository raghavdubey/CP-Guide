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
         { lli n;
         scanf("%lld",&n);
         lli ans=0,temp=0,inp;
         stack<lli> stk;
         set <lli> result;
         vector <lli> v;
         stk.push(0);
         for(lli x=0;x<n;x++)
          { scanf("%lld",&inp);
            v.push_back(inp);
            if(inp>0)
            stk.push(x+1);
            else
            { temp=stk.top();
            stk.pop();
              if(v[temp-1]==(-1)*inp)
              { if(!stk.empty())
                {if(ans<x+1-stk.top())
                 ans=x+1-stk.top();
                }else
                { stk.push(x+1);

                }



              }else
              stk.push(x+1);


            }

          }
          cout<<ans;



         }
    /*5
    1 -1 2 3 -2

    2*/

