// WAP to check if the number is prime or not (Most Efficient Approach)

#include <stdio.h>
int isPrime(int n){
	if (n <= 1)
		return 0;
	if (n == 2 || n == 3)
		return 1;
	if (n % 2 == 0 || n % 3 == 0)
		return 0;
	for (int i = 5; i * i <= n; i += 6){
		if (n % i == 0 || n % (i+2) == 0)
			return 0;
		return 1;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	if (isPrime(n))
		printf("True");
	else
		printf("False");
	return 0;
}
