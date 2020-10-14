/*
 * File:   Entradas Digitales.c
 * Author: cfpar
 *
 * Created on 12 de agosto de 2020, 04:26 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000


void main(void) {
    
    ADCON1=0b11111111;
    TRISA=0b00000100;
    PORTA=0b00000000;
    TRISB=0b00000000;
    PORTB=0b00000000;
    TRISD=0b00000000;
    PORTD=0b00000000;
   
    
     
    int pul=0;
    while(1){
    if(PORTAbits.RA2==1){
       pul=pul+1; 
       if(pul==5){
           pul=1;
       }
       }
    
    if(pul==1){       
            __delay_ms(20);
            PORTDbits.RD0=1;
            __delay_ms(20);
            PORTDbits.RD0=0;
            __delay_ms(20);
            PORTDbits.RD1=1;
            __delay_ms(20);
            PORTDbits.RD1=0;
            __delay_ms(20);
             PORTDbits.RD2=1;
            __delay_ms(20);
             PORTDbits.RD2=0;
            __delay_ms(20);
            PORTDbits.RD3=1;
            __delay_ms(20);
            PORTDbits.RD3=0;
            __delay_ms(20);
             PORTDbits.RD4=1;
            __delay_ms(20);
            PORTDbits.RD4=0;
            __delay_ms(20);
            PORTDbits.RD5=1;
            __delay_ms(20);
            PORTDbits.RD5=0;
            __delay_ms(20);
            PORTDbits.RD6=1;
            __delay_ms(20);
            PORTDbits.RD6=0;
            __delay_ms(20);
            PORTDbits.RD7=1;
            __delay_ms(20);
            PORTDbits.RD7=0;
            __delay_ms(20);
            PORTDbits.RD6=1;
            __delay_ms(20);
            PORTDbits.RD6=0;
            __delay_ms(20);
            PORTDbits.RD5=1;
            __delay_ms(20);
            PORTDbits.RD5=0;
            __delay_ms(20);
            PORTDbits.RD4=1;
            __delay_ms(20);
            PORTDbits.RD4=0;
            __delay_ms(20);
            PORTDbits.RD3=1;
            __delay_ms(20);
            PORTDbits.RD3=0;
            __delay_ms(20);
            PORTDbits.RD2=1;
            __delay_ms(20);
             PORTDbits.RD2=0;
            __delay_ms(20);
            PORTDbits.RD1=1;
            __delay_ms(20);
            PORTDbits.RD1=0;
            __delay_ms(20);  
    }
    if(pul==2){
         PORTB=0b00000001;
         __delay_ms(200);  
         PORTB=0b000000011;
         __delay_ms(200); 
         PORTB=0b000000111;
         __delay_ms(200); 
         PORTB=0b000001111;
         __delay_ms(200); 
         PORTB=0b00011111;
         __delay_ms(200); 
         PORTB=0b00111111;
         __delay_ms(200); 
         PORTB=0b01111111;
         __delay_ms(200); 
         PORTB=0b11111111;
         __delay_ms(200); 
         PORTB=0b01111111;
         __delay_ms(200); 
         PORTB=0b00111111;
         __delay_ms(200);
         PORTB=0b00011111;
         __delay_ms(200);
         PORTB=0b00001111;
         __delay_ms(200);
         PORTB=0b00000111;
         __delay_ms(200);
         PORTB=0b00000011;
         __delay_ms(200);
         PORTB=0b00000001;
         __delay_ms(200);
         PORTB=0b00000000;
         __delay_ms(100);
        
      }
    
    
    if(pul==3){
      PORTA=0b00111001;
      __delay_ms(200); 
     PORTA=0b00000000;
      __delay_ms(200);
     PORTA=0b00100000;
      __delay_ms(200);
     PORTA=0b00010000;
      __delay_ms(200);
     PORTA=0b00110000;
      __delay_ms(200);
     PORTA=0b0001000;
      __delay_ms(200);
     PORTA=0b00101000;
      __delay_ms(200);
     PORTA=0b00011000;
      __delay_ms(200);
     PORTA=0b00111000;
      __delay_ms(200);
     PORTA=0b00000001;
      __delay_ms(200);
     PORTA=0b00100001;
      __delay_ms(200);
     PORTA=0b00000000; 
    }
    if(pul==4){
     
      PORTAbits.RA1=0;
      __delay_ms(5);
      PORTAbits.RA1=1;
      __delay_ms(5);
       PORTAbits.RA1=0;
      __delay_ms(5);
      PORTAbits.RA1=1;
      __delay_ms(5);
       PORTAbits.RA1=0;
      __delay_ms(5);
      PORTAbits.RA1=1;
      __delay_ms(5);  
    }
    }
    return;
}

   

