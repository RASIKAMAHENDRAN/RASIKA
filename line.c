#include <stdio.h>

int main(){

   char ch;
    int linecount;
   int u;
   linecount=0;
 


   while((ch=getc(stdin))!=EOF){


      
       if (ch=='\n') {++linecount;}

     }
   if(charcount>0){
     
      ++linecount;
   }

   printf( "%d\n",linecount );

   return 0;

}
