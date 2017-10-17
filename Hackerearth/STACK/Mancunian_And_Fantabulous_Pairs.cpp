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
     { lli n,temp;
       cin>>n;
       stack <lli> inp,aux;
       lli ans=0;
        cin>>temp;
       inp.push(temp);
       aux.push(temp);
       for(lli x=1;x<n;x++)
       { cin>>temp;
        while(temp>inp.top())
        { ans++;
         inp.pop();
         if(inp.empty()==true)
         break;
        }
        inp.push(temp);
        }
     cout<<ans<<endl;

     }

     /*4
1 3 2 4*/
