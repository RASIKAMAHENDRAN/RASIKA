


    

  

      
      
        
#include<stdio.h>
      {
      int l,u,i,,a,s=0;
       scanf("%d %d",&l,&u);
      
     for(i=l;i<=u;i++) 
        while(i>9)
      {
      a=i%10;
        s=s+(a*a*a);
  
        i=i/10;
        }
        if(s==i)
        {
      
      printf("\n");
        printf("%d" ,i);
        }
        }
        }
      
     
