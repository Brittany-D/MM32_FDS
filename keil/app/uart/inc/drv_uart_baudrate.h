////////////////////////////////////////////////////////////////////////////////
/// @file     DRV_UART_BAUDRATE.H
/// @author   QR Wang
/// @version  v2.0.0
/// @date     2019-03-13
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE DRV_UART_BAUDRATE
///           EXAMPLES.
////////////////////////////////////////////////////////////////////////////////
/// @attention
///
/// THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
/// CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
/// TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
/// CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
/// HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
/// CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
///
/// <H2><CENTER>&COPY; COPYRIGHT 2018-2019 MINDMOTION </CENTER></H2>
////////////////////////////////////////////////////////////////////////////////

#ifndef __DRV_UART_BAUDRATE_H
#define __DRV_UART_BAUDRATE_H
////////////////////////////////////////////////////////////////////////////////

#include "types.h"
#include "MM32.h"

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Driver_Layer
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup UART
/// @{
///

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_Exported_Types
/// @{
///

#define BAUDRATE_TYPICAL_VALUE 9600

////////////////////////////////////////////////////////////////////////////////
/// @brief UART baudrate mode enumerate definition
/// @anchor BAUDRATEMODE
////////////////////////////////////////////////////////////////////////////////
typedef enum {
    baudrateUART = 0,     //
    baudrateTIM  = 1     //
} baudrateModeTypeDef;



////////////////////////////////////////////////////////////////////////////////
/// @brief  DRV UART baudrate structure definition
////////////////////////////////////////////////////////////////////////////////
typedef struct
{
    u8   captureFinishFlag;   //
    u8   captureStartFlag;    //
    u16  captureCcrValue;     //
    u16  capturePeriod;       //
    u32  CaptureTime;         // us
    u8   uartStartFlag;
    u8   uartFinishFlag;
}UART_Baudrate_TypeDef;


/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_Exported_Variables
/// @{
////////////////////////////////////////////////////////////////////////////////
#ifdef _DRV_UART_BAUDRATE_C_
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL UART_Baudrate_TypeDef baudrateStructure;


#undef GLOBAL
////////////////////////////////////////////////////////////////////////////////
/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_Exported_Functions
/// @{

void Baudrate_IO_Config(baudrateModeTypeDef mode);
void TIM_EXTI_Config();
void TIM_Config();
void Autobaudrate(u32 baudRate);


void baudrateTransmit(u8 *pData, u8 cnt);
void baudrateReceive(u8 *pData, u8 cnt, u16 baudrate);

/// @}

/// @}

/// @}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
