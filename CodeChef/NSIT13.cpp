#include<iostream>
using namespace std;
int main(){

for(int k=0;k<10;k++){
    int a;
    int h[42]={0},i=0,c=0;
do{
    cin>>a;
    h[a%42]=1;
    i++;
}while(i<10);
for(int j=0;j<42;j++){
    if(h[j]==1)
        c++;
}
cout<<c<<endl;
}
return 0;
} 
