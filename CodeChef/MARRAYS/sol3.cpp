#include<bits/stdc++.h>
using namespace std;
vector<long long> vect[1000002],vectorforn2[1000002];
long long prefixarr[1000002];
long long storingdyn[1050000];
long long mod(long long q)
{
  if(q<0)
  return -q;
  else
  return q;
}

long long int A[1000003];
long long tree[3000006][2]={0};
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node wilong long  have a single element
        tree[node][0] = A[start];
        tree[node][1]= start;
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node wilong long  have the sum of both of its children
        tree[node][0] = max(tree[2*node][0],tree[2*node+1][0]);
        if(tree[2*node][0]>tree[2*node+1][0])
        tree[node][1]=tree[2*node][1];
        else
        tree[node][1]=tree[2*node+1][1];
    }
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      for(int i=0;i<=1050000;i++)
      {
        storingdyn[i]=0;
    }
    int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            {
        vect[i].clear();
        vectorforn2[i].clear();
      }
        long long m,sum=0,val;
    for(int i=1;i<=n;i++)
    {
            cin>>m;
            sum+=m;
            prefixarr[i]=sum;
            for(int j=1;j<=m;j++)
      {
                cin>>val;
                if(n==2)
                {
                  vectorforn2[i].push_back(val);
                }
                vect[i].push_back(val);
            }
        }
        if(n==2)
    {
      sort(vectorforn2[2].begin(),vectorforn2[2].end());
            sort(vectorforn2[1].begin(),vectorforn2[1].end());

      long long val2=abs(vectorforn2[1][0]-vectorforn2[2][vectorforn2[2].size()-1]);
      long long val1=abs(vectorforn2[2][0]-vectorforn2[1][vectorforn2[1].size()-1]);

      if(val1>val2)
            cout<<val1<<endl;
            else
            cout<<val2<<endl;
        }
        else
    {
        for(int i=2;i<=n;i++)
    {
            for(int j=0;j<vect[i].size();j++)
      {
                for(int w=0;w<vect[i-1].size();w++)
        {
          int variable;
          if(w==0)
                        variable=vect[i-1].size()-1;
                    else
                      variable=w-1;

                    long long val3=storingdyn[prefixarr[i-2]+w+1];
          long long val4=storingdyn[prefixarr[i-1]+j+1];
          val3+=((i-1)*abs(vect[i][j]-vect[i-1][variable]));

                    if(val3>val4)
          storingdyn[1+j+prefixarr[i-1]]=val3;
          else
          storingdyn[1+prefixarr[i-1]+j]=val4;
                }
            }
        }
        long long ans=0,ml=vect[n].size();

        for(int i=0;i<ml;i++)
    {
            if(storingdyn[prefixarr[n-1]+i+1]>ans)
            ans=storingdyn[prefixarr[n-1]+i+1];
        }

    cout<<ans<<endl;
        }
    }
} 
