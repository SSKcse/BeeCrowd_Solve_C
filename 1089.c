#include <stdio.h>

int main(){

    int n,v1,v2,v3,res=0;
    int i;


    while(1){
             scanf("%d", &n);
             if(n == 0)

             break;

             scanf("%d", &v1);
             scanf("%d", &v2);

             if(n == 2){
                  if(v1 != v2) res = 2;
             }
             else{
                 int p1=v1;
                 int p2=v2;

                  for(i = 2; i < n; i++){
                        scanf("%d", &v3);
                        if(((v2>v1) && (v2>v3)) || ((v2<v1) && (v2<v3)))

                        ++res;

                        v1=v2;
                        v2=v3;
                  }

                    if ((p1>p2 && p1>v3) || (p1<p2 && p1<v3))

                        ++res;

                    if ((v3>v1 && v3>p1) || (v3<v1 && v3<p1))

                        ++res;
             }
             printf("%d\n", res);
             int rem = res;
             res = 0;
    }
    return 0;
}




