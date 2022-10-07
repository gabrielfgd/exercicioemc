//15
#include <stdio.h>

int main()
{
   int par;
   
   for(par=1; par<51; par++){
       if(par%2 == 0){
           printf("%d - ", par);
       }
   }
}