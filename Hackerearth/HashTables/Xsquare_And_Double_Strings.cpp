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
         { lli n,flag=0;
         cin>>n;
         while(n--)
         { flag=0;
          char inp[150];
          vector <int> lookup(26);
          cin>>inp;
          for(int i=0;i<strlen(inp);i++)
          { lookup[inp[i]-'a']++;
          }
          for(int i=0;i<26;i++)
          { if(lookup[i]%2==0 && lookup[i]!=0)
          { flag=1;
            break;
          }


          }
          if(flag==1)
          cout<<"Yes"<<endl;
          else
          cout<<"No"<<endl;

         }
         }
