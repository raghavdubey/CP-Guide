#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

#define pb push_back
#define mp make_pair
#define int long long

int MAX = 1000000;

vector<int> arr[1000011];
vector<lli> arr2[10000011];

int g(int n, int j){
    if(j==0)
        return arr[n].size()-1;
    return j-1;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        lli n,x,m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            arr[i].clear();
            for(int j=0;j<m;j++)
            {
                cin>>x;
                arr[i].pb(x);
            }
            arr2[i].resize(m,0);
        }
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }

        if(n<=2){
            int mn=INT_MAX,mx=INT_MIN;
            for(int j=0;j<arr[0].size();j++){
                mx = max(mx,arr[0][j]);
                mn = min(mn,arr[0][j]);
            }

            int mn2=INT_MAX,mx2=INT_MIN;
            for(int j=0;j<arr[1].size();j++){
                mx2 = max(mx2,arr[1][j]);
                mn2 = min(mn2,arr[1][j]);
            }
            cout<<max(mx-mn2,mx2-mn)<<"\n";
            continue;
        }
        lli temp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<arr[i].size();j++){
                if(i==0)    continue;
                temp = 0;
                for(int k=0;k<arr[i-1].size();k++)
                temp=max(temp,arr2[i-1][k] + i*abs(arr[i][j] - arr[i-1][g(i-1,k)]));
                arr2[i][j]=temp;
            }
        }

        lli ans=0;
        for(int i=0;i<arr[n-1].size();i++)
            ans=max(ans,arr2[n-1][i]);

        cout<<ans<<"\n";
    }
    return 0;
}   
