#include <stdio.h>
int main(){
    int x,n,count=0,out=0;
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
            scanf("%d", &n);
           if(n>=10 && n<=20){
                count++;
           }
           else{
            out++;
           }
    }
    printf("%d in\n%d out\n", count,out);
    //for(int i=1; i)









return 0;
}
