#include<stdio.h>
#include<math.h>

typedef struct {
  float x, y;
} Punto;

typedef struct {
  Punto p1;
  Punto p2;
} Rettangolo;

typedef struct {
  Punto p;
  float raggio;
} Cerchio;

int main( void ){

  float b, h, area, duep;
  Rettangolo r;
  Cerchio c;
  
  printf( "RETTANGOLO:\n" );
  printf( "Inserisci le coordinate del punto in basso a sinistra\n" );
  scanf( "%f%f" , &r.p1.x, &r.p1.y );
  printf( "Inserisci le coordinate del punto in alto a destra\n" );
  scanf( "%f%f", &r.p2.x, &r.p2.y );
  b = r.p2.x - r.p1.x;
  h = r.p2.y - r.p1.y;
  area = b * h;
  duep = 2 * ( b + h );
  printf( "L'area del rettangolo vale %f, il perimetro vale %f\n", area, duep );

  printf( "CERCHIO:\n" );
  printf( "Inserisci le coordinate del centro\n" );
  scanf("%f%f", &c.p.x, &c.p.y);
  printf( "Inserisci la lunghezza del raggio\n" );
  scanf("%f", &c.raggio);
  printf( "L'area del cerchio vale %f, il perimetro vale %f\n", (M_PI*c.raggio*c.raggio), (2*M_PI*c.raggio) );
  
  return 0;
}
