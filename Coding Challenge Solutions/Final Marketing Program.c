    #include <stdio.h>
    #include<conio.h>
    #include<stdlib.h>

    int main()
    {
    int a=150,b=75,c=480,d=675,e=60,x,subtotal1=0,subtotal2=0,subtotal3=0,subtotal4=0,subtotal5=0,shopping=1,cash,remaining;
    int total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
    char choice,code,choice2;
    printf("                                           WELCOME TO Vegeta's Fajita!           \n\n");
    printf("Here are our sample list of products you might be interested in.\n\n");
    while(shopping)
    {
        printf("\nChoose your product   Enter product code i.e:A,C etc\n\n");
        printf("[A] Quesadrilla.          Price   150tk\n");
        printf("[B] Taco.                 Price   75tk\n");
        printf("[C] Burrito.              Price   480tk\n");
        printf("[D] Fajita.               Price   675tk\n");
        printf("[E] coca-cola.            Price   60tk\n");
        printf("[Q] Quit\n\n");




        code=getch();

        if(code=='q' || code=='Q')exit(0);

        if(code=='a' || code=='A')
        {
            printf("You have chosen 'A' and price is 150 tk\n\n");
            printf("Enter Quantity:\n\n");
            scanf("%d",&x);
            subtotal1=a*x;
            printf("Subtotal price is %d tk\n\n",subtotal1);
            total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
             printf("Total cost is:%d tk\n",total);
        }
        if(code=='b' || code=='B')
        {
            printf("You have chosen 'B' and price is 75 tk\n");
            printf("Enter Quantity:\n");
            scanf("%d",&x);
            subtotal2=b*x;
            printf("Subtotal price is %d tk\n",subtotal2);
            total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
             printf("Total cost is:%d tk\n",total);
        }
        if(code=='c' || code=='C')
        {
            printf("You have chosen 'C' and price is 480 tk\n");
            printf("Enter Quantity:\n");
            scanf("%d",&x);
            subtotal3=c*x;
            printf("Subtotal price is %d tk\n",subtotal3);
            total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
             printf("Total cost is:%d tk\n",total);
        }
        if(code=='d' || code=='D')
        {
            printf("You have chosen 'D' and price is 675 tk \n");
            printf("Enter Quantity:\n");
            scanf("%d",&x);
            subtotal4=d*x;
            printf("Subtotal price is %d tk\n",subtotal4);
            total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
             printf("Total cost is:%d tk\n",total);
        }
        if(code=='E' || code=='e')
        {
            printf("You have chosen 'E' and price is 60 tk\n");
            printf("Enter Quantity:\n");
            scanf("%d",&x);
            subtotal5=e*x;
            printf("Subtotal price is %d tk\n",subtotal5);
            total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
             printf("Total cost is:%d tk\n",total);
        }

         printf("Do you want to shop more? Y/N\n");
         choice=getch();

         if(choice=='y' || choice=='Y')shopping=1;
         else if(choice=='n' || choice=='N')
         {
             total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
             printf("Do you want to add them to takeout? Y/N\n\n");
             choice2=getch();
             if(choice2=='y' || choice2=='Y')
             {

                 printf("Enter cash:\n");
                 scanf("%d",&cash);
                 total=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
                 if(total < cash )
                 {
                  printf("You have given %d\n\n",cash);

                  printf("Total cost is:%d\n\n",total);

                  printf("Your change is %d\n\n",cash-total);

                  printf("Thank you for shopping with us.Do come again!");
                 }

                else if(total==cash) printf("Amount paid.Thank you for shopping with us.Have a nice day!\n\n");
                else

                {   while(remaining!=(total-cash))
                     {
                         printf("Insufficient amount given.Add just %d.Not more.Not less.\n\n",total-cash);
                         scanf("%d",&remaining);
                         if(remaining!=(total-cash))
                         {
                             printf("Pay %d",(total-cash)-remaining);
                         }

                     }

                      printf("Amount paid.Thank you for shopping with us.Have a nice day!\n\n");

                }


                 shopping=0;
             }
             else shopping=1;
         }

    }

    }

