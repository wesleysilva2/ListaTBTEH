#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  
float opera (float a, float b, int c){
       
  float z;
	   
   if(c==0){
	z=a+b;
   }
	else if(c==1){
	 z=b-a;
	}
		 
	 else if(c==2){
	  z=a*b;
	 }
		   
	  else if(c==3){
	   z=a/b;
	  }  

return (z);
      
  } 
  
int main(int argc, char *argv[]){
  
  
   float x,y,w;
    
	 int t;
	  
	  scanf("%d",t);
	   
	    printf("operando utilizado e %d",t);
   
          x=8.2,y=4.2;
  
            w=opera(x, y, t);
  
              printf ("opera: %f", w);
  
return 0;

}

		
	
	 
	 
	



	

    
    
	
	
	
