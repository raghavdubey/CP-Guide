#include <iostream>
#include <stdio.h>
#include <cstring>
#include<set>
#include <algorithm>
#include <cstdio>
#include <vector>
#include<string.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
#define DRT() ll test_case; cin>>test_case; while(test_case--)
using namespace std;
int main()
{
boost;
    ll k,i,s,n;

    DRT()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s>>k;
        }
        k=1;
        for(i=2;i<=n;i++)
            k=k^i;
        cout<<k<<endl;
         }
}
//Signature Anmol mishra Team maarlow 
