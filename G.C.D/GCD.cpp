#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1,n2,GCD;
	GCD = 0;
	scanf("%d", &n1);
	scanf("%d", &n2);
	for (int i = 2;i < n1 || i < n2;i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			GCD = i;
		}

	}
	printf("GCD : %d", GCD);

	return 0;
}