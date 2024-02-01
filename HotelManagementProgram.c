/*write a program for the following output using switch case
MENU CARD
I.COFFEE
2. TEA
3.COLD COFFEE
4.MILK SHAKE
Your choice
Enter
.2
You have selected Tea
Enter the quantity
5
Total amount : 50*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int tot=0;
    int choice,cof,tea,cold,shake,yani,pa,veg,chicken,i;
    again:
    printf("\n%d",tot);
    printf("\n\n\t        MENU CARD");
    printf("\n\t1.COFFEE          Rs:10");
    printf("\n\t2.TEA             Rs:10");
    printf("\n\t3.COLD COFFEE     Rs:20");
    printf("\n\t4.MILK SHAKE      Rs:30");
    printf("\n\t5.BIRIYANI        Rs:70");
    printf("\n\t6.PAROTA 1        Rs:10");
    printf("\n\t7.VEGRICE         Rs:70");
    printf("\n\t8.CHICKEN RICE    Rs:70");
    printf("\n\n\tYour Choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
         printf("\n\tYou Choosed Coffee");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&cof);
         cof=cof*10;
         //tot=tot+cof*10;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;

    case 2:
         printf("\n\tYou Choosed Tea");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&tea);
         tea=tea*10;
        // tot=tot+tea*10;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;
     

     case 3:
         printf("\n\tYou Choosed Cold Coffee");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&cold);
         cold=cold*20;
        // tot=tot+cold*20;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;
    
    case 4:
         printf("\n\tYou Choosed Milk Shacke");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&shake);
         shake=shake*30;
        // tot=tot+shake*30;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;

    case 5:
         printf("\n\tYou Choosed Biriyani");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&yani);
         yani=yani*70;
        // tot=tot+shake*70;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;     
        
        
    case 6:
         printf("\n\tYou Choosed Parotta");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&pa);
         pa=pa*10;
        // tot=tot+pa*10;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;


    case 7:
         printf("\n\tYou Choosed Veg Rice");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&veg);
         veg=veg*70;
        // tot=tot+veg*70;
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;

    case 8:
         printf("\n\tYou Choosed Chicken Rice");
         printf("\n\tEnter the Quantity:");
         scanf("%d",&chicken);
         chicken=chicken*70;
         //tot=tot+(chicken*70);
         printf("\n\tYou Want Other Items,Press One:");
         scanf("%d",&i);
         break;
    
    default:
       printf("\n\tInvaild Option");
       printf("\n\tSelect Choosed Option");
       goto again;
      break;
    }
    if(i==1)
      goto again;

    else
    tot=cof+tea+cold+shake+yani+pa+veg+chicken;
    printf("\n\tYour Total Price:%d",tot);  
}