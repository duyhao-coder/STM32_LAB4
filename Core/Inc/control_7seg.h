/*
 * control_7seg.h
 *
 *  Created on: Sep 25, 2024
 *      Author: Duy
 */

#ifndef INC_CONTROL_7SEG_H_
#define INC_CONTROL_7SEG_H_
#include "global.h"
void update_buffer_1();
void update_buffer_2();
void update_buffer_3();

void display7SEG_1(int num);
void display7SEG_2(int num);
void update_led7_2_1(int index);
void update_led7_2_2(int index);
void update_led7_2_3(int index);
void update_led7_1_1(int index);
void update_led7_1_2(int index);
void update_led7_1_3(int index);



#endif /* INC_CONTROL_7SEG_H_ */
