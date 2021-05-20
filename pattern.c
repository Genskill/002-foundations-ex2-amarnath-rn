#include<stdio.h>
#include<cs50.c>
int main(void){
int num,h;
num =get_int("Enter type of pattern (1 or 2) ");
switch(num)
	  {
	      case 1:
	      h=get_int("Number of rows ");
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
		   h=get_int("Number of rows ");
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


