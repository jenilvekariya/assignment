#include <stdio.h>

int main()
{
   
    int number,b,c,addition,subtraction,multiplication,division;;
    
    
    do
       {
        printf("\n\n\t\t CALCULATOR");
        printf("\n\n\t\t *MENU*");
        printf("\n\n 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.EXIT");
           
       
        printf("\n\nENTER NUMBER : ");
        scanf("%d",&number);
        
        switch(number)
        {
            case 1:
                printf("\nENTER VALUE : ");
                scanf("%d",&b);
                
                printf("\nENTER VALUE : ");
                scanf("%d",&c);
                
                addition=b+c;
                printf("\nADDITION : %d",addition);
                break;
                
            case 2:
                printf("\nENTER VALUE : ");
                scanf("%d",&b);
                
                printf("\nENTER VALUE : ");
                scanf("%d",&c);
                
                subtraction=b-c;
                printf("\nSUBTRACTION : %d",subtraction);
                break;
            case 3:
                
                printf("\nENTER VALUE : ");
                scanf("%d",&b);
                
                printf("\nENTER VALUE : ");
                scanf("%d",&c);
                
                multiplication=b*c;
                printf("\nMULTIPLICATION : %d",multiplication);
                break;
            case 4:
                
                printf("\nENTER VALUE : ");
                scanf("%d",&b);
                
                printf("\nENTER VALUE : ");
                scanf("%d",&c);
                
                division=b/c;
                printf("\nDIVISION : %d",division);
                break;
                
            case 5:
                printf("\n \n\t THANK YOU");
                break;
                
        }
    }
    while(number<5);
}
