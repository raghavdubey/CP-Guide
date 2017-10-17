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
 using namespace std;
 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long int lli;
int main()
{lli t,c,temp;
scanf("%lld",&t);
vector<int> s;
while(t--)
{ scanf("%lld",&temp);
if(temp==1)
{if(s.empty())
{printf("No Food\n");
}else
{printf("%lld\n",*s.rbegin());
s.pop_back();
}


}else
{scanf("%lld",&temp);
s.push_back(temp);



}


}
}

