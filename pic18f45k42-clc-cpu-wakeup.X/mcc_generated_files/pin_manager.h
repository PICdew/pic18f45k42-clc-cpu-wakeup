/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F45K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSELA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISAbits.TRISA4
#define D2_LAT                  LATAbits.LATA4
#define D2_PORT                 PORTAbits.RA4
#define D2_WPU                  WPUAbits.WPUA4
#define D2_OD                   ODCONAbits.ODCA4
#define D2_ANS                  ANSELAbits.ANSELA4
#define D2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define D2_GetValue()           PORTAbits.RA4
#define D2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define D2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define D2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISAbits.TRISA5
#define D3_LAT                  LATAbits.LATA5
#define D3_PORT                 PORTAbits.RA5
#define D3_WPU                  WPUAbits.WPUA5
#define D3_OD                   ODCONAbits.ODCA5
#define D3_ANS                  ANSELAbits.ANSELA5
#define D3_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define D3_GetValue()           PORTAbits.RA5
#define D3_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define D3_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define D3_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA6
#define D4_LAT                  LATAbits.LATA6
#define D4_PORT                 PORTAbits.RA6
#define D4_WPU                  WPUAbits.WPUA6
#define D4_OD                   ODCONAbits.ODCA6
#define D4_ANS                  ANSELAbits.ANSELA6
#define D4_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define D4_GetValue()           PORTAbits.RA6
#define D4_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define D4_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define D4_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISAbits.TRISA7
#define D5_LAT                  LATAbits.LATA7
#define D5_PORT                 PORTAbits.RA7
#define D5_WPU                  WPUAbits.WPUA7
#define D5_OD                   ODCONAbits.ODCA7
#define D5_ANS                  ANSELAbits.ANSELA7
#define D5_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define D5_GetValue()           PORTAbits.RA7
#define D5_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define D5_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define D5_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/