#include<iostream>
using namespace std;
int main()
{
int n,a[50],i,j,number;
cout<<"enter the size of an array"<<endl;
cin>>n;
cout<<"enter the elements of an array"<<endl;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(a[i]>a[j])
    {
      number=a[i];
      a[i]=a[j];
      a[j]=number;
    }
  }
}
cout<<"The sorted array elements are"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
return 0;
}
