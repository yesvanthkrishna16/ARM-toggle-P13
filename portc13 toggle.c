#include<stm32f10x.h>
void delay_ms(unit16_t t) //initilizing a function
void delay_ms(unit16_t t)//delay function for 72 MHz ARM  controller 
{
  volatile unsigned long l=0;
  for(uint16_t i=0;i<=t;i++)
    {
      for(l=0;l<6000;l++)
        {
        }
    }
}
int main()
{
  RCC->APB2ENR |=0xFC; //ENABLE THE CLOCK FOR THE GPIO PINS
  GPIOC->CRH = 0x44344444 //PC13 AS OUTPUTS
  while(1)
    {
       GPIOC-> ODR=(1<<13);//all the pins of the PORT A  set to low
      delay_ms(1000);//dely for 100ms
    }
}
