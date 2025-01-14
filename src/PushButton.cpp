//BIBLIOTECA POO

#include "PushButton.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"



PushButton::PushButton(byte pinBotao, int tempoDebounce = 200)
{
  pinMode(pinBotao, INPUT_PULLUP);
  pino = pinBotao;
  tempo = tempoDebounce;
}

void PushButton::button_loop()
{
  bool estadoBotao = digitalRead(pino);
  apertado = false;
  
  if((millis() - debounceBotao) > tempo)
  {
    if(!estadoBotao && estadoBotaoAnt)
    {
      apertado = true;
      debounceBotao = millis();
    }
  }
  
  estadoBotaoAnt = estadoBotao;
  
}

bool PushButton::pressed()
{
  return apertado;
}