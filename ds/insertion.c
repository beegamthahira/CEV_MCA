#include<stdio.h>
int main()
{
	int i,j,n,temp,arr[25];
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
         temp=arr[i];
         j=i-1;
         while((temp<arr[j]&&(j>=0)))
         {
         arr[j+1]=arr[j];
         j=j-1;
         }
         arr[j+1]=temp;
         }
         printf("Order of sorted elements:");
         for(i=0;i<n;i++)
         printf("%d\n",arr[i]);
         return 0;
         }
