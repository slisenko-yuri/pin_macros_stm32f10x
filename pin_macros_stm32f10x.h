/*-----------------------------------------------------------------------------
 *	pin_macros_stm32f10x.h  (STM32F10x)
 *-----------------------------------------------------------------------------
 *
 * Автор:  Слисенко Юрий
 *
 * Описание: Библиотека макросов для работы с портами микроконтроллеров
 *
 * STM32F10x
 *
 * Создана на основе библиотеки макросов для микроконтроллеров AVR 
 *
 * (файл pin_macros.h, автор Александр Редчук)
 *-----------------------------------------------------------------------------
 */


#ifndef PIN_MACROS_STM32F10X_H
#define PIN_MACROS_STM32F10X_H

//#include "stm32f10x.h"


/*
// Режимы, используемые в макросах для настройки вывода порта:
///////////////////////////////////////////////////////////////////////////////

- OUTPP: Выход Push-pull (активный выход);
- OUTOD: Выход Open-drain (выход с открытым стоком);
- OUTAFPP: Выход Push-pull для альтернативной функции;
- OUTAFOD: Выход Open-drain для альтернативной функции;
- IN: Вход цифровой (без подтяжки или с подтяжкой pull-up/pull-down);
- ANALOG: Аналоговый порт
*/

/*
// Параметры, используемые в макросах для настройки вывода порта:
///////////////////////////////////////////////////////////////////////////////

- LS: Низкая скорость переключения (Low Speed).
- MS: Средняя скорость переключения (Medium Speed);
- HS: Высокая скорость переключения (High Speed);
- NOPULL: Без подтяжки (input floating);
- PULLUP: Подтяжка вверх (pull-up);
- PULLDOWN: Подтяжка вниз (pull-down);
- NONE: Пустой параметр.
*/


/*
Примеры:




// Описание вывода порта
///////////////////////////////////////////////////////////////////////////////

#define	PIN1	A,10,L	// Порт GPIOA, разряд 10, активный уровень L (низкий)
#define	PIN2	B,2,H	// Порт GPIOB, разряд 2, активный уровень H (высокий)




// Настройка вывода порта
///////////////////////////////////////////////////////////////////////////////

DRIVER(PIN1, OUTPP, HS);	// Настройка PIN1 в качестве выхода push-pull
				// с высокой скоростью переключения (High Speed).


DRIVER(PIN1, OUTOD, LS);	// Настройка PIN1 в качестве выхода open-drain
				// с низкой скоростью переключения (Low Speed).


DRIVER(PIN1, OUTAFPP, MS);	// Настройка PIN1 в качестве выхода push-pull
				// для альтернативной функции со средней скоростью
				// переключения (Medium Speed).


DRIVER(PIN1, OUTAFOD, MS);	// Настройка PIN1 в качестве выхода open-drain
				// для альтернативной функции со средней скоростью
				// переключения (Medium Speed).


DRIVER(PIN2, IN, NOPULL);	// Настройка PIN2 в качестве цифрового входа
				// без подтяжки (input floating)


DRIVER(PIN2, IN, PULLUP);	// Настройка PIN2 в качестве цифрового входа
				// с подтяжкой "вверх"


DRIVER(PIN2, IN, PULLDOWN);	// Настройка PIN2 в качестве цифрового входа
				// с подтяжкой "вниз"


DRIVER(PIN2, IN,);	// Настройка PIN2 в качестве цифрового входа с подтяжкой
			// без указания вида подтяжки.
			// Запятая после слова IN - обязательна.
			// ПРИМЕЧАНИЕ: Для управления подтяжкой в этом случае
			// можно использовать макрос PULL(PIN2, PULLUP) или
			// PULL(PIN2, PULLDOWN).
					
PULL(PIN2, PULLUP);	// На входе PIN2 установить подтяжку "вверх"

PULL(PIN2, PULLDOWN);	// На входе PIN2 установить подтяжку "вниз"


DRIVER(PIN2, ANALOG, NONE);	// Настройка PIN2 в качестве аналогового порта
DRIVER(PIN2, ANALOG,); 		// Настройка PIN2 в качестве аналогового порта
				// Запятая после слова ANALOG - обязательна



// Управление выходом порта
///////////////////////////////////////////////////////////////////////////////

ON(PIN1);		// Установить активный уровень на выходе порта 


OFF(PIN1);		// Установить пассивный (противоположный активному) уровень на
			// выходе порта

SET(PIN1);		// Установить высокий уровень на выходе порта


CLR(PIN1);		// Установить низкий уровень на выходе порта


CPL(PIN1);		// Инвертировать уровень на выходе порта
TOGGLE(PIN1);		// Инвертировать уровень на выходе порта


if (LATCH(PIN1)) {}	// Истинно, если на выходе порта установлен
			// активный уровень (в регистре GPIOx_ODR)

if (LATCH_H(PIN1)) {}	// Истинно, если на выходе порта установлен
			// высокий уровень (в регистре GPIOx_ODR)

if (LATCH_L(PIN1)) {}	// Истинно, если на выходе порта установлен
			// низкий уровень (в регистре GPIOx_ODR)



// Чтение входа порта
///////////////////////////////////////////////////////////////////////////////

if (ACTIVE(PIN2)) {}	// Истинно, если на входе порта присутствует активный
			// уровень сигнала (в регистре GPIOx_IDR)

if (PIN_H(PIN2)) {}	// Истинно, если на входе порта присутствует высокий
			// уровень сигнала (в регистре GPIOx_IDR)

if (PIN_H(PIN2)) {}	// Истинно, если на входе порта присутствует высокий
			// уровень сигнала (в регистре GPIOx_IDR)

*/



#define	LH0	L
#define	LH1	L
#define	LH2	L
#define	LH3	L
#define	LH4	L
#define	LH5	L
#define	LH6	L
#define	LH7	L
#define	LH8	H
#define	LH9	H
#define	LH10	H
#define	LH11	H
#define	LH12	H
#define	LH13	H
#define	LH14	H
#define	LH15	H



#define _PM_BITNUM(port,bit,val)	(bit)
#define BITNUM(pin)			_PM_BITNUM(pin)
#define BITMASK(pin)			(1U << _PM_BITNUM(pin))




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
#define	_PM_PULLUP(port,bit,LHn)	(GPIO##port->BSRR = GPIO_BSRR_BS##bit)

// PULLDOWN (pull-down)
#define	_PM_PULLDOWN(port,bit,LHn)	(GPIO##port->BRR = GPIO_BRR_BR##bit)

// ANALOG
#define	_PM_ANALOG(port,bit,LHn)\
	(GPIO##port->CR##LHn &= ~(GPIO_CR##LHn##_CNF##bit | GPIO_CR##LHn##_MODE##bit))

// ANALOG, NONE
#define	_PM_ANALOGNONE(port,bit,LHn)	_PM_ANALOG(port,bit,LHn)




#define	_PM_DRIVER2(port,bit,val,mode,param,LHn)	_PM_##mode##param(port,bit,LHn)
#define	_PM_DRIVER(port,bit,val,mode,param)		_PM_DRIVER2(port,bit,val,mode,param,LH##bit)
#define	_PM_PULL(port,bit,val,param)			_PM_##param(port,bit,LHn)




///////////////////////////////////////////////////////////////////////////////
// mode: OUTPP, OUTOD, OUTAFPP, OUTAFOD, IN, ANALOG
// param: LS, MS, HS, PULLUP, PULLDOWN, NONE
#define	DRIVER(pin,mode,param)		_PM_DRIVER(pin,mode,param)
#define	PULL(pin,param)			_PM_PULL(pin,param)
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
#define SET(pin)			_PM_SETH(pin)
#define CLR(pin)			_PM_SETL(pin)
#define ON(pin)				_PM_SET(pin)
#define OFF(pin)			_PM_CLR(pin)
#define CPL(pin)			_PM_CPL(pin)
#define TOGGLE(pin)			_PM_CPL(pin)
///////////////////////////////////////////////////////////////////////////////




#define _PM_PINH(port,bit,dummy)	(GPIO##port->IDR & GPIO_IDR_IDR##bit)
#define _PM_PINL(port,bit,dummy)	!_PM_PINH(port,bit,dummy)
#define _PM_PIN(port,bit,val)		_PM_PIN##val(port,bit,dummy)
#define _PM_LATCHH(port,bit,dummy)	(GPIO##port->ODR & GPIO_ODR_ODR##bit)
#define _PM_LATCHL(port,bit,dummy)	!_PM_LATCHH(port,bit,dummy)
#define _PM_LATCH(port,bit,val)		_PM_LATCH##val(port,bit,dummy)




///////////////////////////////////////////////////////////////////////////////
#define ACTIVE(pin)			_PM_PIN(pin)
#define PIN_H(pin)			_PM_PINH(pin)
#define PIN_L(pin)			_PM_PINL(pin)
#define	LATCH_H(pin)			_PM_LATCHH(pin)
#define	LATCH_L(pin)			_PM_LATCHL(pin)
#define LATCH(pin)			_PM_LATCH(pin)
///////////////////////////////////////////////////////////////////////////////

#endif
