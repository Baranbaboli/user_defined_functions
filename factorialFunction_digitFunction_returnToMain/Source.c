#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long int factor(int); //prototype
int digit(int);//prototype2
int main() {
	int number, digitresult;
	long int result;
	printf("Enter an integer:");
	scanf("%d", &number);

	result = factor(number); //function call
	printf("\nFactorial of %d is %ld\n", number, result);

	digitresult = digit(result); //function call2
	printf("Digits of %ld is %d\n", result, digitresult);
	system("pause");
	return 0;
}//main

long int factor(int n) {
	int f = 1;
	while (n > 0) {
		f = f * n;
		n--;
	}//while
	return f;
}//factor

int digit(long int r) {
	int count = 1;
	while (r != 0) {
		r = r / 10;
		count++;
	}//while
	return count;
}//digit

