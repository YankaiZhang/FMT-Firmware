/*
 * File      : trap.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://openlab.rt-thread.com/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2006-08-25     Bernard      first version
 */

#include <rtthread.h>
#include <rthw.h>

#include "AT91SAM7X256.h"

/**
 * @addtogroup AT91SAM7
 */
/*@{*/

void rt_hw_trap_irq(void)
{
	int irqno;
	extern struct rt_irq_desc irq_desc[];

	/* get interrupt number */
	irqno = AT91C_BASE_AIC->AIC_ISR;

	/* invoke isr with parameters */
	irq_desc[irqno].handler(irqno, irq_desc[irqno].param);

	/* end of interrupt */
	AT91C_BASE_AIC->AIC_EOICR = 0;
}

void rt_hw_trap_fiq(void)
{
	rt_kprintf("fast interrupt request\n");
}

extern struct rt_thread* rt_current_thread;
void rt_hw_trap_abort(void)
{
	rt_kprintf("Abort occured!!! Thread [%s] suspended.\n", rt_current_thread->name);
	rt_thread_suspend(rt_current_thread);
	rt_schedule();

}
/*@}*/