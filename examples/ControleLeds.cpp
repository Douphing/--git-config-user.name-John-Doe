// C++ code
// PROGRAMACAO CONTROLE LEDS

#include "PushButton.h"

#define pinBotao1 7
#define pinBotao2 6
#define pinBotao3 5

#define pinLedVm 10
#define pinLedAm  9
#define pinLedAz  8


byte contador = 0;



PushButton botao1(pinBotao1);
PushButton botao2(pinBotao2);
PushButton botao3(pinBotao3);

void setup()
{
  pinMode(pinLedVm, OUTPUT);
  pinMode(pinLedAm, OUTPUT);
  pinMode(pinLedAz, OUTPUT);
}


void loop()
{
  botao1.button_loop();
  botao2.button_loop();
  botao3.button_loop();
  
  if(botao1.pressed())
  {
    contador++;
  }
  
  
  if(botao2.pressed())
  {
    contador--;
  }
  
  
  if(botao3.pressed())
  {
    contador = 0;
  }
  
  
  if(contador >= 5)
  {
    digitalWrite(pinLedVm, HIGH);
  }
      else
      {
        digitalWrite(pinLedVm, LOW);
      }
  
  
    if(contador >= 10)
  {
    digitalWrite(pinLedAm, HIGH);
  } 
      else
      {
        digitalWrite(pinLedAm, LOW);
      }
  
  
    if(contador >= 15)
  {
    digitalWrite(pinLedAm, HIGH);
  } 
      else
      {
        digitalWrite(pinLedAm, LOW);
      }
  
}











