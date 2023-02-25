#include<stdio.h>
int main()
{
    int i,j,k=1,n,m,k1=0,a[50][50],i1,j1,j2;
    printf("enter n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        for(j=i;j<n;j++)
        {
            printf("  ");
        }
  for(j=0;j<=i;j++)
  {
      if(j==0 || j==i)
      {
        printf (" %d  ",a[i][j]=1);
      }
      else
        {
        j1=a[i-1][j-1];
        j2=a[i-1][j];
        a[i][j]=j1+j2;
         printf(" %d  ",a[i][j]);
        }
  }
        printf("\n");
}
}
