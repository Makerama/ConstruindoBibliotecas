#ifndef Morse
#define Morse

#include "Arduino.h"

class Morse{
    public:
          Morse(int p1, int p2, int p3);
          void ligarTodos();
          void desligarTodos();
    private:
          int pino1;
          int pino2;
          int pino3;
  };


#endif
