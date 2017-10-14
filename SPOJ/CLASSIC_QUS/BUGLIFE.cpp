#include <bits/stdc++.h>
#define male 5
#define fmale 6
using namespace std;
int mat[2001][2001];
int arr[2001];
int m,n;

int bugstatus(int root)
{   int tp;
    int result=1;
    int i,j;
	arr[root]=male;
	stack<int>bug;
	bug.push(root);

	while(!bug.empty())
	{
       tp=bug.top();
       bug.pop();
       for(i=1;i<=m;i++)
       {
          if(mat[tp][i]==1&&arr[i]==0)
          {
            bug.push(i);
            if(arr[tp]==male)
                {arr[i]=fmale;}
            else
                arr[i]=male;
          }
          if((mat[tp][i]==1)&&(arr[tp]==arr[i]))
          {
            result=0;
            return result;
          }
       }


	}
    return result;

}
int main()
{
	int t;
	cin>>t;
	int i,j,k,result;
	for(i=0;i<t;i++)
	{   int x,y;
		cin>>m>>n;
		for(j=1;j<=m;j++)
		{
			for(k=1;k<=m;k++)
			{
				mat[j][k]=0;
			}
            arr[j]=0;
		}
        int root;
        for(j=0;j<n;j++)
        { 
        	cin>>x>>y;
        	if(j==0)
        	{root=x;

        	}
        	mat[x][y]=1;
            mat[y][x]=1;

        }
        //result = bugstatus(root);

        //if(result==1)
        //{
        	for(j=1;j<=m;j++)
        	{
        		if(arr[j] == 0)
        		{
        			result=bugstatus(j);
        			if(result==0)
        				break;
        		}
        	}
        //}
        

 cout<<"Scenario #"<<i+1<<":"<<endl;
 if(result==0)
    cout<<"Suspicious bugs found!"<<endl;
 else
    cout<<"No suspicious bugs found!"<<endl;
	}
   
}
