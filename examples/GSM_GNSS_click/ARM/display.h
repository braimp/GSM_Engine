/**
 * @file display.c
 * @brief <h2> GSM/GNSS click Example </h2>
 *
 * @par
 * Example for <a href="http://www.mikroe.com">MikroElektronika's</a>
 * GSM/GNSS click board.
 *
 *
 *
 ******************************************************************************/

/**
 * @page Example
 * @date        28 Dec 2016
 * @author      Branislav Marton
 * @copyright   GNU Public License
 * @version     1.0.0 - Initial testing and verification
 */

/**
 * @page TEST_CFG Test Configurations
 *
 * ### Test configuration STM : ###
 * @par
 * -<b> MCU           </b> :
 * -<b> Dev. Board    </b> :
 * -<b> Ext. Modules  </b> :
 * -<b> SW            </b> :
 *
 */

/**
 * @page Dev. board setup
 *
 */

#ifndef DISPLAY_H
#define DISPLAY_H

/***************************************************************************//**
* Includes
*******************************************************************************/

/***************************************************************************//**
* Preprocessors
*******************************************************************************/

/***************************************************************************//**
* Typedefs
*******************************************************************************/

/***************************************************************************//**
* Variable Definitions
*******************************************************************************/

/***************************************************************************//**
* Function Prototypes
*******************************************************************************/

/******************************************************************************
* Private Functions
*******************************************************************************/

/***************************************************************************//**
* Public Functions
*******************************************************************************/

void display_init( void );
void display_print_msg( char* msg, char* sender_number );

/*************** END OF FUNCTIONS *********************************************/

#endif // DISPLAY_H