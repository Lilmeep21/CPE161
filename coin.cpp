#include <stdio.h>
#include <conio.h>
main()
{
	int x;
	int y=10,z=5;
	int ten,five,coin;
	printf("how much your money?");
	scanf("%d", &x);
	ten=x/y;
	five=(x%y)/z;
	coin=x%z;
	printf("Tottally coin %d\n", ten);
	printf("have ten bath %d coins.\n", ten);
	printf("have five bath %d coins.\n", five);
	printf("have one bath %d coins.\n", coin);
	getch();
	return 0;	
}
