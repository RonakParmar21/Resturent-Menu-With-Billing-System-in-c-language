//  Hotel Menu with bill system.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int bill = 0;

void Breakfast()
{
	int choice,price[14]={0,20,10,10,5,40,30,20,50,60,25,30,10,15};

	printf("\n************************************Breakfast***********************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1.  Aalu Paratha\t\t\t|\t\t\t$20");
	printf("\n2.  Dahi\t\t\t\t|\t\t\t$10");
	printf("\n3.  Bhakhari\t\t\t\t|\t\t\t$10");
	printf("\n4.  Athanu\t\t\t\t|\t\t\t$5");
	printf("\n5.  Panir Paratha\t\t\t|\t\t\t$40");
	printf("\n6.  Plain Paratha\t\t\t|\t\t\t$30");
	printf("\n7.  Sandwich\t\t\t\t|\t\t\t$20");
	printf("\n8.  Vanela Gathiya\t\t\t|\t\t\t$50");
	printf("\n9.  Khaman and Dhokala\t\t\t|\t\t\t$60");
	printf("\n10. Dal Pakavan\t\t\t\t|\t\t\t$25");
	printf("\n11. Bateka Paua\t\t\t\t|\t\t\t$30");
	printf("\n12. Tea\t\t\t\t\t|\t\t\t$10");
	printf("\n13. Coffee\t\t\t\t|\t\t\t$15");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}

void Fastfood()
{
	int choice,price[10]={0,25,30,20,15,35,35,20,30,50};

	printf("\n************************************Fast Food***********************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1. Bred Pakoda\t\t\t\t|\t\t\t$25");
	printf("\n2. Pani Puri\t\t\t\t|\t\t\t$30");
	printf("\n3. Samosa\t\t\t\t|\t\t\t$20");
	printf("\n4. Bhel\t\t\t\t\t|\t\t\t$15");
	printf("\n5. Vada Pau\t\t\t\t|\t\t\t$35");
	printf("\n6. Dabeli\t\t\t\t|\t\t\t$35");
	printf("\n7. Sev Puri\t\t\t\t|\t\t\t$20");
	printf("\n8. Masala Puri\t\t\t\t|\t\t\t$30");
	printf("\n9. Pav Bhaji\t\t\t\t|\t\t\t$50");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}

void Pizza()
{
	int choice,price[5]={0,150,170,200,220};

	printf("\n***********************************Pizza House**********************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1. Classic Veg. Pizza\t\t\t|\t\t\t$150");
	printf("\n2. Mexican Pizza\t\t\t|\t\t\t$170");
	printf("\n3. Margherita Pizza\t\t\t|\t\t\t$200");
	printf("\n4. Ultimate Pizza\t\t\t|\t\t\t$220");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}

void Colddrinks()
{
	int choice,price[12]={0,70,45,50,50,50,30,35,60,55,20,20};

	printf("\n***********************************Cold Drinks**********************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1.  Thums Up\t\t\t\t|\t\t\t$70");
	printf("\n2.  Sprite\t\t\t\t|\t\t\t$45");
	printf("\n3.  Coca Cola\t\t\t\t|\t\t\t$50");
	printf("\n4.  Limca\t\t\t\t|\t\t\t$50");
	printf("\n5.  Fanta\t\t\t\t|\t\t\t$50");
	printf("\n6.  7 Up\t\t\t\t|\t\t\t$30");
	printf("\n7.  Mirinda\t\t\t\t|\t\t\t$35");
	printf("\n8.  Mountain Dew\t\t\t|\t\t\t$60");
	printf("\n9.  Maaza\t\t\t\t|\t\t\t$55");
	printf("\n10. Frooti\t\t\t\t|\t\t\t$20");
	printf("\n11. Slice\t\t\t\t|\t\t\t$20");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}

void SouthIndian()
{
	int choice,price[12]={0,80,40,45,50,60,70,100,90,40,150,110};

	printf("\n**********************************South Indian*********************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1.  Dosa\t\t\t\t|\t\t\t$80");
	printf("\n2.  Idli\t\t\t\t|\t\t\t$40");
	printf("\n3.  Mendu Wada\t\t\t\t|\t\t\t$45");
	printf("\n4.  Upama\t\t\t\t|\t\t\t$50");
	printf("\n5.  Masala Dosa\t\t\t\t|\t\t\t$60");
	printf("\n6.  Roll Dosa\t\t\t\t|\t\t\t$70");
	printf("\n7.  Cheese Masala Dosa\t\t\t|\t\t\t$100");
	printf("\n8.  Mysore Dosa\t\t\t\t|\t\t\t$90");
	printf("\n9.  Paper Dosa\t\t\t\t|\t\t\t$40");
	printf("\n10. Spring Dosa\t\t\t\t|\t\t\t$150");
	printf("\n11. Mysore Masala Dosa\t\t\t|\t\t\t$110");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}

void Gujarati()
{	int choice,price[17]={0,200,100,5,200,95,70,30,80,30,50,30,65,50,15,30,20};

	printf("\n************************************Gujarati***********************************");
	//printf("\nGujarati Dishes Name is.....");
	//printf("\n\n");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1.  Puran Puri (Our Special item)\t\t|\t\t\t$200");
	printf("\n2.  Oro and Rotala\t\t\t|\t\t\t$100");
	printf("\n3.  Chhash\t\t\t\t|\t\t\t$5");
	printf("\n4.  Undhiyu\t\t\t\t|\t\t\t$200");
	printf("\n5.  Khaman and Dhokla\t\t\t|\t\t\t$95");
	printf("\n6.  Rajwadi Dhokli\t\t\t|\t\t\t$70");
	printf("\n7.  Lasuniya Bateka\t\t\t|\t\t\t$30");
	printf("\n8.  Bharela Ringana\t\t\t|\t\t\t$80");
	printf("\n9.  Sev Tomato\t\t\t\t|\t\t\t$30");
	printf("\n10.  Suki Bhaji\t\t\t\t|\t\t\t$50");
	printf("\n11. Dahi Thikhari\t\t\t|\t\t\t$30");
	printf("\n12. Kadhi and Khichadi\t\t\t|\t\t\t$65");
	printf("\n13. Ghee Paratha\t\t\t|\t\t\t$50");
	printf("\n14. Thepla\t\t\t\t|\t\t\t$15");
	printf("\n15. Methi Lasan Rotlo\t\t\t|\t\t\t$30");
	printf("\n16. Bajra Rotlo\t\t\t\t|\t\t\t$20");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];

}


void Chinees()
{
	int choice,price[5]={0,100,90,150,120};

	printf("\n*************************************Chinees************************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");

	printf("\n1. Manchurian(Dry/Gravy)\t\t|\t\t\t$100");
	printf("\n2. Veg. Chowmein\t\t\t|\t\t\t$90");
	printf("\n3. Manchurian Noodles\t\t\t|\t\t\t$150");
	printf("\n4. Hakka Noodles\t\t\t|\t\t\t$120");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}


void Punjabi()
{
	int choice,price[6]={0,70,80,100,120,20};

	printf("\n*************************************Punjabi************************************");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\nItem Name\t\t\t\t|\t\t\tItem Price");
	printf("\n|------------------------------------------------------------------------------|");
	printf("\n1.  Panir tikka\t\t\t\t|\t\t\t$70");
	printf("\n2.  Kaju Kari\t\t\t\t|\t\t\t$80");
	printf("\n3.  Mix Sabji\t\t\t\t|\t\t\t$100");
	printf("\n4.  Lacchi\t\t\t\t|\t\t\t$120");
	printf("\n5.  Nan\t\t\t\t\t|\t\t\t$20");
	printf("\n|------------------------------------------------------------------------------|");

	printf ("\nEnter your choice: ");
	scanf ("%d",&choice);
	printf ("\nYou have Ordered item no %d...",choice);
	bill=bill+price[choice];
}

//void Punjabi()
void main()
{
	int choise, choise1, choise2, choise3, n, m;

	//clrscr();
	printf("**************************Welcome to Ronak's Restaurant*************************");
	do
	{
		printf("\n\n1. Breakfast\t2. Lunch\t3. Dinner\t4. Fast Food\n5. Pizza\t6. Cold Drinks\t 0. Exit");
		printf("\nEnter the type of dish of your choise: ");
		scanf("%d",&choise);

		switch(choise)
		{
			case 1:
				Breakfast();
				break;

			case 2:
				printf("\nFor Lunch");
				printf("\n1. Gujarati\n2. Punjabi");
				printf("\nEnter any Number either 1 or 2: ");
				scanf("%d",&n);
				if(n ==1)
				{
					Gujarati();
				}
				if(n == 2)
				{
					Punjabi();
				}
				break;

			case 3:
				printf("\n\nFor Dinner");
				printf("\n1. Gujarati\n2. Punjabi\n3. SouthIndian\n4. Chinees");
				printf("\nEnter any Number Between 1 to 4: ");
				scanf("%d",&m);

				if(m == 1)
				{
					Gujarati();
				}
				if(m == 2)
				{
					Punjabi();
				}

				if(m == 3)
				{
					SouthIndian();
				}
				if(m == 4)
				{
					Chinees();
				}
				break;

			case 4:
				Fastfood();
				break;

			case 5:
				Pizza();
				break;

			case 6:
				Colddrinks();
				break;

			case 0:
				printf ("\n\tTotal Bill amount = %d",bill);
				getch();
				exit(0);


			default:
				printf("\nInvalid Dish Type.. ");
				printf("\nThis type of Dish is Not Available");
				break;
		}
	 }
	 while(choise != 0);
		getch();
}