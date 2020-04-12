#include<stdio.h>
int main()
{
int n,a[50],i,j,number;
printf("enter the size of an array\n");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
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
printf("The sorted array elements are\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
