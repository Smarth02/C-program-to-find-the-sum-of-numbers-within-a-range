#include <stdio.h>
int main()
{
	int x, y, z;
	int s=0;
	printf("Enter the range (start end) ");
	scanf("%d%d", &x, &y);
	if (x>y)
	{
	    z=x;
	    x=y;
	    y=z;
	}
	for(int i=x;i<=y;i++)
	{
		s+=i;
}
printf("The sum of numbers between %d and %d is %d", x, y, s);
return 0;
}
