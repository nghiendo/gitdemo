#include <stdio.h>

// sumN
int sumN(int n){
	if(n == 0) return 0;
	return n + sumN(n-1);
}

// demo git
//<<<<<<< HEAD
int sum(int a, int b){
	return a + b;
}

int tich(int a, int b){
	return a*b;
//>>>>>>> Khoa15
}

int main(){
	printf("Hello world!");
	return 0;
}
