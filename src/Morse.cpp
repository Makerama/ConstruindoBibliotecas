#include "Morse.h"

Morse::Morse(int pino){
    pinMode(pino, OUTPUT);
    _pino = pino;
}

void Morse::ligar(){
    digitalWrite(_pino, HIGH);
}


void Morse::desligar(){
  digitalWrite(_pino, LOW);
}
