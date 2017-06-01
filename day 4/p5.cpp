#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int i,n,m,t=0;
cout<<"Enter the number"<<endl;
cin>>n;
m=sqrt(n);
for(i=1;i<=m;i++)
{
if(n%i==0)
t=t+1;
}
if(t==1)
cout<<"Is a prime"<<endl;
else
cout<<"Is not a prime"<<endl;
return 0;
}
