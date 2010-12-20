/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2005),
 *  Robotics Association of Coslada, Eurobotics Engineering (2010)
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Revision : $Id: uart_config.h,v 1.3.10.1 2006/11/26 21:06:02 zer0 Exp $
 *
 */

/*  Droids-corp 2004 - Zer0
 *  config for uart module
 */

/*  Robotics Association of Coslada, Eurobotics Engineering (2010)
 *  Javier Baliñas Santos <javier@arc-robots.org>
 *	
 *  Code ported to families of microcontrollers dsPIC, PIC24H and PIC24F from
 *  uart_config.h,v 1.3.10.1 2006/11/26 21:06:02 zer0 Exp.
 *
 */


#ifndef _UART_CONFIG_H_
#define _UART_CONFIG_H_

/*
 * STDIO redirection (UART0 = 0, UART1 = 1)
 */
 #define STDIO_UART	0

/*
 * UART0 definitions (dspic UART1) 
 */

/* compile uart0 fonctions, undefine it to pass compilation */
#define UART0_COMPILE  

/* enable uart0 if == 1, disable if == 0 */
#define UART0_ENABLED  1

/* enable uart0 interrupts if == 1, disable if == 0 */
#define UART0_INTERRUPT_ENABLED  1

#define UART0_BAUDRATE 38400

/* 
 * if you enable this, the maximum baudrate you can reach is 
 * higher, but the precision is lower. 
 */
#define UART0_USE_DOUBLE_SPEED 0
//#define UART0_USE_DOUBLE_SPEED 1

#define UART0_RX_FIFO_SIZE 4
#define UART0_TX_FIFO_SIZE 4

#define UART0_NBITS 8

#define UART0_PARITY UART_PARTITY_NONE
//#define UART0_PARITY UART_PARTITY_ODD
//#define UART0_PARITY UART_PARTITY_EVEN

#define UART0_STOP_BIT UART_STOP_BITS_1
//#define UART0_STOP_BIT UART_STOP_BITS_2

/*
 * UART1 definitions (dspic UART2) 
 */

/* compile uart1 fonctions, undefine it to pass compilation */
//#define UART1_COMPILE  

/* enable uart1 if == 1, disable if == 0 */
//#define UART1_ENABLED  1

/* enable uart1 interrupts if == 1, disable if == 0 */
#define UART1_INTERRUPT_ENABLED  1

#define UART1_BAUDRATE 38400

/* 
 * if you enable this, the maximum baudrate you can reach is 
 * higher, but the precision is lower. 

 */
#define UART1_USE_DOUBLE_SPEED 0
//#define UART1_USE_DOUBLE_SPEED 1

#define UART1_RX_FIFO_SIZE 4
#define UART1_TX_FIFO_SIZE 4

#define UART1_NBITS 8

#define UART1_PARITY UART_PARTITY_NONE
//#define UART1_PARITY UART_PARTITY_ODD
//#define UART1_PARITY UART_PARTITY_EVEN

#define UART1_STOP_BIT UART_STOP_BITS_1
//#define UART1_STOP_BIT UART_STOP_BITS_2


#endif

