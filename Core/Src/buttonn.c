/*
 * buttonn.c
 *
 *  Created on: Sep 27, 2024
 *      Author: Duy
 */

#include "button.h"
#include "main.h"
int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int timerForKeyPress = 100;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int button1_pressed = 0;
int button2_pressed = 0;
int button3_pressed = 0;


int isButton1Pressed()
{
	if(button1_flag == 1)
	{
		button1_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton2Pressed()
{
	if(button2_flag == 1)
	{
		button2_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton3Pressed()
{
	if(button3_flag == 1)
	{
		button3_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton1LongPressed(){
	if(button1_pressed == 1){
		button1_pressed = 0;
		return 1;
	}
	else return 0;
}
int isButton2LongPressed(){
	if(button2_pressed == 1){
		button2_pressed = 0;
		return 1;
	}
	else return 0;
}
int isButton3LongPressed(){
	if(button3_pressed == 1){
		button3_pressed = 0;
		return 1;
	}
	else return 0;
}

void getKeyInput()
{
	for(int i = 0; i < 3; i++){
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		if(i == 0){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; // update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button1_flag = 1;
						timerForKeyPress = 100;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							//TODO
							button1_flag = 1;
							button1_pressed = 1;
							timerForKeyPress = 100;
						}
					}
				}
			}
		}
		if(i == 1){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; // update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						//TODO
						button2_flag = 1;
						timerForKeyPress = 100;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							//TODO
							button2_flag = 1;
							button2_pressed = 1;
							timerForKeyPress = 100;
						}
					}
				}
			}
		}
		if(i == 2){
			keyReg2[i] = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i]; //update for keyReg3
					if(keyReg2[i] == PRESSED_STATE)
					{
						button3_flag = 1;
						timerForKeyPress = 100;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
							button3_flag = 1;
							button3_pressed = 1;
							timerForKeyPress = 100;
						}
					}
				}
			}
		}
	}
}
