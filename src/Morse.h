#ifndef Morse
#define Morse

#include "Arduino.h"

class Morse{
    public:
          Morse(int pino);
          void ligar();
          void desligar();
    private:
          int _pino;
  };


#endif
