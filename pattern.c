#include<stdio.h>
#include<cs50.h>
int main(void){
int num,h;
num =get_int("Enter the pattern (1 or 2): ");
switch(num)
	  {
	      case 1:
	      h=get_int("Enter the no.of patterns: ");
          for(int row=1;row<=h;row++)
	       {
	        for(int col=h;col>=row;--col)
	        {
	         printf("#");
  	        }
             printf("\n");
           }
          break;
		   case 2:
		   h=get_int("Enter the no.of patterns: ");
		   for(int row=1;row<=h;row++)
	        {
             for(int col=h;col>=row;col--)
			 {
		      printf(" ");
			 }
	         for(int col=1;col<=row;col++)
	         {
              printf("#");
             }
             printf("\n");
            }
            break;
           default:printf("Invalid Option.");
           break;
       }
        return 0;
}
