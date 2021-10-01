#include <stdio.h>
#include <math.h>
void main()
{
	int A, Save, otvet;
	printf("Enter A, then programm will raise it to the 15'th degree: ");
	scanf("%d", &A);
	A = A * A * A * A * A;
	Save = pow((int)A, (int)3);
	otvet = Save;
	printf("15th degree of A = ");
	printf("%d\n", otvet);
}