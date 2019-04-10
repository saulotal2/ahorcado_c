#include <stdio.h>

void seisIntentos(int intentos, char palabra[], char prueba[], int errores, int encontradas){

  printf("Tienes %i intentos\n", intentos);
    for (int i = 0; i < strlen(palabra); i++) {
      printf("Escribe una palabra, cada letra fallida es un error\n");
      scanf("%s", prueba);

    for (int j = i; j < strlen(palabra); j++) {
      if(prueba[j]==palabra[j]){
        encontradas+=1;
        printf("Has encontrado %i letras\n", encontradas );
        if (encontradas==strlen(palabra)) {
          printf("Enhorabuena has ganado\n");
          return 0;
        }
    }else{
      errores+=1;
      if(errores==intentos){
        printf("Fin de la partida\n");
        return 0;
}
    }

}

}

}
