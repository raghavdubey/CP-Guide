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
         { vector<lli> v1;
         lli n;char inp;
         cin>>n;
         while(n--)
         { cin>>inp;
          if(inp=='D')
          {if(!v1.empty())
          { lli a=*v1.begin();
          v1.erase(v1.begin());
          cout<<a<<" "<<v1.size()<<endl;
          }
          else
          {cout<<"-1 "<<0<<endl;}}
         else if(inp=='E')
          { lli temp;
          cin>>temp;
          v1.push_back(temp);
          cout<<v1.size()<<endl;
          }


         }

         }
