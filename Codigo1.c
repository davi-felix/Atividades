#include <stdio.h>

int a= 5;
int b= 2;
int c;

int main(void) {
  int a, b;
  int div = 0;
  do {
    system("clear");
    printf("Digite um número inteiro: ");
    scanf("%d", &b);
  } while (b <= 0);
  for (a = 1; a <= b; a++) {
    if (b % a == 0) { 
     div++;
    }
  }
  if (div == 2)
    printf("O número %d é primo!", b);
  else
    printf("O número %d não é primo!", b);
 
 
  return 0;
}
