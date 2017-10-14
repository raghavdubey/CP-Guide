#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a=22,b=7;
        double a1,b1,a2,b2,ans1,ans2,temp;
        const double pi=acos(-1);
        scanf("%lf %lf %lf %lf",&a1,&b1 ,&a2,&b2);
        temp=(b1+2*a1)*a1*a1/3;
        ans1=temp*pi;
        temp=a2*a2*b2;
        ans2=temp*pi;
        printf("%.9lf %.9lf\n",ans1 ,ans2);
    }
    return 0;
} 
