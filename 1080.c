#include<stdio.h>

 int main()
 {

 int n,arr[100];

 int i,j=0;

 for(i=0; i<100;i++)
    {

    scanf("%d", &arr[i]);
    }
    for(i=0;i<100; i++)
    {
        if(arr[i]>j)
        {
            j=arr[i];
            n=i+1;
        }

    }
  printf("%d\n", j);
   printf("%d\n", n);



  return 0;

}
