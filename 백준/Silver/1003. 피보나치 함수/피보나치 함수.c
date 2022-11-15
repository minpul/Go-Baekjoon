#include <stdio.h>
#define MAX 1000
int main()
{
   int T;
   int n;
   scanf("%d",&T);
   int arr[MAX][2]={{1,0},{0,1},};
   int printarr[MAX][2];
   for(int i=0;i<T;i++)
   {
       scanf("%d",&n);

       for(int j=2;j<=n;j++)
       {
           arr[j][0]=arr[j-1][0]+arr[j-2][0];
           arr[j][1]=arr[j-1][1]+arr[j-2][1];
       }

       printarr[i][0]=arr[n][0];
       printarr[i][1]=arr[n][1];
   }

   for(int i=0;i<T;i++)
   {
       printf("%d %d\n",printarr[i][0],printarr[i][1]);
   }

   return 0;
}
