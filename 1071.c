#include<stdio.h>

int main(){
    int x,y,rem;
    int sum = 0;

    scanf("%d %d",&x,&y);
    if(y>x){
     rem = y;
    y = x;
    x = y;
    }
    y = y+1;
    //x = x-1;


    for(int i=y ;i<x; i++){
       if(i%2!=0){
        sum +=i;

    }
    }
     printf("%d\n",sum);


    return 0;
}
