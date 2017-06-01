#include<iostream>
using namespace std;
int main()
{
int m,n,i,r1,r2,r3;
cout<<"Enter the 2 numbers"<<endl;
cin>>m>>n;
if(m%n==0)
cout<<"GCD is"<<n<<endl;
if(n%m==0)
cout<<"GCD is"<<m<<endl;
else
{
if(m>n)
{
r1=m%n;
}
if(n>m)
{
r1=n%m;
}
}

for(i=0;i<n;i++)
{

}
return 0;
}

