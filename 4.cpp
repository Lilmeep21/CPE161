#include <stdio.h>
#include <conio.h>
main()
{
	float x, y, area;
	printf("how long is long?");
	scanf("%f", &x);
	printf("how long is side?");
	scanf("%f", &y);
	area=x*y;
	printf("area is %f", area);
	getch();
	return 0;	
}
