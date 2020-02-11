#include <stdio.h>
#include <math.h>

int main (void){

	int selector;
	int number;

	printf("Area Calculation\n(1) Square\n(2) Cube\n(3) Circle\nPlease make a selection: ");
	scanf("%d", &selector);
	
	while (selector > 3 || selector < 1){//error check selector
		printf("Incorrect Choice\n\nArea Calculation\n(1) Square\n(2) Cube\n(3) Circle\nPlease make a selection: ");
		scanf("%d", &selector);
	}//End of error check

	switch (selector){//switch selector statement
	
		case 1:
			printf("\nEnter a positive number: ");
			scanf("%d", &number);
			while (number <=0){//error check for number
				printf("Number can't be negative or zero\nEnter a positive number: ");
				scanf("%d", &number);
			}//end of error check
			printf("\n\nLength of the side of a square is %d\n", number);
			int square;
			square = number * number;
			printf("Area  of a square is %d\n\n", square);
		break;

		case 2:
			printf("\nEnter a positive number: ");
			scanf("%d", &number);
			while (number <=0){//error check for number
				printf("Number can't be negative or zero\nEnter a positive number: ");
				scanf("%d", &number);
			}//end of error check
			printf("\n\nLength of the side of a cube is %d\n", number);
			int cube;
			cube = 6 * number * number;
			printf("Area of a cube is %d\n\n", cube);
		break;

		case 3:
			printf("\nEnter a positive number: ");
			scanf("%d", &number);
			while (number <=0){//error check for number
				printf("Number can't be negative or zero\n Enter a positive number:");
				scanf("%d", &number);
			}//end of error check
			printf("Radius of a circle is %d\n", number);
			float circle;
			circle = (float) number * number * 3.14159;
			printf("Area of a circle is %.2f\n\n", circle);
		break;
	}//end of switch 



return 0;
}
