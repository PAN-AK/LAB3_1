#include <stdio.h>
#include <locale.h>
#define D 2.54
#define E 2.32


int vichit(int a, int b)
{
	return a + b;
}

int slozh(int c, int d)
{
	return c - d;
}

int umnozh(int e, int f)
{
	return e * f;
}

int delen(int g, int h)
{
	return g / h;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	puts("������� �����:");
	scanf_s("%d", &num);
	printf("������� �����: %d\n", num);

	int numb;
	puts("������� �����:");
	scanf_s("%d", &numb);
	printf("������� �����: %d\n", numb);

	printf("%d - %d = %d", numb, num, vichit(numb, num));
	printf("%d + %d = %d", numb, num, slozh(numb, num));
	printf("%d * %d = %d", numb, num, umnozh(numb, num));
	printf("%d / %d = %d", numb, num, delen(numb, num));
	printf("������� �� ������� %d �� %d = %d", numb, num, numb % num);

	int dym;
	float result;
	puts("������� �����:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d ���������� ������ - ��� % .f ��", dym, result);

	int pul;
	float resultd;
	puts("������� �����:");
	scanf_s("%d", &pul);
	resultd = E * pul;
	printf("%d ���������� ������ - ��� % .f ��", pul, resultd);


	float n1, n2;
	printf("������� �����\n");
	scanf_s("%f", &n1);
	printf("������� �����\n");
	scanf_s("%f", &n2);
	printf(" _____________________________\n");
	printf("|n2*n1    |n2+n1    |n2-n1    |\n");
	printf("|_____________________________|\n");
	printf("|%5.f*%3.f|%5.f+%3.f|%5.f-%3.f|\n", n2, n1, n2, n1, n2, n1 );
	printf("|_____________________________|\n");
	printf("|%4.f     |%4.f     |%4.f     |\n");
	printf("|_____________________________|");

}