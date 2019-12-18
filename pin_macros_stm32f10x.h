/*-----------------------------------------------------------------------------
 *	pin_macros_stm32f10x.h  (STM32F10x)
 *-----------------------------------------------------------------------------
 *
 * �����:  �������� ����
 *
 * ��������: ���������� �������� ��� ������ � ������� �����������������
 *
 * STM32F10x
 *
 * ������� �� ������ ���������� �������� ��� ����������������� AVR 
 *
 * (���� pin_macros.h, ����� ��������� ������)
 *-----------------------------------------------------------------------------
 */


#ifndef PIN_MACROS_STM32F10X_H
#define PIN_MACROS_STM32F10X_H

//#include "stm32f10x.h"


/*
// ������, ������������ � �������� ��� ��������� ������ �����:
///////////////////////////////////////////////////////////////////////////////

- OUTPP: ����� Push-pull (�������� �����);
- OUTOD: ����� Open-drain (����� � �������� ������);
- OUTAFPP: ����� Push-pull ��� �������������� �������;
- OUTAFOD: ����� Open-drain ��� �������������� �������;
- IN: ���� �������� (��� �������� ��� � ��������� pull-up/pull-down);
- ANALOG: ���������� ����
*/

/*
// ���������, ������������ � �������� ��� ��������� ������ �����:
///////////////////////////////////////////////////////////////////////////////

- LS: ������ �������� ������������ (Low Speed).
- MS: ������� �������� ������������ (Medium Speed);
- HS: ������� �������� ������������ (High Speed);
- NOPULL: ��� �������� (input floating);
- PULLUP: �������� ����� (pull-up);
- PULLDOWN: �������� ���� (pull-down);
- NONE: ������ ��������.
*/


/*
�������:




// �������� ������ �����
///////////////////////////////////////////////////////////////////////////////

#define	PIN1	A,10,L	// ���� GPIOA, ������ 10, �������� ������� L (������)
#define	PIN2	B,2,H	// ���� GPIOB, ������ 2, �������� ������� H (�������)




// ��������� ������ �����
///////////////////////////////////////////////////////////////////////////////

DRIVER(PIN1, OUTPP, HS);	// ��������� PIN1 � �������� ������ push-pull
							// � ������� ��������� ������������ (High Speed).


DRIVER(PIN1, OUTOD, LS);	// ��������� PIN1 � �������� ������ open-drain
							// � ������ ��������� ������������ (Low Speed).


DRIVER(PIN1, OUTAFPP, MS);	// ��������� PIN1 � �������� ������ push-pull
							// ��� �������������� ������� �� ������� ���������
							// ������������ (Medium Speed).


DRIVER(PIN1, OUTAFOD, MS);	// ��������� PIN1 � �������� ������ open-drain
							// ��� �������������� ������� �� ������� ���������
							// ������������ (Medium Speed).


DRIVER(PIN2, IN, NOPULL);	// ��������� PIN2 � �������� ��������� �����
							// ��� �������� (input floating)


DRIVER(PIN2, IN, PULLUP);	// ��������� PIN2 � �������� ��������� �����
							// � ��������� "�����"


DRIVER(PIN2, IN, PULLDOWN);	// ��������� PIN2 � �������� ��������� �����
							// � ��������� "����"


DRIVER(PIN2, IN,);	// ��������� PIN2 � �������� ��������� ����� � ���������
					// ��� �������� ���� ��������.
					// ������� ����� ����� IN - �����������.
					// ����������: ��� ���������� ��������� � ���� ������
					// ����� ������������ ������ PULL(PIN2, PULLUP) ���
					// PULL(PIN2, PULLDOWN).
					
PULL(PIN2, PULLUP);		// �� ����� PIN2 ���������� �������� "�����"

PULL(PIN2, PULLDOWN);	// �� ����� PIN2 ���������� �������� "����"


DRIVER(PIN2, ANALOG, NONE);	// ��������� PIN2 � �������� ����������� �����
DRIVER(PIN2, ANALOG,); 		// ��������� PIN2 � �������� ����������� �����
							// ������� ����� ����� ANALOG - �����������



// ���������� ������� �����
///////////////////////////////////////////////////////////////////////////////

ON(PIN1);		// ���������� �������� ������� �� ������ ����� 


OFF(PIN1);		// ���������� ��������� (��������������� ���������) ������� ��
				// ������ �����

SET(PIN1);		// ���������� ������� ������� �� ������ �����


CLR(PIN1);		// ���������� ������ ������� �� ������ �����


CPL(PIN1);		// ������������� ������� �� ������ �����
TOGGLE(PIN1);	// ������������� ������� �� ������ �����


if (LATCH(PIN1)) {}		// �������, ���� �� ������ ����� ����������
						// �������� ������� (� �������� GPIOx_ODR)

if (LATCH_H(PIN1)) {}	// �������, ���� �� ������ ����� ����������
						// ������� ������� (� �������� GPIOx_ODR)

if (LATCH_L(PIN1)) {}	// �������, ���� �� ������ ����� ����������
						// ������ ������� (� �������� GPIOx_ODR)



// ������ ����� �����
///////////////////////////////////////////////////////////////////////////////

if (ACTIVE(PIN2)) {}	// �������, ���� �� ����� ����� ������������ ��������
						// ������� ������� (� �������� GPIOx_IDR)

if (PIN_H(PIN2)) {}		// �������, ���� �� ����� ����� ������������ �������
						// ������� ������� (� �������� GPIOx_IDR)

if (PIN_H(PIN2)) {}		// �������, ���� �� ����� ����� ������������ �������
						// ������� ������� (� �������� GPIOx_IDR)

*/



#define	LH0		L
#define	LH1		L
#define	LH2		L
#define	LH3		L
#define	LH4		L
#define	LH5		L
#define	LH6		L
#define	LH7		L
#define	LH8		H
#define	LH9		H
#define	LH10	H
#define	LH11	H
#define	LH12	H
#define	LH13	H
#define	LH14	H
#define	LH15	H



#define _PM_BITNUM(port,bit,val)	(bit)
#define BITNUM(x)					_PM_BITNUM(x)
#define BITMASK(x)					(1U<<PM_BITNUM(x))




// OUTPP, LS (Output push-pull, Low speed (2MHz))
#define	_PM_OUTPPLS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_MODE##bit##_1)

// OUTPP, MS (Output push-pull, Medium speed (10MHz))
#define	_PM_OUTPPMS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_MODE##bit##_0)

// OUTPP, HS (Output push-pull, High speed (50MHz))
#define	_PM_OUTPPHS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~GPIO_CR##LHn##_CNF##bit) | GPIO_CR##LHn##_MODE##bit)

// OUTOD, LS (Output open-drain, Low speed (2MHz))
#define	_PM_OUTODLS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_0 | GPIO_CR##LHn##_MODE##bit##_1)

// OUTOD, MS (Output open-drain, Medium speed (10MHz))
#define	_PM_OUTODMS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_0 | GPIO_CR##LHn##_MODE##bit##_0)

// OUTOD, HS (Output open-drain, High speed (50MHz))
#define	_PM_OUTODHS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~GPIO_CR##LHn##_CNF##bit) | GPIO_CR##LHn##_CNF##bit##_0 | GPIO_CR##LHn##_MODE##bit)

// OUTAFPP, LS (Output alternate push-pull, Low speed (2MHz))
#define	_PM_OUTAFPPLS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_1 | GPIO_CR##LHn##_MODE##bit##_1)

// OUTAFPP, MS (Output alternate push-pull, Medium speed (10MHz))
#define	_PM_OUTAFPPMS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_1 | GPIO_CR##LHn##_MODE##bit##_0)

// OUTAFPP, HS (Output alternate push-pull, High speed (50MHz))
#define	_PM_OUTAFPPHS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~GPIO_CR##LHn##_CNF##bit) | GPIO_CR##LHn##_CNF##bit##_1 | GPIO_CR##LHn##_MODE##bit)

// OUTAFOD, LS (Output alternate open-drain, Low speed (2MHz))
#define	_PM_OUTAFODLS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~GPIO_CR##LHn##_MODE##bit) | GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit##_1)

// OUTAFOD, MS (Output alternate open-drain, Medium speed (10MHz))
#define	_PM_OUTAFODMS(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~GPIO_CR##LHn##_MODE##bit) | GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit##_0)

// OUTAFOD, HS (Output alternate open-drain, HighSpeed (50MHz))
#define	_PM_OUTAFODHS(port,bit,LHn)\
	(GPIO##port->CR##LHn = GPIO##port->CR##LHn | GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)

// IN, NOPULL (Input floating)
#define	_PM_INNOPULL(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_0)

// IN, PULLUP (Input pull-up)
#define	_PM_INPULLUP(port,bit,LHn)\
do {\
	GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_1;\
	GPIO##port->BSRR = GPIO_BSRR_BS##bit;\
} while (0)

// IN, PULLDOWN (Input pull-down)
#define	_PM_INPULLDOWN(port,bit,LHn)\
do {\
	GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_1;\
	GPIO##port->BRR = GPIO_BRR_BR##bit;\
} while (0)

// IN (Input pull-up/pull-down)
#define	_PM_IN(port,bit,LHn)\
	(GPIO##port->CR##LHn = (GPIO##port->CR##LHn & ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit)) | GPIO_CR##LHn##_CNF##bit##_1)

// PULLUP (pull-up)
#define	_PM_PULLUP(port,bit,LHn)		(GPIO##port->BSRR = GPIO_BSRR_BS##bit)

// PULLDOWN (pull-down)
#define	_PM_PULLDOWN(port,bit,LHn)		(GPIO##port->BRR = GPIO_BRR_BR##bit)

// ANALOG
#define	_PM_ANALOG(port,bit,LHn)\
	(GPIO##port->CR##LHn &= ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit))

// ANALOG, NONE
#define	_PM_ANALOGNONE(port,bit,LHn)	PM_SETANALOG(port,bit,LHn)




#define	_PM_DRIVER2(port,bit,val,mode,param,LHn)	_PM_##mode##param(port,bit,LHn)
#define	_PM_DRIVER(port,bit,val,mode,param)			_PM_DRIVER2(port,bit,val,mode,param,LH##bit)
#define	_PM_PULL(port,bit,val,param)				_PM_##param(port,bit,LHn)




///////////////////////////////////////////////////////////////////////////////
// mode = OUTPP, OUTOD, OUTAFPP, OUTAFOD, IN, ANALOG
// param = LS, MS, HS, PULLUP, PULLDOWN, NONE
#define	DRIVER(x,mode,param)					_PM_DRIVER(x,mode,param)
#define	PULL(x,param)							_PM_PULL(x,param)
///////////////////////////////////////////////////////////////////////////////




#define _PM_SETL(port,bit,dummy)	(GPIO##port->BRR = GPIO_BRR_BR##bit)
#define _PM_SETH(port,bit,dummy)	(GPIO##port->BSRR = GPIO_BSRR_BS##bit)
#define _PM_SET(port,bit,val)		_PM_SET##val(port,bit,dummy)
#define _PM_CLRL(port,bit,dummy)	_PM_SETH(port,bit,dummy)
#define _PM_CLRH(port,bit,dummy)	_PM_SETL(port,bit,dummy)
#define _PM_CLR(port,bit,val)		_PM_CLR##val(port,bit,dummy)
#define _PM_CPL(port,bit,val)\
do {\
	if (_PM_LATCH(port,bit,val)) _PM_CLR(port,bit,val); else _PM_SET(port,bit,val);\
} while (0)




///////////////////////////////////////////////////////////////////////////////
#define SET(x)						_PM_SETH(x)
#define CLR(x)						_PM_SETL(x)
#define ON(x)						_PM_SET(x)
#define OFF(x)						_PM_CLR(x)
#define CPL(x)						_PM_CPL(x)
#define TOGGLE(x)					_PM_CPL(x)
///////////////////////////////////////////////////////////////////////////////




#define _PM_PINH(port,bit,dummy)	(GPIO##port->IDR & GPIO_IDR_IDR##bit)
#define _PM_PINL(port,bit,dummy)	!_PM_PINH(port,bit,dummy)
#define _PM_PIN(port,bit,val)		_PM_PIN##val(port,bit,dummy)
#define _PM_LATCHH(port,bit,dummy)	(GPIO##port->ODR & GPIO_ODR_ODR##bit)
#define _PM_LATCHL(port,bit,dummy)	!_PM_LATCHH(port,bit,dummy)
#define _PM_LATCH(port,bit,val)		_PM_LATCH##val(port,bit,dummy)




///////////////////////////////////////////////////////////////////////////////
#define ACTIVE(x)					_PM_PIN(x)
#define PIN_H(x)					_PM_PINH(x)
#define PIN_L(x)					_PM_PINL(x)
#define	LATCH_H(x)					_PM_LATCHH(x)
#define	LATCH_L(x)					_PM_LATCHL(x)
#define LATCH(x)					_PM_LATCH(x)
///////////////////////////////////////////////////////////////////////////////

#endif
