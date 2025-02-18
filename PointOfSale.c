#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int code, qty;
	float price, amt, totalAmount, cash, change;
	char addAnother, conti; 
	
	do {
	
		do {
			system("cls");
			printf("===========================\n");
			printf("======KHAUZEN KOTAS========\n");
			printf("===========================\n\n");
			printf("[1] Palony and Chips\t\t\t\t\tR 15.00\n");
			printf("[2] Palony Vienna and Chips\t\t\t\tR 20.00\n");
			printf("[3] Palony Vienna Egg and Chips\t\t\tR 25.00\n");
			printf("[4] Palony Vienna Egg Russian and Chips\t\tR 30.00\n");
			printf("[5] Palony Vienna Egg Russian lettice and Chips\t\tR 35.00\n");
			printf("\nEnter the code :\t");
			scanf("%d", &code);
			printf("\nEnter quantity :\t");
			scanf("%d", &qty);
			
			switch(code) {
				case 1: price = 15;
					break;
				case 2: price = 20;
					break;
				case 3: price = 25;
					break;
				case 4: price = 30;
					break;
				case 5: price = 35;
					break;
				default: 
					printf("Invalid: Please enter options from 1 to 5.");
					break;			
			}
			system("cls");
			amt = price * qty;
			printf("Amount :\t R%.2f", amt);
			totalAmount = totalAmount + amt;
			printf("\nTotal amount :\t R%.2f", totalAmount);
			printf("\nAdd another order?(y/n)");
			addAnother = getche();
		}while(addAnother == 'y' || addAnother == 'Y');
		do {
		
			printf("\nCash tendered :\t");
			scanf("%f", &cash);
		}while(cash < totalAmount);
	
		change = cash - totalAmount;
		printf("\nChange :\t R%.2f", change);
		
		printf("\nAnother sale? (y/n)");
		scanf("%s", &conti);
	}while(conti == 'y' || conti == 'Y');
	
	printf("Thank you for visiting Khauzen Kotas...Till next time!!!");
	getch();
	return;
}
