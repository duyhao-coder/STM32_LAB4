/*
 * button.h
 *
 *  Created on: Sep 27, 2024
 *      Author: Duy
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButton1Pressed();//if button1 is pressed, return 1, else return 0
int isButton2Pressed();//if button2 is pressed, return 1, else return 0
int isButton3Pressed();//if button3 is pressed, return 1, else return 0

// don't care in this lab
int isButton1LongPressed();//if button1 is long pressed, return 1, else return 0
int isButton2LongPressed();//if button1 is long pressed, return 1, else return 0
int isButton3LongPressed();//if button1 is long pressed, return 1, else return 0





void subKeyProcess();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
