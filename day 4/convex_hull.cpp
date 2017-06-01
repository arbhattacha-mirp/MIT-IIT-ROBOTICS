#include<iostream>
using namespace std;
int main()
{
int n,i;
double maxslope=-10000.0,minslope=10000.0;
double mix=10000.0,miy=10000.0;
cout<<"Enter the value of n"<<endl;
cin>>n; 
double x[n],y[n],cx;
cout<<"Enter the coordinates"<<endl;

for(i=0;i<n;i++)
{
cin>>x[i]>>y[i];
}

for(i=0;i<n;i++)
{
if(x[i]<mix)//choosing the point with lowest x coordinate
{
mix=x[i];
miy=y[i];
}

if(x[i]==mix)
{
if(y[i]<miy)//choosing the point with lowest y coordinate
miy=y[i];
}

}
//calculating slopes
for(i=0;i<n;i++)
{


return 0;
}


