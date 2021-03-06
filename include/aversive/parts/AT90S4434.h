/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2009)
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
 *  Revision : $Id $
 *
 */

/* WARNING : this file is automatically generated by scripts.
 * You should not edit it. If you find something wrong in it,
 * write to zer0@droids-corp.org */


/* prescalers timer 0 */
#define TIMER0_PRESCALER_DIV_0          0
#define TIMER0_PRESCALER_DIV_1          1
#define TIMER0_PRESCALER_DIV_8          2
#define TIMER0_PRESCALER_DIV_64         3
#define TIMER0_PRESCALER_DIV_256        4
#define TIMER0_PRESCALER_DIV_1024       5
#define TIMER0_PRESCALER_DIV_FALL       6
#define TIMER0_PRESCALER_DIV_RISE       7

#define TIMER0_PRESCALER_REG_0          0
#define TIMER0_PRESCALER_REG_1          1
#define TIMER0_PRESCALER_REG_2          8
#define TIMER0_PRESCALER_REG_3          64
#define TIMER0_PRESCALER_REG_4          256
#define TIMER0_PRESCALER_REG_5          1024
#define TIMER0_PRESCALER_REG_6          -1
#define TIMER0_PRESCALER_REG_7          -2

/* prescalers timer 1 */
#define TIMER1_PRESCALER_DIV_0          0
#define TIMER1_PRESCALER_DIV_1          1
#define TIMER1_PRESCALER_DIV_8          2
#define TIMER1_PRESCALER_DIV_64         3
#define TIMER1_PRESCALER_DIV_256        4
#define TIMER1_PRESCALER_DIV_1024       5
#define TIMER1_PRESCALER_DIV_FALL       6
#define TIMER1_PRESCALER_DIV_RISE       7

#define TIMER1_PRESCALER_REG_0          0
#define TIMER1_PRESCALER_REG_1          1
#define TIMER1_PRESCALER_REG_2          8
#define TIMER1_PRESCALER_REG_3          64
#define TIMER1_PRESCALER_REG_4          256
#define TIMER1_PRESCALER_REG_5          1024
#define TIMER1_PRESCALER_REG_6          -1
#define TIMER1_PRESCALER_REG_7          -2

/* prescalers timer 2 */
#define TIMER2_PRESCALER_DIV_0          0
#define TIMER2_PRESCALER_DIV_1          1
#define TIMER2_PRESCALER_DIV_8          2
#define TIMER2_PRESCALER_DIV_32         3
#define TIMER2_PRESCALER_DIV_64         4
#define TIMER2_PRESCALER_DIV_128        5
#define TIMER2_PRESCALER_DIV_256        6
#define TIMER2_PRESCALER_DIV_1024       7

#define TIMER2_PRESCALER_REG_0          0
#define TIMER2_PRESCALER_REG_1          1
#define TIMER2_PRESCALER_REG_2          8
#define TIMER2_PRESCALER_REG_3          32
#define TIMER2_PRESCALER_REG_4          64
#define TIMER2_PRESCALER_REG_5          128
#define TIMER2_PRESCALER_REG_6          256
#define TIMER2_PRESCALER_REG_7          1024


/* available timers */
#define TIMER0_AVAILABLE
#define TIMER1_AVAILABLE
#define TIMER1A_AVAILABLE
#define TIMER1B_AVAILABLE
#define TIMER2_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW1_NUM 1
#define SIG_OVERFLOW2_NUM 2
#define SIG_OVERFLOW_TOTAL_NUM 3

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE1A_NUM 0
#define SIG_OUTPUT_COMPARE1B_NUM 1
#define SIG_OUTPUT_COMPARE2_NUM 2
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 3

/* Pwm nums */
#define PWM1A_NUM 0
#define PWM1B_NUM 1
#define PWM2_NUM 2
#define PWM_TOTAL_NUM 3

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE1_NUM 0
#define SIG_INPUT_CAPTURE_TOTAL_NUM 1


/* WDTCR */
#define WDP0_REG             WDTCR
#define WDP1_REG             WDTCR
#define WDP2_REG             WDTCR
#define WDE_REG              WDTCR
#define WDTOE_REG            WDTCR

/* GIMSK */
#define INT0_REG             GIMSK
#define INT1_REG             GIMSK

/* ICR1H */
#define ICR1H0_REG           ICR1H
#define ICR1H1_REG           ICR1H
#define ICR1H2_REG           ICR1H
#define ICR1H3_REG           ICR1H
#define ICR1H4_REG           ICR1H
#define ICR1H5_REG           ICR1H
#define ICR1H6_REG           ICR1H
#define ICR1H7_REG           ICR1H

/* ADMUX */
#define MUX0_REG             ADMUX
#define MUX1_REG             ADMUX
#define MUX2_REG             ADMUX

/* TCCR0 */
#define CS00_REG             TCCR0
#define CS01_REG             TCCR0
#define CS02_REG             TCCR0

/* TCCR2 */
#define CS20_REG             TCCR2
#define CS21_REG             TCCR2
#define CS22_REG             TCCR2
#define CTC2_REG             TCCR2
#define COM20_REG            TCCR2
#define COM21_REG            TCCR2
#define PWM2_REG             TCCR2

/* DDRB */
#define DDB0_REG             DDRB
#define DDB1_REG             DDRB
#define DDB2_REG             DDRB
#define DDB3_REG             DDRB
#define DDB4_REG             DDRB
#define DDB5_REG             DDRB
#define DDB6_REG             DDRB
#define DDB7_REG             DDRB

/* USR */
#define OR_REG               USR
#define FE_REG               USR
#define UDRE_REG             USR
#define TXC_REG              USR
#define RXC_REG              USR

/* EEDR */
#define EEDR0_REG            EEDR
#define EEDR1_REG            EEDR
#define EEDR2_REG            EEDR
#define EEDR3_REG            EEDR
#define EEDR4_REG            EEDR
#define EEDR5_REG            EEDR
#define EEDR6_REG            EEDR
#define EEDR7_REG            EEDR

/* DDRC */
#define DDC0_REG             DDRC
#define DDC1_REG             DDRC
#define DDC2_REG             DDRC
#define DDC3_REG             DDRC
#define DDC4_REG             DDRC
#define DDC5_REG             DDRC
#define DDC6_REG             DDRC
#define DDC7_REG             DDRC

/* DDRA */
#define DDA0_REG             DDRA
#define DDA1_REG             DDRA
#define DDA2_REG             DDRA
#define DDA3_REG             DDRA
#define DDA4_REG             DDRA
#define DDA5_REG             DDRA
#define DDA6_REG             DDRA
#define DDA7_REG             DDRA

/* TCCR1A */
#define PWM10_REG            TCCR1A
#define PWM11_REG            TCCR1A
#define COM1B0_REG           TCCR1A
#define COM1B1_REG           TCCR1A
#define COM1A0_REG           TCCR1A
#define COM1A1_REG           TCCR1A

/* DDRD */
#define DDD0_REG             DDRD
#define DDD1_REG             DDRD
#define DDD2_REG             DDRD
#define DDD3_REG             DDRD
#define DDD4_REG             DDRD
#define DDD5_REG             DDRD
#define DDD6_REG             DDRD
#define DDD7_REG             DDRD

/* TCCR1B */
#define CS10_REG             TCCR1B
#define CS11_REG             TCCR1B
#define CS12_REG             TCCR1B
#define CTC1_REG             TCCR1B
#define ICES1_REG            TCCR1B
#define ICNC1_REG            TCCR1B

/* GIFR */
#define INTF0_REG            GIFR
#define INTF1_REG            GIFR

/* TIMSK */
#define TOIE0_REG            TIMSK
#define TOIE1_REG            TIMSK
#define OCIE1B_REG           TIMSK
#define OCIE1A_REG           TIMSK
#define TICIE1_REG           TIMSK
#define TOIE2_REG            TIMSK
#define OCIE2_REG            TIMSK

/* UCR */
#define TXB8_REG             UCR
#define RXB8_REG             UCR
#define CHR9_REG             UCR
#define TXEN_REG             UCR
#define RXEN_REG             UCR
#define UDRIE_REG            UCR
#define TXCIE_REG            UCR
#define RXCIE_REG            UCR

/* SPDR */
#define SPDR0_REG            SPDR
#define SPDR1_REG            SPDR
#define SPDR2_REG            SPDR
#define SPDR3_REG            SPDR
#define SPDR4_REG            SPDR
#define SPDR5_REG            SPDR
#define SPDR6_REG            SPDR
#define SPDR7_REG            SPDR

/* SPSR */
#define WCOL_REG             SPSR
#define SPIF_REG             SPSR

/* ACSR */
#define ACIS0_REG            ACSR
#define ACIS1_REG            ACSR
#define ACIC_REG             ACSR
#define ACIE_REG             ACSR
#define ACI_REG              ACSR
#define ACO_REG              ACSR
#define ACD_REG              ACSR

/* SPH */
#define SP8_REG              SPH
#define SP9_REG              SPH

/* OCR1BL */
#define OCR1BL0_REG          OCR1BL
#define OCR1BL1_REG          OCR1BL
#define OCR1BL2_REG          OCR1BL
#define OCR1BL3_REG          OCR1BL
#define OCR1BL4_REG          OCR1BL
#define OCR1BL5_REG          OCR1BL
#define OCR1BL6_REG          OCR1BL
#define OCR1BL7_REG          OCR1BL

/* ICR1L */
#define ICR1L0_REG           ICR1L
#define ICR1L1_REG           ICR1L
#define ICR1L2_REG           ICR1L
#define ICR1L3_REG           ICR1L
#define ICR1L4_REG           ICR1L
#define ICR1L5_REG           ICR1L
#define ICR1L6_REG           ICR1L
#define ICR1L7_REG           ICR1L

/* OCR1BH */
#define OCR1BH0_REG          OCR1BH
#define OCR1BH1_REG          OCR1BH
#define OCR1BH2_REG          OCR1BH
#define OCR1BH3_REG          OCR1BH
#define OCR1BH4_REG          OCR1BH
#define OCR1BH5_REG          OCR1BH
#define OCR1BH6_REG          OCR1BH
#define OCR1BH7_REG          OCR1BH

/* PIND */
#define PIND0_REG            PIND
#define PIND1_REG            PIND
#define PIND2_REG            PIND
#define PIND3_REG            PIND
#define PIND4_REG            PIND
#define PIND5_REG            PIND
#define PIND6_REG            PIND
#define PIND7_REG            PIND

/* SPL */
#define SP0_REG              SPL
#define SP1_REG              SPL
#define SP2_REG              SPL
#define SP3_REG              SPL
#define SP4_REG              SPL
#define SP5_REG              SPL
#define SP6_REG              SPL
#define SP7_REG              SPL

/* ADCL */
#define ADC0_REG             ADCL
#define ADC1_REG             ADCL
#define ADC2_REG             ADCL
#define ADC3_REG             ADCL
#define ADC4_REG             ADCL
#define ADC5_REG             ADCL
#define ADC6_REG             ADCL
#define ADC7_REG             ADCL

/* MCUSR */
#define PORF_REG             MCUSR
#define EXTRF_REG            MCUSR

/* EECR */
#define EERE_REG             EECR
#define EEWE_REG             EECR
#define EEMWE_REG            EECR
#define EERIE_REG            EECR

/* TCNT1L */
#define TCNT1L0_REG          TCNT1L
#define TCNT1L1_REG          TCNT1L
#define TCNT1L2_REG          TCNT1L
#define TCNT1L3_REG          TCNT1L
#define TCNT1L4_REG          TCNT1L
#define TCNT1L5_REG          TCNT1L
#define TCNT1L6_REG          TCNT1L
#define TCNT1L7_REG          TCNT1L

/* PORTB */
#define PORTB0_REG           PORTB
#define PORTB1_REG           PORTB
#define PORTB2_REG           PORTB
#define PORTB3_REG           PORTB
#define PORTB4_REG           PORTB
#define PORTB5_REG           PORTB
#define PORTB6_REG           PORTB
#define PORTB7_REG           PORTB

/* PORTD */
#define PORTD0_REG           PORTD
#define PORTD1_REG           PORTD
#define PORTD2_REG           PORTD
#define PORTD3_REG           PORTD
#define PORTD4_REG           PORTD
#define PORTD5_REG           PORTD
#define PORTD6_REG           PORTD
#define PORTD7_REG           PORTD

/* TCNT1H */
#define TCNT1H0_REG          TCNT1H
#define TCNT1H1_REG          TCNT1H
#define TCNT1H2_REG          TCNT1H
#define TCNT1H3_REG          TCNT1H
#define TCNT1H4_REG          TCNT1H
#define TCNT1H5_REG          TCNT1H
#define TCNT1H6_REG          TCNT1H
#define TCNT1H7_REG          TCNT1H

/* PORTC */
#define PORTC0_REG           PORTC
#define PORTC1_REG           PORTC
#define PORTC2_REG           PORTC
#define PORTC3_REG           PORTC
#define PORTC4_REG           PORTC
#define PORTC5_REG           PORTC
#define PORTC6_REG           PORTC
#define PORTC7_REG           PORTC

/* ADCH */
#define ADC8_REG             ADCH
#define ADC9_REG             ADCH

/* PORTA */
#define PORTA0_REG           PORTA
#define PORTA1_REG           PORTA
#define PORTA2_REG           PORTA
#define PORTA3_REG           PORTA
#define PORTA4_REG           PORTA
#define PORTA5_REG           PORTA
#define PORTA6_REG           PORTA
#define PORTA7_REG           PORTA

/* TCNT2 */
#define TCNT2_0_REG          TCNT2
#define TCNT2_1_REG          TCNT2
#define TCNT2_2_REG          TCNT2
#define TCNT2_3_REG          TCNT2
#define TCNT2_4_REG          TCNT2
#define TCNT2_5_REG          TCNT2
#define TCNT2_6_REG          TCNT2
#define TCNT2_7_REG          TCNT2

/* TCNT0 */
#define TCNT00_REG           TCNT0
#define TCNT01_REG           TCNT0
#define TCNT02_REG           TCNT0
#define TCNT03_REG           TCNT0
#define TCNT04_REG           TCNT0
#define TCNT05_REG           TCNT0
#define TCNT06_REG           TCNT0
#define TCNT07_REG           TCNT0

/* UDR */
#define UDR0_REG             UDR
#define UDR1_REG             UDR
#define UDR2_REG             UDR
#define UDR3_REG             UDR
#define UDR4_REG             UDR
#define UDR5_REG             UDR
#define UDR6_REG             UDR
#define UDR7_REG             UDR

/* UBRR */
#define UBRR0_REG            UBRR
#define UBRR1_REG            UBRR
#define UBRR2_REG            UBRR
#define UBRR3_REG            UBRR
#define UBRR4_REG            UBRR
#define UBRR5_REG            UBRR
#define UBRR6_REG            UBRR
#define UBRR7_REG            UBRR

/* ADCSR */
#define ADPS0_REG            ADCSR
#define ADPS1_REG            ADCSR
#define ADPS2_REG            ADCSR
#define ADIE_REG             ADCSR
#define ADIF_REG             ADCSR
#define ADFR_REG             ADCSR
#define ADSC_REG             ADCSR
#define ADEN_REG             ADCSR

/* SREG */
#define C_REG                SREG
#define Z_REG                SREG
#define N_REG                SREG
#define V_REG                SREG
#define S_REG                SREG
#define H_REG                SREG
#define T_REG                SREG
#define I_REG                SREG

/* TIFR */
#define TOV0_REG             TIFR
#define TOV1_REG             TIFR
#define OCF1B_REG            TIFR
#define OCF1A_REG            TIFR
#define ICF1_REG             TIFR
#define TOV2_REG             TIFR
#define OCF2_REG             TIFR

/* EEARH */
#define EEAR8_REG            EEARH

/* EEARL */
#define EEAR0_REG            EEARL
#define EEAR1_REG            EEARL
#define EEAR2_REG            EEARL
#define EEAR3_REG            EEARL
#define EEAR4_REG            EEARL
#define EEAR5_REG            EEARL
#define EEAR6_REG            EEARL
#define EEAR7_REG            EEARL

/* PINC */
#define PINC0_REG            PINC
#define PINC1_REG            PINC
#define PINC2_REG            PINC
#define PINC3_REG            PINC
#define PINC4_REG            PINC
#define PINC5_REG            PINC
#define PINC6_REG            PINC
#define PINC7_REG            PINC

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB
#define PINB4_REG            PINB
#define PINB5_REG            PINB
#define PINB6_REG            PINB
#define PINB7_REG            PINB

/* PINA */
#define PINA0_REG            PINA
#define PINA1_REG            PINA
#define PINA2_REG            PINA
#define PINA3_REG            PINA
#define PINA4_REG            PINA
#define PINA5_REG            PINA
#define PINA6_REG            PINA
#define PINA7_REG            PINA

/* MCUCR */
#define ISC00_REG            MCUCR
#define ISC01_REG            MCUCR
#define ISC10_REG            MCUCR
#define ISC11_REG            MCUCR
#define SM0_REG              MCUCR
#define SM1_REG              MCUCR
#define SE_REG               MCUCR

/* OCR1AH */
#define OCR1AH0_REG          OCR1AH
#define OCR1AH1_REG          OCR1AH
#define OCR1AH2_REG          OCR1AH
#define OCR1AH3_REG          OCR1AH
#define OCR1AH4_REG          OCR1AH
#define OCR1AH5_REG          OCR1AH
#define OCR1AH6_REG          OCR1AH
#define OCR1AH7_REG          OCR1AH

/* OCR1AL */
#define OCR1AL0_REG          OCR1AL
#define OCR1AL1_REG          OCR1AL
#define OCR1AL2_REG          OCR1AL
#define OCR1AL3_REG          OCR1AL
#define OCR1AL4_REG          OCR1AL
#define OCR1AL5_REG          OCR1AL
#define OCR1AL6_REG          OCR1AL
#define OCR1AL7_REG          OCR1AL

/* SPCR */
#define SPR0_REG             SPCR
#define SPR1_REG             SPCR
#define CPHA_REG             SPCR
#define CPOL_REG             SPCR
#define MSTR_REG             SPCR
#define DORD_REG             SPCR
#define SPE_REG              SPCR
#define SPIE_REG             SPCR

/* OCR2 */
#define OCR2_0_REG           OCR2
#define OCR2_1_REG           OCR2
#define OCR2_2_REG           OCR2
#define OCR2_3_REG           OCR2
#define OCR2_4_REG           OCR2
#define OCR2_5_REG           OCR2
#define OCR2_6_REG           OCR2
#define OCR2_7_REG           OCR2

/* ASSR */
#define TCR2UB_REG           ASSR
#define OCR2UB_REG           ASSR
#define TCN2UB_REG           ASSR
#define AS2_REG              ASSR

/* pins mapping */
#define ADC0_PORT PORTA
#define ADC0_BIT 0

#define ADC1_PORT PORTA
#define ADC1_BIT 1

#define ADC2_PORT PORTA
#define ADC2_BIT 2

#define ADC3_PORT PORTA
#define ADC3_BIT 3

#define ADC4_PORT PORTA
#define ADC4_BIT 4

#define ADc5_PORT PORTA
#define ADc5_BIT 5

#define ADC6_PORT PORTA
#define ADC6_BIT 6

#define ADC7_PORT PORTA
#define ADC7_BIT 7

#define T0_PORT PORTB
#define T0_BIT 0

#define T1_PORT PORTB
#define T1_BIT 1

#define AIN0_PORT PORTB
#define AIN0_BIT 2

#define AIN1_PORT PORTB
#define AIN1_BIT 3

#define SS_PORT PORTB
#define SS_BIT 4

#define MOSI_PORT PORTB
#define MOSI_BIT 5

#define MISO_PORT PORTB
#define MISO_BIT 6








#define TOSC1_PORT PORTC
#define TOSC1_BIT 6

#define TOSC2_PORT PORTC
#define TOSC2_BIT 7

#define RXD_PORT PORTD
#define RXD_BIT 0

#define TXD_PORT PORTD
#define TXD_BIT 1

#define INT0_PORT PORTD
#define INT0_BIT 2

#define INT1_PORT PORTD
#define INT1_BIT 3

#define OC1B_PORT PORTD
#define OC1B_BIT 4

#define OC1A_PORT PORTD
#define OC1A_BIT 5

#define ICP_PORT PORTD
#define ICP_BIT 6

#define OC2_PORT PORTD
#define OC2_BIT 7


