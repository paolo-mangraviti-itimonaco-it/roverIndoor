/*
  Progetto roverIndoor
  rover con movimento in abienti interni
  - rilevazione perimetri e planimetrie
  - spostamenti programmati
  - invio dati rilevati
*/

#include "roverIndoor-wan-config.h"
#include "roverIndoor-costanti.h"

void setup() {
    // Predisposizione PIN motori
    // Predisposizione PIN sensori per il rilevamento del perimetro
    // Predisposizione PIN sensori parametri fisici ambientali
    // Predisposizione collegamento a server
    
    // Lettura MODE
    pinMode(mode,INPUT);
    if (digitalRead(mode))
    {
      // Predisposizione TIMER
      eseguiRilievo();
    }
    else
    {
      // Predisposizione TIMER
      seguiPercorso();
    }
    
}

void eseguiRilievo()
{
  
}

void seguiPercorso()
{
  
}

void loop() {
    
}
