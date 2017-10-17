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
     vector< pair<lli,lli> > inp;
     vector< pair<lli,lli> > process(n);
     stack < pair<lli,lli> > stk;
     for(lli i=0;i<n;i++)
     { pair<lli,lli> temp;
     scanf("%lld",&temp.first);
     temp.second=i;
     inp.push_back(temp);
     }
     /*Processing for Right Next Greatest integer*/
     pair<lli,lli> next;
     stk.push(inp[0]);
     for(lli m=1;m<n;m++)
     { next=inp[m];
     while(!stk.empty())
       {
       if(stk.top().first<next.first)
         {process[stk.top().second].first=m+1;
         stk.pop();
         }
         else
         {

         break;

         }

       }

       stk.push(inp[m]);
      // cout<<"a";
     }
     while(!stk.empty())
     {process[stk.top().second].first=-1;
        stk.pop();

     }
     /*Processing for Left Next Greatest integer*/

     stk.push(*inp.rbegin());
     for(std::vector< pair<lli,lli> > ::reverse_iterator m=inp.rbegin()+1;m!=inp.rend();m++)
     { next=*m;
     while(!stk.empty())
     {
     if(stk.top().first<next.first)
       { process[stk.top().second].second=next.second+1;
          stk.pop();

       }else
       { break;

       }

     }
stk.push(next);
     }
      while(!stk.empty())
     {process[stk.top().second].second=-1;
        stk.pop();
     }
     /*printing Answer*/
     for(lli m=0;m<n;m++)
     { cout<<process[m].second+process[m].first<<" ";

     }
     }
