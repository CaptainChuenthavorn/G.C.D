#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*int n1,n2,GCD;
	GCD = 0;
	scanf("%d", &n1);
	scanf("%d", &n2);
	for (int i = 2;i < n1 || i < n2;i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			GCD = i;
		}
	}
	printf("GCD : %d", GCD);*/
	int input,GCD;
	GCD = 0;
	int* p;
	scanf("%d", &input);
	p = (int*)malloc(sizeof(int));
	for (int i = 0;i < input;i++) {
		scanf("%d", &p[i]);
	}
	for (int i = 2;i < *p[i]|| i <p[1] ;i++) {
		if ( % i == 0 && n2 % i == 0) {
			GCD = i;
	return 0;
}
/*
	int input;
	int* p;
	printf("How many numbers you want to compare ? : ");
	scanf("%d", &input);
	p = (int*)malloc(sizeof(int));
	printf("What are they ? : ");
	for (int i = 0;i < input;i++) {
		scanf("%d",  &p[i]);
	}
	printf("\nMAX number is : %d\nMIN number is : %d", max(p,input), min(p, input));
*/