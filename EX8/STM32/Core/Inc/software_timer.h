/*
 * software_timer.h
 *
 *  Created on: Oct 9, 2022
 *      Author: tuanb
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;

void setTimer0 (int duration);
void setTimer1 (int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
