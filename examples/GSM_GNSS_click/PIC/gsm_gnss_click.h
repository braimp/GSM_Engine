/**
 * @file gsm_gnss_click.h
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
 * @date        04 Jan 2017
 * @author      Branislav Marton
 * @copyright   GNU Public License
 * @version     1.0.0 - Initial testing and verification
 */


#ifndef GSM_GNSS_CLICK_H
#define GSM_GNSS_CLICK_H


/***************************************************************************//**
* Includes
*******************************************************************************/

/***************************************************************************//**
* Preprocessors
*******************************************************************************/

#define GSM_MODEM_BAUD_RATE  9600

/***************************************************************************//**
* Typedefs
*******************************************************************************/

typedef void ( *msg_recieved_callback_t )( char* msg, char* sender_number);

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

void gsm_gnss_click_init( msg_recieved_callback_t callback );
void gsm_gnss_click_run( void );

/*************** END OF FUNCTIONS *********************************************/

#endif // GSM_GNSS_CLICK_H