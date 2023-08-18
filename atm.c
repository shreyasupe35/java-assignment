#include<stdio.h>

main()
{
    int newpin,pin=1234,amt=500;
    int w,c,n;//w for withdraw and c for credit
    char ch,op;
    printf("welcome to atm service");
    printf("\nenter the pin\n");
    scanf("%d",&newpin);
    
    if(newpin==pin)
    {
        do
        {
            printf("enter \nc for credit\nd for debit\nb for balance\nq for quit\n");
            scanf(" %c",&ch);
            switch(ch)
            { 
 
                    case'c':
                       printf("Enter credit amount\n");
                        scanf("%d",&c);
                        amt=amt+c;
                        printf("New amount is %d",amt);
                        break;
                    case'd':
                        printf("Enter debit amount\n");
                        scanf("%d",&w);
                        if(w%100!= 0)
                        {
                        printf("\n Please enter the amount in multiples of hundred");
                        }
                        else if (w>(amt-500))
                        {
                        printf("\nInsufficient balance");
                        }
                        else
                        {
                            amt=amt-w;
                            printf("\n\n Please collect cash");
                            printf("\n Your current balance is %d",amt);
                           
                        }
                            break;
 
                    case 'b':
                        printf("amount in your account =%d",amt);
                        break;
                    case 'q':
                        printf("Thankyou visit again");
                        break;
 
                    default:
                        printf("choose correct option for operation");
                        
            
                   
            }
            printf("\nDo you wish to have another transcation?\n");
            printf("enter 's' to continue\nenter 'e' to exit\n");
            scanf(" %c",&op);
            if(op=='s')
                n=1;

        }while(n==1);
    }
    else
    {
        if(pin!=newpin)
        {
        printf("please enter valid pin");
        }
    }
    printf("\n\nThankyou for using our ATM service");

}