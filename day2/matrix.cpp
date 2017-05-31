#include<iostream>
using namespace std;
int main()
{
int r,c,i,j;
cout<<"Enter the number of rows and columns"<<endl;
cin>>r>>c;
cout<<"Enter the numbers of the matrix"<<endl; 
double a[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
if(j
}
}
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<a[i][j];
}
cout<<endl;
}


return 0;
}

