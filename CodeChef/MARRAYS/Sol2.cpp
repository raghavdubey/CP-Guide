#include <iostream>
#include<algorithm>
#include<stdio.h>
#define MAX 1000010
using namespace std;

int main() {
    int t;
    long A[MAX],C[MAX],d,n,e,f,p1,p2;
    long long POW[MAX],powd;
    double maxo,mino;
    scanf("%d",&t);
    while(t--){
        d=0;
        scanf("%ld",&n);
        for(long i=0;i<n;i++){
            scanf("%ld",&C[i]);
            for(long j=0;j<C[i];j++){
                scanf("%ld",&A[d]);
                d++;
            }
        }
        /*
        for(long i=0;i<n;i++)printf("%ld ",C[i]);
        printf("\n");
        for(long i=0;i<d;i++)printf("%ld",A[i]);
        printf("\n");
        */
        for(long j=0;j<C[0];j++)POW[j]=0;
        e=C[0];
        f=0;
        for(long i=1;i<n;i++){
            //printf("%ld %ld %ld\n",e,f);
            p1=f;
            p2=f;
            maxo=1.0*A[f];
            mino=1.0*A[f];
            //printf("%lf %lf\n",maxo,mino);
            for(long j=f;j<f+C[i-1];j++){//Loop for finding p1 and p2
                double temp;
                temp=(1.0*POW[j])/i;
                if(1.0*A[j]+temp>maxo){
                    maxo=1.0*A[j]+temp;
                    p1=j;
                }
                if(1.0*A[j]-temp<mino){
                    mino=1.0*A[j]-temp;
                    p2=j;
                }
            }
            //printf("%lf %lf %ld %ld\n",maxo,mino,p1,p2);
            for(long j=e;j<e+C[i];j++){//loop for finding powers of current set
                double t1=maxo-A[j];
                double t2=mino-A[j];
                if(t1<0)t1*=-1;
                if(t2<0)t2*=-1;
                if(t1>t2){
                    powd=abs(A[j]-A[p1])*i+POW[p1];
                    //printf("%ld %ld %ld\n",A[j],A[p1],A[j]-A[p1]);
                }
                else{
                    powd=abs(A[j]-A[p2])*i+POW[p2];
                    //printf("%ld %ld %ld\n",A[j],A[p2],A[j]-A[p2]);
                }
                if(j==e)POW[j+C[i]-1]=powd;
                else POW[j-1]=powd;
            }
            f=f+C[i-1];
            e=e+C[i];
        }
        //for(long i=0;i<d;i++)printf("%lld\n",POW[i]);
        long long ans=0;
        for(;f<d;f++){
            if(POW[f]>ans)ans=POW[f];
        }
        printf("%lld\n",ans);
    }
  // your code goes here
  return 0;
} 
