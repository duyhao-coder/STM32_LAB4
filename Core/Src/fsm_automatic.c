/*
 * fsm_automatic.c
 *
 *  Created on: Sep 25, 2024
 *      Author: Duy
 */
#include "fsm_automatic.h"
//void fsm_OFFautomaticRun1()
//{
//	switch(status___1)
//	{
//	case next_fsm_automaticRun:
//	fsm_automaticRun();
//	break;
//
//
//
//	}
//
//}
void fsm_automaticRun()
{
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port , LED_GREEN_2_Pin, RESET);
		status=AUTO_RED;
	    setTimer(time_red_2*TIMER_TICKK);
	break;
	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
		if(timer_flag==1)
		{
			status=AUTO_GREEN;
			setTimer(time_green_2*TIMER_TICKK);
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		if(timer_flag==1)
			{
			status=AUTO_YELLOW;
			setTimer(time_yellow_2*TIMER_TICKK);
			}
    break;
	case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
			if(timer_flag==1)
				{
					status=AUTO_RED;
					setTimer(time_red_2*TIMER_TICKK);
				}
    break;
	case off_ledred_2:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
		break;
		case  off_ledyellow_2:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
			break;
		case off_ledgreen_2:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
			break;
	default:
	break;
	}
}


void fsm_automaticRun2()
{
	switch(status_2){
	case INIT_2:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
		status_2=AUTO_GREEN_2;
	    setTimer1(time_green_1*TIMER_TICKK);
	break;

	case AUTO_GREEN_2:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
		if(timer_flag1==1)
			{
			status_2=AUTO_YELLOW_2;
			setTimer1(time_yellow_1*TIMER_TICKK);
			}


    break;
	case AUTO_YELLOW_2:
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
			if(timer_flag1==1)
				{
				status_2=AUTO_RED_2;
					setTimer1(time_red_1*TIMER_TICKK);
				}
    break;
	case AUTO_RED_2:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
		if(timer_flag1==1)
		{
			status_2=AUTO_GREEN_2;
			setTimer1(time_green_1*TIMER_TICKK);
		}
		break;
	case off_ledred_1:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	break;
	case off_ledyellow_1:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
		break;
	case off_ledgreen_1:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
		break;

	default:
	break;
	}
}
//void fsm_OFFautomaticRun2()
//{
//	switch(status___2)
//	{
//	case next_fsm_automaticRun2:
//
//		fsm_automaticRun2();
//
//
//
//
//
//	}
//
//}
