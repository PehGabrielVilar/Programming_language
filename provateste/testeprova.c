#include <stdio.h>

int dv(n){
	int ac = 0;
	while(n>0){
		ac += n%10;
		n /= 10;
	}
	ac %= 10;
	return ac;
}

int main(void){
	int input;
	for(int i=1; i<=5; i++){
		printf("%do. numero ", i);
		scanf("%d", &input);
		if (input < 1000 || input > 9999999) printf("Numero Invalido\n");
		else printf("Conta: %07d-%d\n", input, dv(input));

		}
	return 0;
}
