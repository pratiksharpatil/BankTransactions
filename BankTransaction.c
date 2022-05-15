/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
long amount=1000,deposit,withdraw;
int choice,pin,k;
char transaction = 'y';
void main ()
{
    //clrscr();
    while (pin != 1111)
    {
        printf("Enter your secrest pin number:");
        scanf("%d",&pin);
        if(pin != 1111)
        printf("Please enter valid password\n");
    }
    do
    {
        printf("***welcome to bank account***\n");
        printf("1 check balance\n");
        printf("2 withdraw cash\n");
        printf("3 deposit cash\n");
        printf("4 quit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n your balance is Rs: %lu",amount);
            break;
            case 2:
            printf("\n enter the amount to withdraw:");
            scanf("%lu",&withdraw);
            if(withdraw %100 != 0)
            {
                printf("\n please enter the amount in multiples of 100");
            }
            else if (withdraw > (amount-500))
            {
                printf("\n INSUFFICIENT BALANCE");
            }
            else
            {
                amount = amount-withdraw;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS %lu",amount);
            }
            break;
            case 3:
            printf("\n ENTER THE AMOUNT TO DEPOSIT");
            scanf("%lu",&deposit);
            amount = amount+deposit;
            printf("YOUR BALANCE IS %lu", amount);
            break;
            case 4:
            printf("\n THANK USING ATM");
            break;
            default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION? (y/n):\n");
        fflush(stdin);
        scanf("%c",&transaction);
        if(transaction =='n' || transaction =='s')
        k=1;
        
    }
    while (!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICES");
    getch();
}
    


