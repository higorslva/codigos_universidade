#include <stdio.h>
#include <stdint.h>

union reg{
  uint32_t eax;
  uint16_t ax;
//  uint8_t al;
//  uint8_t ah;
  struct{
    uint8_t al;
    uint8_t ah;
  };
};

int main(){
  union reg aux = {.eax = 0x12349876};
  
  printf("Eax %02x %d %lu", aux.eax, aux.eax, sizeof(aux.eax)*8);
  printf("\n Ax %02x %d %lu", aux.ax, aux.ax, sizeof(aux.ax)*8);   
  aux.ax = 0x2435;
  printf("\n Ah %02x %d %lu", aux.ah, aux.ah, sizeof(aux.ah)*8); 
  printf("\n Al %02x %d %lu", aux.al, aux.al, sizeof(aux.al)*8); 
  return 0;
}