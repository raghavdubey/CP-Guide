#include <iostream>
#include <cstdio>
#include <vector>
#include<algorithm>
#include<set>

using namespace std;
#define ll long long
int main() {
  // your code goes here
  ll t;
  scanf("%lld",&t);
  while(t--){
      ll n,i,j,k;
      scanf("%lld",&n);
      vector <ll> v[n+2];
      set<ll> s;
      set<ll> ::iterator it;
      for(i=1;i<=n;i++){
          ll s;
          //cin>>s;
         scanf("%lld",&s);
          while(s--){
              ll tmp;
              //cin>>tmp;
              scanf("%lld",&tmp);
              v[i].push_back(tmp);

          }
      }

      ll pdp[1000010],dp[1000010];

      for(i=0;i<1000010;i++){
          pdp[i]=dp[i]=0;
      }

      for(i=1;i<=n;i++){
          ll len;
          len=v[i].size();
          for(j=0;j<len;j++){
              v[i].push_back(v[i][j]);
          }

     //    cout<<v[i].size()<<"--";
      }
     ll len=v[1].size()/2;
     ll ma=0,mi=10000000;
     for(i=0;i<len;i++){
         ma=max(ma,v[1][i]);
         mi=min(mi,v[1][i]);
     }
         ll arr[10000000],siz;

     len=v[2].size()/2;
    // cout<<v[2].size()<<" ";
     for(i=len;i<2*len;i++){
         pdp[v[2][i]]=max(abs(v[2][i-len+1]-ma),pdp[v[2][i]]);
         pdp[v[2][i]]=max(abs(v[2][i-len+1]-mi),pdp[v[2][i]]);
        // flg[v[2][i]]=1;
        s.insert(v[2][i]);
     }
     siz=s.size();
     k=0;
  for(it=s.begin();it!=s.end();it++){
      arr[k++]=*it;
  }
   //  for(i=1;i<=500;i++)
     //cout<<pdp[i]<<""

     for(i=3;i<n;i++){
         ll len=v[i].size()/2;
         for(j=len;j<2*len;j++){
             for(k=0;k<siz;k++){

                 dp[v[i][j]]=max(dp[v[i][j]],pdp[arr[k]]+(abs(v[i][j-len+1]-(arr[k]))*(i-1)));


             }
         }

         s.clear();

         for(j=len;j<2*len;j++){
             pdp[v[i][j]]=dp[v[i][j]];
            // dp[v[i][j]]=0;
             s.insert(v[i][j]);
         }

         siz=s.size();
     k=0;
  for(it=s.begin();it!=s.end();it++){
      arr[k++]=*it;
  }

         for(j=len;j<2*len;j++)
         dp[v[i][j]]=0;




        /* for(ll k=1;k<=500;k++)
         {//flg[k]=0;
             pdp[k]=dp[k];
             dp[k]=0;
         }*/

       /*for(j=len;j<2*len;j++){
           flg[v[i][j]]=1;
       }*/
     }
     if(n>2){
         ma=0,mi=100000000;
         len=v[n].size()/2;
         for(i=0;i<len;i++){
             mi=min(mi,v[n][i]);
             ma=max(ma,v[n][i]);
         }
         for(it=s.begin();it!=s.end();it++){
            dp[ma]=max(dp[ma],pdp[*it]+(abs(ma-(*it))*(n-1)));
            dp[mi]=max(dp[mi],pdp[*it]+(abs(mi-(*it))*(n-1)));
         }
         printf("%lld\n",max(dp[ma],dp[mi]));
     }
      else{
       ll fin=0;
      for(it=s.begin();it!=s.end();it++){
          fin=max(pdp[*it],fin);
       }
       printf("%lld\n",fin);
      }

      //cout<<pdp[1000010]<<" ";

  }
  return 0;
}  
