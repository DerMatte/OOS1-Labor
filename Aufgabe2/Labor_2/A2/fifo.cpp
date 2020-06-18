#include "fifo.hpp"


fifo::fifo(unsigned int size) {
  
  ptr = new char(size + 1);
}

fifo::~fifo() {
  if (ptr != NULL && strlen(ptr) != 0)
  {
    // free(ptr[rPos]);
  }
  
}

unsigned int fifo::getWPos() {
  return wPos;
}

unsigned int fifo::getRPos() {
  return rPos;
}

bool fifo::isEmpty() {
  if (number == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
  
  
}
bool fifo::isFull() {

  if (number == maxSize)
  {
    return true;
  }
  else
  {
    return false;
  }
  
}

// Bekommt char -> schreibt in array ; gibt beschriebene Stelle zurück
int fifo::push(char c) {
  if (!isFull())
  {
    
    ptr[wPos] = c;
    if (wPos == maxSize)
    {
      wPos = 0;
    }
    number++;
    wPos++;

    return wPos - 1;

  }
  else if (isFull())
  {
    return -1;
  }
  else
  {
    /* code */
  }
}


char fifo::pop() {
  
  if (isEmpty())
  {
    return '\0';
  } else
  {
    char zwischen = ptr[rPos];
    ptr[rPos] = '\0';
    if (rPos == maxSize) {rPos = -1;}
    rPos++;
    number--;
    return zwischen;
  }
  
  
}

int fifo::modulo(int i) {
  return i % maxSize;
}