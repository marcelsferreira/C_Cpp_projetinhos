#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int tam_senha = {0};
  char caracter = ' ';

  srand(time(NULL));
  
  printf("#### GERADOR DE SENHA ####\n");
  printf("Quantos caracteres deverá ter a senha? ");
  scanf("%d", &tam_senha);

  printf("Senha: ");

  for (int i = 0; i < tam_senha; i++) {
    caracter = 35 + rand() % 127;
    
    if (caracter == 35 || caracter == 64 ||
        (caracter > 47 && caracter < 58) ||
        (caracter > 64 && caracter < 91) ||
        (caracter > 97 && caracter < 123)) {
      
      printf("%c", caracter);
       
    } else {
      
      i--;
      
    }
  }

  printf("\n");

  return 0;
}
