////////////////////////////////////////////////////////////////////////////////
/// @file     BSP_UART.H
/// @author   QR Wang
/// @version  v2.0.0
/// @date     2019-03-13
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE UART
///           BSP LAYER.
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

#ifndef __BSP_UART_H
#define __BSP_UART_H


////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Board_Support_Package
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_BSP
/// @brief UART BSP modules
/// @{
///


////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_Exported_Types
/// @{

/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_Exported_Variables
/// @{

////////////////////////////////////////////////////////////////////////////////
#ifdef _BSP_UART_C_

#define GLOBAL
#else
#define GLOBAL extern

#endif

#undef GLOBAL
////////////////////////////////////////////////////////////////////////////////
/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UART_Exported_Functions
/// @{

void BSP_UART_GPIO_Configure(UART_TypeDef* UARTx, bool remapEn, u8 remapIdx);

/// @}


/// @}

/// @}

////////////////////////////////////////////////////////////////////////////////
#endif /*__BSP_UART_H */
////////////////////////////////////////////////////////////////////////////////
