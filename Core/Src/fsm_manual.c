/*
 * fsm_manual.c
 *
 *  Created on: Sep 28, 2024
 *      Author: Duy
 */
#include "fsm_manual.h"



void fsm_control_system(){
switch(status_control_system)
  	{
  	case Normal_set:
  		status_control_system=SET1;
  		break;
  	case SET1:
  		 if(isButton1Pressed()==1)
  		{
  			status_control_system=SET2;
  		}

  		break;
  	case SET2: //led_red

		  status=off_ledred_2;
		  status_2=off_ledred_1;
		  status_7seg2=stop_led_red2;
		  status_7seg1=stop_led_red1;
		  if(co_led_red_2==1)
		  {
			  counter2_1=5;
			  co_led_red_2=0;
		  }
		  if(co_led_red_1==1)
		  {
			  counter1_1=5;
			  co_led_red_1=0;
		  }
		  if(isButton2Pressed()==1)
		  {
			  time_red_2++;
			  time_red_1++;
			  counter2_1++;
			  counter1_1++;
			  counter2_1_temp=counter2_1;
			  counter1_1_temp=counter1_1;
		  }
		 if(isButton3Pressed()==1)
		 {
			time_red_1 =time_red_1_save;
			 time_red_2=time_red_2_save;
			 counter2_1=5;
			 counter1_1=5;
			 counter2_1_temp=5;
			 counter1_1_temp=5;
		 }


  		 if(isButton1Pressed()==1)
  		{
  			status_control_system=SET3;
  		}

  		break;
  	case SET3: //led_green
		  status=off_ledgreen_2;
		  status_2=off_ledgreen_1;
		  status_7seg2=stop_led_green2;
		  status_7seg1=stop_led_green1;
		  if(co_led_green_2==1)
		  {
			  counter2_2=3;
			  co_led_green_2=0;
		  }
		  if(co_led_green_1==1)
		  {
			  counter1_2=3;
			  co_led_green_1=0;
		  }
		  if(isButton2Pressed()==1)
		  		  {
		  			  time_green_2++;
		  			  time_green_1++;
					  counter2_2++;
					  counter1_2++;
					  counter2_2_temp=counter2_2;
					  counter1_2_temp=counter1_2;


		  		  }
		  		 if(isButton3Pressed()==1)
		  		 {
		  			 time_green_1=time_green_1_save;
		  			 time_green_2=time_green_2_save;
					 counter2_2=3;
					 counter1_2=3;
					 counter2_2_temp=3;
					 counter1_2_temp=3;
		  		 }
			 if(isButton1Pressed()==1)
	  		{
	  			status_control_system=SET4;
	  		}

  		break;
  	case SET4: //led_yellow
		  status=off_ledyellow_2;
		  status_2=off_ledyellow_1;
		  status_7seg2=stop_led_yellow2;
		  status_7seg1=stop_led_yellow1;
		  if(co_led_yellow_2==1)
		  {
			  counter2_3=2;
			  co_led_yellow_2=0;
		  }
		  if(co_led_yellow_1==1)
			  {
			  counter1_3=2;
				  co_led_yellow_1=0;
			  }
		  if(isButton2Pressed()==1)
			  		  {
			  			  time_yellow_2++;
			  			  time_yellow_1++;
						  counter2_3++;
						  counter1_3++;
						  counter2_3_temp=counter2_3;
						  counter1_3_temp=counter1_3;

			  		  }
			  		 if(isButton3Pressed()==1)
			  		 {
			  			 time_yellow_1=time_yellow_1_save;
			  			 time_yellow_2=time_yellow_2_save;
						 counter2_3=2;
						 counter1_3=2;
						 counter1_3_temp=2;
						 counter2_3_temp=2;
			  		 }
  		if(isButton1Pressed()==1)
  		{
  			status_control_system=Normal_set;
  				    status=INIT;
  			  	    status_2=INIT_2;
  			  		status_7seg2=led7seg2_red;
  			  		status_7seg1=led7seg1_green;
  		}

		  break;

  	}


}
