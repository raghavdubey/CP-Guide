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
         scanf("%lld",&inp);
         stk.push(inp);
         for(lli x=1;x<n;x++)
          { scanf("%lld",&inp);
          if(inp>0)
          {


          stk.push(inp);}
          else
          { if(stk.top()==(-1)*inp)
            {temp++;
            stk.pop();
            if(2*temp>ans)
            ans=2*temp;}
            else
            {temp=0;
            stk.push(inp);
            }


          }
          }
          cout<<ans;



         }
    /*5
    1 -1 2 3 -2

    2*/
