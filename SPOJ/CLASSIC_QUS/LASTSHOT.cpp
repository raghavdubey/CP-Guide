#include <bits/stdc++.h>
using namespace std;
int counter,result;
int visited[10001];
vector<int> v[10001];
void dfs(int node)
{
	int i;
	counter++;
	visited[node]=1;
	for(i=0;i<v[node].size();i++)
	{
		if(!visited[v[node][i]])
		{
			dfs(v[node][i]);
		}
	}

}
int main()
{
	int m,n;
	cin>>n>>m;
	int i,x,y,j;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
	}
	for(j=1;j<n+1;j++)
	{
		memset(visited,0,sizeof(visited));
		counter=0;
		dfs(j);
		result=max(result,counter);
	}
	cout<<result<<endl;
}