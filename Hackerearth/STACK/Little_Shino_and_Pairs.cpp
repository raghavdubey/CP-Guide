#include <iostream>
     #include <vector>
     #include <string.h>
     #include <sstream>
     #include <stack>
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
     { lli n,inp,ans=0;
     cin>>n;
     stack<lli> s;
     for(lli i=0;i<n;i++)
     { cin>>inp;
      while(!s.empty() and inp>s.top())
      {s.pop();
      ans++;}
      if(!s.empty())
      ans++;
      s.push(inp);


     }
     cout<<ans;
     }
