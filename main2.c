#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void carre(int);
int main() {
  carre(5);
	return 0;
}




void carre(int){
	int A,resulta;
	printf("ecrire une numbre : ");
	scanf("%d",&A);
	 resulta = A*A;
	 printf("la carre de %d est : %d",A,resulta);
	return;
}
