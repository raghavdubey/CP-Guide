#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		char str[3002];
		string ss[3];
		int j=0;
       scanf("%s",str);
  char *token = strtok(str, "e");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        ss[j]=token;
        token = strtok(NULL, "e");
        j++;
    }
   double r=::atof(ss[0].c_str());
   double s=::atof(ss[1].c_str());
   double h=::atof(ss[2].c_str());
   double l=sqrt(r*r+h*h);
   double a=3.1415*r*l*s;
   long long int aa=a+1;
   printf("%lld\n",aa);
 
   


	}

}