#include<stdio.h>
int main()
{
    int i,n,k,temp=0,j;
    printf("Enter size of array:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number_%d : ", i+1);
        scanf("%d", &num[i]);
    }
    for(i=0;i<n;i++)
    {
        k+=num[i];
    }
        
     printf("\nThe sum of %d numbers is %d:\n",n,k);
     int middle = num[n/2];
   printf("middle element of array is :%d",middle);
     printf("For largest element:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(num[i]<num[i+1])
                {
                    temp=num[i];
                    num[i]=num[i+1];
                    num[i+1]=temp;
                }
            }
        }
    printf("Largest element of array is %d\n",num[0]);
        printf("For smallest element:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(num[i]>num[i+1])
                {
                    temp=num[i];
                    num[i]=num[i+1];
                    num[i+1]=temp;
                }
            }
        }
   printf("smallest element of array is %d\n",num[0]);
   printf("For middle element of array:\n");
   return 0;      
}