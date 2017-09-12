




#include <stdio.h>
int ischar(char ch);
int main(){
  char text[100], ch;
  int count;
  count = 0;
  while((text[count] = getchar()) != '\n')
            count++;
  text[count] = '\0';
  count = 0;
  while ((chk = text[count]) != '\0'){
      if (ischar(ch)){
           if((ch = text[++count]) && ischar(ch)){
               putchar(text[count -1]);
              putchar(text[count]);
              putchar('\n');
           }
      }
      else
           ++count;
  }
  return 0;
}
int ischar(char ch){
  if(ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u')
      return 1;
  return 0;
}
