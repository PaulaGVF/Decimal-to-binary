#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char** argv) {
	int a;
	char b [10];
	printf("Digite um numero decimal:\n");
	scanf("%d",&a);
	itoa(a,b,2);
	printf("\nO numero %d em binario e :\n %s",a,b);
	getch();
	
	return 0;
}
