#include <stdio.h>

int main()
{
    int n,r;
    int count = 0;
    int temp=0, count2=1, ans=0;
    scanf("%d",&n);
    

    for(int i=0;i<n;i++)
    {
        scanf("%d",&r);
        count++;
        if(r<temp && count2 ==1)
        {
            ans = count;
            count2 = 0;
        }
        temp = r;
    }
    printf("%d\n",ans);
    return 0;
}