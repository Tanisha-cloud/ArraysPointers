#include<stdio.h>
#define rows 3
#define cols 3

int main()
{
    int arr[3][3];
    int sum=0;

    printf("\nENTER THE 3x3 ARRAY: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d ",*(arr + i) + j);
        }
        printf("\n");
    }

    printf("\nTHE 3x3 ARRAY ENTERED IS: ");
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("\nTO FIND THE SUM OF DIAGONAL ELEMENTS: ");
     for (int i=0;i<rows;i++)
      {
        for (int j=0;j<cols;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
      }

      printf("\nTHE SUM IS : %d",sum);

    return 0;
}
