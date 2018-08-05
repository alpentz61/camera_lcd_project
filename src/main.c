#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C"
#endif

#include "diag/Trace.h"
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "Adafruit_ILI9341.h"



int main(void)
{

   begin();
   startWrite();
   writeFillRect(10,10,100,100,ILI9341_BLACK);
   writeFillRect(10,120,100,100,ILI9341_CYAN );
   writeFillRect(120,10,100,100,ILI9341_BLUE);
   writeFillRect(120,120,100,100,ILI9341_GREEN);
   endWrite();
   int i;
   while(1){

   }
    end();

}
