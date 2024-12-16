/*
 * global.h
 *
 *  Created on: Sep 25, 2024
 *      Author: Duy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "button.h"
#include "sofware_timer.h"
#include "control_7seg.h"
#include "fsm_automatic.h"
#include "fsm_control7seg.h"
#define INIT 1
#define AUTO_RED 2
#define AUTO_GREEN 3
#define AUTO_YELLOW 4
#define next_fsm_automaticRun 100
#define off_ledred_2 101
#define off_ledyellow_2 102
#define off_ledgreen_2 103
#define Normal_set 12
#define SET1   13
#define SET2   14
#define SET3   15
#define SET4   16
#define INIT_2 5
#define AUTO_GREEN_2 6
#define AUTO_YELLOW_2 7
#define AUTO_RED_2 8
#define next_fsm_automaticRun2 100
#define off_ledred_1 101
#define off_ledyellow_1 102
#define off_ledgreen_1 103

#define INIT_CONTROL7SEG 10
#define AUTO_RED_7SEG1   11
#define AUTO_GREEN_7SEG1 12
#define AUTO_YELLOW_7SEG1 13


#define led7seg2_red 1
#define led7seg2_green 2
#define led7seg2_yellow 3
#define stop_led_red2 4
#define stop_led_yellow2 5
#define stop_led_green2 6




#define led7seg1_green 1
#define led7seg1_yellow 2
#define led7seg1_red 3
#define stop_led_red1 4
#define stop_led_yellow1 5
#define stop_led_green1 6



extern int TIMER_TICKK ;
extern int status_control_system;
extern int status;
extern int status_2;
extern int status_7seg1;
extern int status_7seg2;
extern int counter2_1_temp ;
extern int counter2_2_temp;
extern int counter2_3_temp;
extern int counter1_1_temp;
extern int counter1_2_temp;
extern int counter1_3_temp;
extern int counter2_1 ;
extern int counter2_2;
extern int counter2_3;
extern int counter1_1 ;
extern int counter1_2;
extern int counter1_3;
extern int index_led;
extern int index_led1;
extern int co_led_red_2;
extern int co_led_green_2;
extern int co_led_yellow_2;
extern int co_led_red_1;
extern int co_led_green_1;
extern int co_led_yellow_1;
extern  int led_buffer_2_1[2];
extern  int led_buffer_2_2[2];
extern  int led_buffer_2_3[2];
extern  int led_buffer_1_1[2];
extern  int led_buffer_1_2[2];
extern  int led_buffer_1_3[2];
extern int max_led;
extern int time_red_2;
extern int time_red_2_save;
extern int time_yellow_2_save;
extern int time_green_2_save;
extern int time_red_1_save;
extern int time_yellow_1_save;
extern int time_green_1_save;
extern int time_yellow_2;
extern int time_green_2;
extern int time_red_1;
extern int time_yellow_1;
extern int time_green_1;


#endif /* INC_GLOBAL_H_ */
