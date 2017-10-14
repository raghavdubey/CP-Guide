#include <cstdio>
#include <queue>
using namespace std;

struct line{
    int y;
    int we;
};
#define initialval 4951
int dist[101];
bool operator <( line a, line b ) {
	return a.we < b.we;
}
int dj(vector<line>vec[],int c,int s,int e,int t)
{
	int i;
	for(i=0;i<=c;i++)
	{
		dist[i]=initialval;
	}
	priority_queue<line> q;
	q.push((line){s,0});
	dist[s]=0;
	while(!q.empty())
	{
		line p=q.top();
		q.pop();
		for(i=0;i<vec[p.y].size();++i)
		{ 
			line ve=vec[p.y][i];
			if(dist[p.y]+ve.we < dist[ve.y])
			{
				dist[ve.y]=dist[p.y]+ve.we;
				q.push(ve);
			}

		}
	}
	int count=0;
	
		if ( dist[e] <= t ) {
		count=count+1;
	    }
	   
	
	return count;
	

}

int main()
{
	int n,e,t,totaledge,i,j,k;
	scanf("%d",&n);
	scanf("%d",&e);
	scanf("%d",&t);
	scanf("%d",&totaledge);
	
      std::vector<line>vec[n+1];
      int x,y,we;
		for(j=0;j<totaledge;j++)
		{
           scanf("%d%d%d",&x,&y,&we);
           vec[x].push_back((line){y,we});
        
          
           
		}
		int success=0;
		for(i=1;i<=n;i++)
		{
            success=success+dj(vec,n,i,e,t);
		}
		printf("%d\n",success);
	
	return 0;
}