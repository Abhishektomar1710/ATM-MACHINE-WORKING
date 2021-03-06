#include<stdio.h>
#include<conio.h>
int main()
{
    int pin=1234, temp_pin,amt,balance=50000;
    int choice;
    printf("                *****WELCOOME TO THE BANK*****\n");
    printf("Enter your PIN\n");
    scanf("%d",&temp_pin);
    if(pin==temp_pin){
            c://for choice
        printf("\n\nPress 1 for BALANCE INQUIRY \nPress 2 for WITHDRAW OF CASH \nPress 3 for DEPOSITE \nPress 4 for PIN CHANGE \nPress 5 for EXIT \n");
        scanf("%d",&choice);

    switch(choice){

        case 1: x:
        printf("Your Balance is rupees--> %d\n",balance);

        goto c;


        case 2:{
        printf("Enter the Amount : ");
        scanf("%d",&amt);
        if(amt<=balance){
        balance-=amt;
        goto x;}
        else {
            printf("Insufficient balance\n");
             goto x;
        }


    }
        case 3:
        printf("Enter the amount for DEPOSITE\n");
        scanf("%d",&amt);
        balance+=amt;
        goto x;


        case 4: y:
        printf("Enter the OLD PIN");
        scanf("%d",&temp_pin);
        if(pin==temp_pin)
        {
            printf("Enter our NEW PIN");
            scanf("%d",&temp_pin);
            pin=temp_pin;
            printf("Your PIN has changed successfully \n ");
            goto c;
        }
        else
        {
            printf("PIN does not matched \nTRY AGAIN \n ");
            goto y;
        }


        case 5:
            exit(0);

        default:
        printf("Invalid option Entered\n Try Again\n");
        goto c;

        }//switch case

    }//if loop

        else{
            printf("INVALID PIN ENTERED \n");
            printf("RUN YOUR PROGRAMME AGAIN");
        }
return 0;

}
