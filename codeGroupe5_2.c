
#include <16F84A.H>

int Compteur = 0;

void main(void){

   #byte TRISB = 0;
   #byte PORTB = 0;

   for (Compteur = 0; Compteur <=255;Compteur++;){

       #byte PORTB = Compteur;
       delay_ms(500);
       
   }
}