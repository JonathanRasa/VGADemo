//--------------------------------------------------------------
// File     : main.c
// Datum    : 30.03.2016
// Version  : 1.0
// Autor    : UB
// mods by	: J.F. van der Bent
// CPU      : STM32F4
// IDE      : CooCox CoIDE 1.7.x
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------
#include "main.h"
#include "stm32_ub_vga_screen.h"
#include <math.h>
#include "test.h"

#define x1  0
#define y1  0
#define x2  250
#define y2  640
#define color  10
#define sgn(x) ((x<0)?-1:((x>0)?1:0)) /* macro to return the sign of a                                       number */

int main(void)
{

	//  uint32_t n;

	SystemInit(); // System speed to 168MHz

	UB_VGA_Screen_Init(); // Init VGA-Screen

	UB_VGA_FillScreen(VGA_COL_BLACK);



  while(1)
  {
	  //line_fast(x1,y1,x2,y2,color);
	  UB_VGA_SetPixel(160,120,100);
  }
}





