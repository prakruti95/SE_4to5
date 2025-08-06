#include<conio.h>
#include<stdio.h>

void insertionsort_Asc(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
         int temp=a[i];
         int j=i-1;

         while(j>=0 && a[j]>temp)
         {
             a[j+1]=a[j];
             j=j-1;
         }
         a[j+1]=temp;

    }
}
void insertionsort_Desc(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
         int temp=a[i];
         int j=i-1;

         while(j>=0 && a[j]<temp)
         {
             a[j+1]=a[j];
             j=j-1;
         }
         a[j+1]=temp;

    }
}
void printarray(int a[],int n)
{
   for(int i=0;i<n;i++) {
    printf("%d",a[i]);

   }
   printf("\n");
}
int main()
{
    int arr[]={5,4,2,3,1};
    int n=5;
    insertionsort_Asc(arr,n);
    printarray(arr,n);
    insertionsort_Desc(arr,n);
    printarray(arr,n);
}
