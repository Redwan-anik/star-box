#include<stdio.h>
int main()
{   int i,n,j,k,z;
   printf("enter size:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
       scanf("%d",&j);
       for(k=1;k<=j;k++)
       {
           for(z=1;z<=j;z++)
           {
               printf("*",j);
           }
            printf("\n");

       }
       printf("\n");
   }






}
