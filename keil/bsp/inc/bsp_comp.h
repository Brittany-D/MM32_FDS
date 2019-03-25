////////////////////////////////////////////////////////////////////////////////
/// @file     BSP_COMP.H
/// @author   PX Liu
/// @version  v2.0.0
/// @date     2019-02-18
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE COMP
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

// Define to prevent recursive inclusion  --------------------------------------
#ifndef __BSP_COMP_H
#define __BSP_COMP_H


#include "types.h"
////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Board_Support_Package
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup COMP_BSP
/// @brief COMP BSP modules
/// @{


////////////////////////////////////////////////////////////////////////////////
/// @defgroup COMP_Exported_Types
/// @{

/// @}


////////////////////////////////////////////////////////////////////////////////
/// @defgroup COMP_Exported_Variables
/// @{

#ifdef _BSP_COMP_C_

#define GLOBAL
#else
#define GLOBAL extern
#endif

#undef GLOBAL
////////////////////////////////////////////////////////////////////////////////
/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup COMP_Exported_Functions
/// @{
void BSP_COMP_GPIO_Configure(u32 COMPx, u8 inp, u8 inm, u8 out);

/// @}


/// @}

/// @}

////////////////////////////////////////////////////////////////////////////////
#endif /*__BSP_COMP_H */
////////////////////////////////////////////////////////////////////////////////
