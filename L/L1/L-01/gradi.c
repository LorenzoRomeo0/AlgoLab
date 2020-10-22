#include <stdio.h>

#define FATTORE_SCALA 5.0f/9
#define ZERO 32.0f

int main ( void ){
float fahr, cels;
printf ( " Inserisci la temperatura in gradi Fahrenheit : " );
scanf ( "%f" , &fahr );
//cels = ( fahr - ZERO ) * FATTORE_SCALA ;
printf ( " Gradi Celisus equivalenti : %.1f\n" , ( fahr - ZERO ) * FATTORE_SCALA  );
return 0;
}

/*
1) Stampa la stringa
2) Scrive sulla variabile fahr il contenuto del buffer della tastiera
3) Calcola il valore, no non è necessaria
4) Si possono togliere
5) No, però rimuovendo una f si può.

*/

