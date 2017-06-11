#include<iostream>
using namespace std;
int main()
{
int n,k,max1=-10000,max2=-10000,min1=9999999,min2=9999999,m1,m2,n1,n2;
cout<<"Enter the numbers N and K"<<endl;
cin>>n>>k;
int s1[n],s2[n];
cout<<"Enter height of books of first shelf"<<endl;
for(i=0;i<n;i++)
{
cin>>s1[i];
if(max1<s1[i])
{max1=s1[i];
m1=i;}
if(min1>s1[i])
{min1=s1[i];
n1=i;
}
cout<<"Enter the height of books of second shelf"<<endl;
for(i=0;i<n;i++)
{
cin>>s2[i];
if(max2<s2[i])
{max2=s2[i];
m2=i;}
if(min2>s1[i])
{min2=s1[i];
n2=i;
}
if(max1>=max2)
{

