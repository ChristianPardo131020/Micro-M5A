/*
 * File:   Entradas analogas.c
 * Author: cfpar
 *
 * Created on 24 de agosto de 2020, 04:43 PM
 */


#include <xc.h>
#include <proc/pic18f4550.h>

#pragma config FOSC=XT_XT
#pragma config CPUDIV=OSC1_PLL2

void voltaje(float x){
   
ADCON0bits.CHS=0b0000;
    
float volt;
float decimal;
int entero;

                       

volt=(x*5)/1023;
entero=volt;
decimal=(volt-entero)*10;
PORTC=entero;
PORTD=decimal;
            
if(volt<2.5)PORTDbits.RD5=0;
                         
else PORTDbits.RD5=1;  
}

void temperatura (long c){
    
ADCON0bits.CHS=0b0001;
    
  long tempc;
  long tempf;
            
  tempc= c*0.48875;
  tempf=1.8*tempc+32;
                
  if(tempf>176&&PORTAbits.RA2==1&&PORTAbits.RA3==1&&PORTAbits.RA4==0)PORTDbits.RD5=1;
            
  else if(tempf<176&&PORTAbits.RA2==1&&PORTAbits.RA3==0&&PORTAbits.RA4==1)PORTDbits.RD5=1;
            
  else if(tempf<176&&PORTAbits.RA2==0&&PORTAbits.RA3==1&&PORTAbits.RA4==0)PORTDbits.RD5=1;
            
  else if(tempf>176&&PORTAbits.RA2==0&&PORTAbits.RA3==0&&PORTAbits.RA4==1)PORTDbits.RD5=1;
            
  else PORTDbits.RD5=0;  
}    
            
           

void main(void) {
    TRISA=1;
    TRISD=0;
    TRISC=0;
    PORTD=0;
    PORTC=0;
     ADCON1bits.PCFG=0b1101;
    ADCON1bits.VCFG=0;
   
    
    ADCON2bits.ACQT=2;
    ADCON2bits.ADCS=4;
    ADCON2bits.ADFM=1;
            
    ADCON0bits.ADON=1;
    
    while(1){
        
    ADCON0bits.GO_DONE=1;
        
   while(ADCON0bits.GODONE==1){
       
        int reg;
        reg=ADRESH<<8;
        reg=reg+ADRESL;
        
        if(PORTBbits.RB7==1)voltaje(reg);
        
        else temperatura(reg);
        
        }
    }
    return;
}
