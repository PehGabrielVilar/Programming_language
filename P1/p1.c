#include <stdio.h>

int sum(int n){
	if (n==0) return 0;
	else return(5*n - 2) + sum (n-1);

}
int main (void) {
	printf("%d\n", sum(0) );
	printf("%d\n", sum(1) );
	printf("%d\n", sum(2) );
	printf("%d\n", sum(3) );
	printf("%d\n", sum(4) );
	return 0;

}
