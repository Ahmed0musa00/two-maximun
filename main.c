#include <stdio.h>

int max_two(int [], int *);

int main(void)
{
   int arr[6];
   int max,max_2;
   int i;
   for(i=0;i<6;i++)
   {
       scanf("%d",&arr[i]);
   }
   max=max_two(arr, &max_2);
   printf("the larger no. is :%d\n",max);
   printf("the second larger no. is :%d",max_2);

    return 0;
}

int max_two(int a[], int *max_2)
{
  int max=a[0];
  *max_2=a[0];
  int i;
  for(i=0;i<6;i++)
  {
    if(a[i]>*max_2)
    {
        if(a[i]>max)
            max=a[i];
        else
            *max_2=a[i];
    }
  }
  return max;
}
