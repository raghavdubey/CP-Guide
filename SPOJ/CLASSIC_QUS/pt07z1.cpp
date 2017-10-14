#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
 
vector <int>v[100005];
bool seen[100005];
int d[100005];
int dfs(int s)
{
   seen[s]=true;int m1=0,m2=0;
   for(int i=0;i<v[s].size();i++)
   {
   	 if(!seen[v[s][i]])
   	 {
   	 	 int m=dfs(v[s][i]);
   	 	 if(m>m1)
   	 	 {
   	 	 	m2=m1;m1=m;
   	 	 }
   	 	 else if(m>m2)
   	 	 {
           m2=m;
   	 	 }
   	 }
   }
   d[s]=m1+m2;  
   return m1+1;
} 
 
int main()
{    
	 int n,a,b;
	 cin>>n;  // no. of nodes
       // nodes are numbered from 1 to n
   for(int i=1;i<=n;i++)  // n-1 edges
     {    
     	 cin>>a>>b;
     	 v[a].push_back(b);  
     	 v[b].push_back(a);
     }
 
     int tmp=dfs(1);
 
     tmp=0;
     for(int i=1;i<=n+1;i++)
      if(d[i]>tmp)
        tmp=d[i];
 
     cout<<tmp<<endl;
 
return 0;
}