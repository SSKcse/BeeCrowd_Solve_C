#include <stdio.h>

    int main()
    {
         int a, b, c, res;

         scanf("%d %d %d", &a, &b, &c);

         res = a;

         if(a < b || a < c)

             {

             if(b < c)

             {
             res = c;
             }

         else{
               res = b;
            }
        }
        printf("%d eh o maior\n", res);

        return 0;
    }


























/*

#include <stdio.h>
    int main()
    {

       int a,b,c;
       scanf("%d %d %d", &a,&b,&c);

     if(a<b && b>c)
     {
         printf("%d eh o maior\n",b);
     }

      else if (a>b && a>c)
     {
         printf("%d eh o maior\n",a);
     }

     else if (c>b && c>a)
     {
         printf("%d eh o maior\n",c);
     }
         return 0;
    }

*/
