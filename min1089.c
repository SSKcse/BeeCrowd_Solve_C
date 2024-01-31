#include<stdio.h>
int main()
{
    int x, i, res=0;
    while(1)
    {
        scanf("%d", &x);
        int ar[x];
        if(x==0) break;

        for(i=0; i<x; i++) scanf("%d", &ar[i]);
        for(i=1; i<x-1; i++){
            if(ar[i] > ar[i-1] && ar[i] > ar[i+1] || ar[i]< ar[i-1] && ar[i] < ar[i+1] ) res++;
           }
        if(ar[0] > ar[1] && ar[0] > ar[x-1] || ar[0] < ar[1] && ar[0] < ar[x-1]) res++;
        if(ar[x-1] > ar[0] && ar[x-1] > ar[x-2] || ar[x-1] < ar[0] && ar[x-1] < ar[x-2]) res++;
        printf("%d\n", res);
        int rem = res;
        res = 0;
    }
    return 0;
}
