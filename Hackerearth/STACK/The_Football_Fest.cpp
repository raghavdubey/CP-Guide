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
     using namespace std;
     typedef vector<int> vi;
     typedef vector<vi> vvi;
     typedef pair<int,int> ii;
     typedef long long int lli;
     int main()
     { int t;
     scanf("%d",&t);
     while(t--)
     { lli n,id;char temp;
     vector<long long int> v;
     scanf("%lld %lld",&n,&id);
       v.push_back(id);
       while(n--)
       {//cout<<n<<endl;

      cin>>temp;
        if(temp=='P')
        {lli inp;
        scanf("%lld",&inp);
        v.push_back(inp);
        }else
        { lli a,b;
          a=*v.rbegin();
          v.pop_back();
          b=*v.rbegin();
          v.pop_back();
          //cout<<a<<"  "<<b<<endl;
         v.push_back(a);
         v.push_back(b);


        }


       }
       printf("Player %lld\n",*v.rbegin());

     }
     }
