#include "asf.h"

volatile int g_cnt = 0;
char g_str[10];

// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.
void btn_callback(void) {

  if (g_cnt >= 8)
    g_cnt = 0;

  g_cnt = 2; 

  int i = 0;
}

void main(void) {
  // ...
  int batata;

  batata = batata + 1;
  while (1) {
  }
}
