#include<stdio.h>
int main()
{
  int arr[10],x,temp;
  printf("\n Enter the number of elements of array ");
  scanf("%d",&x);
  for(int i =0;i<x;i++)
  {
    scanf("%d",&arr[i]);
 }
  for(int i=0;i<x-1;i++)  /////Sorting of array
  {
    for(int j=0;j<x-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }

    }
   }
  int k=0;
  for(int i=0;i<x-1;i++)
  {
    if(arr[i]!=arr[i+1])
    {
      arr[k]=arr[i];
      k++;
    }
  }
  arr[k]=arr[x-1];

  printf("\n Array is ");
  for(int i=0;i<=k;i++)
  printf("%d ",arr[i]);

}
