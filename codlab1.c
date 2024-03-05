#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter size of rows:");
    scanf("%d",&n);
    printf("Enter size of columns:");
    scanf("%d",&m);
    int matrix[n][m];
    for(i=0;i<n;i++)
    {
        printf("Enter elements of row_%d:",i+1);
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the array is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}