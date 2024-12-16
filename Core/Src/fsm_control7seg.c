/*
 * fsm_control7seg.c
 *
 *  Created on: Sep 25, 2024
 *      Author: Duy
 */

#include "fsm_control7seg.h"
void fsm_7seg2()
{
	switch(status_7seg2){
	case led7seg2_red:
		co_led_red_2=1;
		co_led_green_2=1;
		co_led_yellow_2=1;
        if(timer_flag3==1)
        {
        	counter2_1--;
    		update_buffer_1();
        	if(counter2_1==0)
        	{
        		counter2_1=counter2_1_temp;
        		status_7seg2=led7seg2_green;

        	}
    		setTimer3(TIMER_TICKK);

        }
		if(timer_flag4==1)
		{

			if(index_led>=2) {index_led=0;}
			update_led7_2_1(index_led++);
			setTimer4(80);
		}
	      break;

	case led7seg2_green:
		co_led_red_2=1;
		co_led_green_2=1;
		co_led_yellow_2=1;
		if(timer_flag3==1)
		{
			counter2_2--;
			update_buffer_2();
			if(counter2_2==0)
			{
				counter2_2=counter2_2_temp;
				status_7seg2=led7seg2_yellow;
			}
			setTimer3(TIMER_TICKK);


		}
		if(timer_flag4==1)
		{
			if(index_led>=2) {index_led=0;}
			update_led7_2_2(index_led++);
			setTimer4(80);
		}
	      break;
	case led7seg2_yellow:
		co_led_red_2=1;
		co_led_green_2=1;
		co_led_yellow_2=1;
		if(timer_flag3==1)
		{
			counter2_3--;
			update_buffer_3();
			if(counter2_3==0)
			{
				counter2_3=counter2_3_temp;
				status_7seg2=led7seg2_red;
			}
			setTimer3(TIMER_TICKK);

		}
		if(timer_flag4==1)
		{
			if(index_led>=2) {index_led=0;}
			update_led7_2_3(index_led++);
			setTimer4(80);
		}
	      break;
	 case stop_led_red2:
		 if(timer_flag3==1)
		         {
		     		update_buffer_1();
		     		setTimer3(TIMER_TICKK);

		         }
		 		if(timer_flag4==1)
		 		{

		 			if(index_led>=2) {index_led=0;}
		 			update_led7_2_1(index_led++);
		 			setTimer4(80);
		 		}
		 	break;
	 case stop_led_green2:
		 if(timer_flag3==1)
		 		{
		 			update_buffer_2();
		 			setTimer3(TIMER_TICKK);
		 		}
		 		if(timer_flag4==1)
		 		{
		 			if(index_led>=2) {index_led=0;}
		 			update_led7_2_2(index_led++);
		 			setTimer4(80);
		 		}
		 	      break;
	 case stop_led_yellow2:
		 if(timer_flag3==1)
		 		{
		 			update_buffer_3();
		 			setTimer3(TIMER_TICKK);
		 		}
		 		if(timer_flag4==1)
		 		{
		 			if(index_led>=2) {index_led=0;}
		 			update_led7_2_3(index_led++);
		 			setTimer4(80);
		 		}
		 	      break;

	default:
		break;
	}
}
void fsm_7seg1()
{
	switch(status_7seg1){
	case led7seg1_green:
		co_led_red_1=1;
		co_led_green_1=1;
		co_led_yellow_1=1;
		if(timer_flag_7seg2==1)
		{
			counter1_2--;
			update_buffer_2();
			if(counter1_2==0)
			{
				counter1_2=counter1_2_temp;
				status_7seg1=led7seg1_yellow;
			}
			setTimer2(TIMER_TICKK);
		}
		if(timer_flag5==1)
		{
			if(index_led1>=2) index_led1=0;
			update_led7_1_2(index_led1++);
			setTimer5(80);
		}
	      break;
	case led7seg1_yellow:
		co_led_red_1=1;
		co_led_green_1=1;
		co_led_yellow_1=1;
		if(timer_flag_7seg2==1)
				{
					counter1_3--;
					update_buffer_3();
					if(counter1_3==0)
							{
								counter1_3=counter1_3_temp;
								status_7seg1=led7seg1_red;
							}
					setTimer2(TIMER_TICKK);
				}
		if(timer_flag5==1)
		{
			if(index_led1>=2) index_led1=0;
			update_led7_1_3(index_led1++);
			setTimer5(80);
		}
	      break;
	case led7seg1_red:
		co_led_red_1=1;
		co_led_green_1=1;
		co_led_yellow_1=1;
		if(timer_flag_7seg2==1)
		{
			counter1_1--;
			update_buffer_1();
			if(counter1_1==0)
			{
				counter1_1=counter1_1_temp;
				status_7seg1=led7seg1_green;
			}
			setTimer2(TIMER_TICKK);
		}
		if(timer_flag5==1)
		{
			if(index_led1>=2) index_led1=0;
			update_led7_1_1(index_led1++);
			setTimer5(80);
		}
	      break;
	case stop_led_red1:
		if(timer_flag_7seg2==1)
				{
					update_buffer_1();

					setTimer2(TIMER_TICKK);
				}
				if(timer_flag5==1)
				{
					if(index_led1>=2) index_led1=0;
					update_led7_1_1(index_led1++);
					setTimer5(80);
				}
			      break;
	case stop_led_yellow1:
		if(timer_flag_7seg2==1)
				{
					update_buffer_3();
					setTimer2(TIMER_TICKK);
				}
		if(timer_flag5==1)
		{
			if(index_led1>=2) index_led1=0;
			update_led7_1_3(index_led1++);
			setTimer5(80);
		}
	      break;
	case stop_led_green1:
		if(timer_flag_7seg2==1)
		{
			update_buffer_2();
			setTimer2(TIMER_TICKK);
		}
		if(timer_flag5==1)
		{
			if(index_led1>=2) index_led1=0;
			update_led7_1_2(index_led1++);
			setTimer5(80);
		}
	      break;
	default:
		break;
	}
}
