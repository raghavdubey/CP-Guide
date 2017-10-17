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
          bool compute(vector< vector<lli> > &v,lli n,lli last);
         int main()
         { lli n,q;
         cin>>n;
         vector < vector <lli> > v(n);
         stack <lli> aux;

         for(lli i=0;i<n;i++)
         { lli x,entry;
         cin>>x;
         while(x--)
         {cin>>entry;

         v[i].push_back(entry);
         }
         }
         cin>>q;
         aux.push(v[0][0]);
         for(lli i=1;i<v[0].size();i++)
         { if(v[0][i]<aux.top())
         {aux.push(v[0][i]);}
         else
         aux.push(aux.top());
         }
         lli a,b,c;
         while(q--)
         { cin>>a;
           if(a==0)
           {cin>>b;
           v[b-1].pop_back();
           if(b==1)
           aux.pop();}
           else if(a==1)
           {cin>>b>>c;
           if(b==1)
           {
            if(c<aux.top())
            aux.push(c);
           }
           v[b-1].push_back(c);

           }else if(a==2)
           { cout<<"last is"<<aux.top()<<endl;
           bool ans=compute(v,n,aux.top());
             if(ans==true)
             cout<<"YES\n";
             else
             cout<<"NO\n";
           }

         }
         }
          bool compute(vector< vector<lli> > &v,lli n,lli last)
          { lli l,r,mid,flag=0;

          for(lli i=1;i<n;i++)
            { l=0;
              r=v[i].size()-1;
              while(l<r)
              {
              if(r-l==1)
              {if(v[i][l]>last)
              {last=v[i][l];break;}
              else if(v[i][l+1]>last)
              {last=v[i][l+1];break;}
              else
              {flag=1;break;}
              }
              mid=l+(r-l)/2;
                if(v[i][mid]>last)
                { if(r-l==2)
                   { if(v[i][l+1]>last)
                   {last=v[i][l+1];break;}
                   else
                   {flag=1;break;}}
                r=mid;}
                else
                {l=mid;}


              }
              if(flag==1)
              break;
            }
            if(flag==1)
            return false;
            else
            return true;
          }



/*2
3 3 5 4
3 1 1 2
8
0 1
2
1 1 1
2
0 1
2
1 2 4
2*/


/*NO
YES
NO
YES*/
