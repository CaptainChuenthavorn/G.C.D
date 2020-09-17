#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int gcd(int* , int* );
int lcm(int , int , int );
int main() {
	int n1, n2,GCD,LCM;
	printf("Enter 2 number : ");
	scanf("%d %d", &n1,&n2);
	GCD = gcd(&n1, &n2);
	LCM = lcm(GCD, n1, n2);
	printf("GCD : %d\n", GCD);
	printf("LCM : %d", LCM);
	return 0;
}
int gcd(int* n1, int* n2) {
	int GCD;
	GCD = 0;
	for (int i = 2;i < *n1 || i < *n2;i++) {
		if (*n1 % i == 0 && *n2 % i == 0) {
			GCD = i;
		}
	}
	return GCD;
}
int lcm(int GCD,int n1,int n2)
{
	int LCM;
		LCM = (n1 * n2) / GCD;
		return LCM;
}


/*int gcd(int, int);
int main()
{
	int n1,n2,GCD;
	GCD = 0;
	scanf("%d", &n1);
	scanf("%d", &n2);
	GCD = gcd(n1, n2);
	printf("GCD : %d", GCD);
	return 0;
}*/
/*int computeGCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return computeGCD(b, a % b);
}*/