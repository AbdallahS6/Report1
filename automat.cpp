#include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>
    #include <time.h>
    void czekaj(int sek);
    void witam();
    void rachunek(float monety);
    double cena();
    int menu();
    int differentcoins();
    void produkttotal(int wybor,int amount);
    void  produkt(int wybor);
    float cost(int wybor);
	   
	   
	   
	   
	   
	   // Hello Word!
	   
	   
	   
	   
    int menu()
    {
  int wybor;
 
 
    printf("---------------------- \n");
 
 
    printf("MENU: ");
    printf("\n\n");
    printf("1. Coca-Cola");            printf("\t\t\t1.00zl\n");
    printf("2. Snickers");               printf("\t\t\t1.30zl\n");
    printf("3. Lody Oreo");            printf("\t\t\t1.20zl\n");
    printf("4. cos nowego");           printf("\t\t\t1.50zl\n");
    printf("5. Anuluj");
    printf("\n\n");
 
 
    printf("Wprowadz swoj wybor: ");
    scanf("%d",&wybor);
 
 
    return wybor;
}
 

    
        void produkt(int wybor)
{
switch(wybor)
{
    case 1:
printf("Wybrales Coca-Cola.");                     printf("\t\t\t1.00zl\n");
      break;
   case 2:
printf("Wybrales  Snickers.");                     printf("\t\t\t1.30zl\n");
      break;
   case 3:
printf("Wybrales Lody Oreo.");                     printf("\t\t\t1.20zl\n");
      break;
   case 4:
printf("Wybrales Lays Chips.");                    printf("\t\t\t1.50zl\n");
      break;
   case 5:
      break;
   default:
      printf("Nieprawid�owe dane wejsciowe!\n");
      break;
}
return;
}




double cena()
   {
        double zloty;
        printf("Wpisz swoje pieniadze: \n");
        printf("(0.1zl 0.20zl 0.50zl 1zl 2zl 5zl 10zl 20zl 50zl 100zl)\n");
        scanf("%lf",&zloty);
 
 
       return zloty;
   }

float cost(int wybor)
 {
  float price = 0;
 
 
  switch(wybor)
  {
     case 1:
       price = 1.00;
       break;
     case 2:
       price = 1.37;
       break;
     case 3:
       price = 1.20;
       break;
    case 4:
       price = 1.50;
       break;
   }
   return price;
 }
 







void czekaj(int sek)
{
    clock_t end_czekaj=(clock() + (sek * CLOCKS_PER_SEC));
    while(clock()<end_czekaj)
    {}
}
 
 
 
 
  void rachunek(float monety)
   {
       printf("Calkowita kwota do zaplaty wynosi: %.2f\n\n\n",monety);
       return;
   }
 
 
 
 
 void produkttotal(int wybor,int amount)
    {
      switch(wybor)
      {
      case 1:
         printf("\n\n\t\t\tWybrales %d Coca-Cola\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 2:
         printf("\n\n\t\t\tWybrales  %d  Snickers\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 3:
         printf("\n\n\t\t\tWybrales %d Lody Oreo\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 4:
         printf("\n\n\t\t\tWybrales %d Lays Chips\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      default:
         printf("Nieprawidlowe dane wejsciowe!\n");
         break;
      }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  void witam()
   {
        printf("\t\t\tWitamy w naszym automacie!\n\n");
        printf("\t\t\twykonane przez: Abdullah Said\n\n");
        printf("\t\t\tFor the dear Doctor :Pan Bartlomiej Borowksi\n\n");
        printf("\t\t\tNacisnij dowolny klawisz, aby kontynuowac.\n\n\n\n");
       return;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    int main()
{
     witam();
     getch();
    int q;
    int entered;
    int amount;
    int cancel;
    int select;
    int wybor;
    float billreq;
    float change;
    float produktmax;
    float monety;
    float itemprice;
    float coinselected;
    float total;
    double zloty;
 
    wybor = menu();
    produkt(wybor);
 
 
 
 
    if(wybor >0 && wybor <5)
     {
         printf("\n\nNacisnij 1, aby kontynuowac, lub 2, aby anulowac zamowienie\n");
         scanf("%d",&cancel);
 
 
 
 
         if(cancel==1)
 
 
        {
          printf("Ile ?(Max 5)\n");
          scanf("%d",&amount);
          if(amount<=5)
          {  itemprice = cost(wybor);
             produktmax=amount*itemprice;
             monety=produktmax;
             rachunek(monety);
             x:zloty=cena();
             printf("",zloty);
 			
 
                      if(zloty==0.1 || zloty==0.2 || zloty==0.5 || zloty==1 || zloty==2 || zloty==5 || zloty==10 || zloty==20 || zloty==50 || zloty==100)
                        {
                            while(total<=produktmax)
                           {
                            total=total+zloty;
                            billreq = produktmax-total;
 
                            if(total<produktmax )
                            {
                             printf("\n\nTwoje zalegle pieniadze sa %f zl", billreq);
                             printf("\n\n");
                             goto x;
                            }
 
 
                             else if(total>produktmax)
                            {
                             change=total-produktmax;
                             produkttotal(wybor,amount);
 
 
                                for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tProdukt #%d jest wydawany\n",q);
                                 czekaj(5);
                                }
                             printf("\n\t\t\tReszta jest %f zl\n\n",change);
                             printf("\n\t\t    *Zabierz swpj produkt. i milego dnia!!*");
                             break;
                            }
                            else
                            {
                            produkttotal(wybor,amount);
                             for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tProdukt #%d jest wydawany\n",q);
                                 czekaj(5);
                                }
                            printf("\n\t\t    *Zabierz sw�j produkt. i milego dnia!!*");
                             break;
                            }
                           }
                        }
                        else
                        {
                            printf("\nPieniadze nie sa akceptowane. Sprobuj ponownie!\n\n");
                            goto x;
                        }
                        getch();
 
 
 
 
 
 
          }
 
 
        else{
                printf("Maksymalna liczba to 5. Sprobuj ponownie\n");
                main();
            }
      }
      else
 
 
        {
            printf("Twoje zamowienie zostalo anulowane\n\n");
            main();
        }
     }
   else
   {
       printf("Twoje zamowienie zostalo anulowane\n\n");
       main();
   }
 
 
}
