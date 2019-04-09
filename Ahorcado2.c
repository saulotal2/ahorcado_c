#include <stdio.h>
#include "IntentosAhorcado.c"
#include <string.h>
#include "4Intentos.c"
#include "5Intentos.c"
#include "6Intentos.c"
#include "7Intentos.c"

void main() {
char palabra[11];
char prueba[11];
int intentos;
int encontradas=0;
int errores=0;

printf("Introduce una palabra: ");
scanf("%s", palabra);

printf("\nObten el numero de intentos\n");
intentos=aleatorio(7);

while (intentos<=3){
intentos=aleatorio(7);

}

if (intentos==4) {
  cuatroIntentos(intentos, palabra, prueba, errores, encontradas);
}

if (intentos==5) {
  cincoIntentos(intentos, palabra, prueba, errores, encontradas);
}

if (intentos==6) {
  seisIntentos(intentos, palabra, prueba, errores, encontradas);
}

if (intentos==7) {
  sieteIntentos(intentos, palabra, prueba, errores, encontradas);
}

}
