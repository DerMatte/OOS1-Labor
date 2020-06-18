#include <stdio.h>
#include <iostream>
#include <string.h>

class fifo
{
private:
  /* data */
public:
  static int maxSize;
  static int number;

  char *ptr;
  
  unsigned int wPos;
  unsigned int rPos;


  unsigned int getWPos();
  unsigned int getRPos();

  bool isEmpty();
  bool isFull();

  char push();
  char pop();

  int modulo();
  fifo(unsigned int size = 20);
  ~fifo();
};