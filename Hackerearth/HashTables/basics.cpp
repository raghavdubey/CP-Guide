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
         vector <string> v(100001);
         int hashfun(lli num)
         { int index=num % 100001;
           return index;
         }
         void insert_hash(string inp,lli num)
         { int index=hashfun(num);
           v[index]=inp;

         }
         string search_hash(lli num)
         { int index=hashfun(num);
           return v[index];




         }
         int main()
         { lli num,ask,t,q;string inp;
           cin>>t;
           while(t--)
           { cin>>num>>inp;
             insert_hash(inp,num);

           }
           cin>>q;
           while(q--)
           { cin>>ask;
             cout<<search_hash(ask)<<endl;


           }
         }
/*5
1 vasya
2 petya
3 kolya
4 limak
5 illya
2
1
2*/
