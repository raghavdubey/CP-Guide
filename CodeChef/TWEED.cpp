#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <stack>
#include<set>
#include <math.h>
#define all(c) c.begin(),c.end()
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
#define DRT() ll test_case; cin>>test_case; while(test_case--)
using namespace std;
int main()
{
    boost;
    string d;
    ll n,m,i,j;
    set <ll> f;
    DRT()
    {
        ll inp[100000000];
        cin>>n>>d;
        for (i=0;i<n;i++)
        {
            cin>>inp[i] ;
        }
        if(d=="Dee"&&n==1&&inp[0]%2==0)
        {
            cout<<"Dee\n" ;
        }
        else
        {
            cout<<"Dum\n" ;
        }
    }
    return 0;
}
//Signature Anmol mishra Team maarlow 
