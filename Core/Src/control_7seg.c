/*
 * control_7seg.c
 *
 *  Created on: Sep 25, 2024
 *      Author: Duy
 */
#include "control_7seg.h"





void update_buffer_1() {
    if (counter2_1 < 10) {
        led_buffer_2_1[0] = 0; // Phần chục
        led_buffer_2_1[1] = counter2_1; // Phần đơn vị
    } if (counter2_1 >= 10) {
        led_buffer_2_1[0] = counter2_1 / 10; // Phần chục
        led_buffer_2_1[1] = counter2_1 % 10; // Phần đơn vị
    }
    if (counter1_1 < 10) {
         led_buffer_1_1[0] = 0; // Phần chục
         led_buffer_1_1[1] = counter1_1; // Phần đơn vị
     } if (counter1_1 >= 10) {
    	 led_buffer_1_1[0] = counter1_1 / 10; // Phần chục
    	 led_buffer_1_1[1] = counter1_1 % 10; // Phần đơn vị
     }
}
void update_buffer_2(){
    if (counter2_2 < 10) {
         led_buffer_2_2[0] = 0; // Phần chục
         led_buffer_2_2[1] = counter2_2; // Phần đơn vị
     }  if (counter2_2 >= 10) {
         led_buffer_2_2[0] = counter2_2 / 10; // Phần chục
         led_buffer_2_2[1] = counter2_2 % 10; // Phần đơn vị
     }
     if (counter1_2 < 10) {
            led_buffer_1_2[0] = 0; // Phần chục
            led_buffer_1_2[1] = counter1_2; // Phần đơn vị
        }  if (counter1_2 >= 10) {
        	led_buffer_1_2[0] = counter1_2 / 10; // Phần chục
        	led_buffer_1_2[1] = counter1_2 % 10; // Phần đơn vị
        }
}
void update_buffer_3(){

     if (counter2_3 < 10) {
          led_buffer_2_3[0] = 0; // Phần chục
          led_buffer_2_3[1] = counter2_3; // Phần đơn vị
      }  if (counter2_3 >= 10) {
          led_buffer_2_3[0] = counter2_3 / 10; // Phần chục
          led_buffer_2_3[1] = counter2_3 % 10; // Phần đơn vị
      }
      if (counter1_3 < 10) {
             led_buffer_1_3[0] = 0; // Phần chục
             led_buffer_1_3[1] = counter1_3; // Phần đơn vị
         }  if (counter1_3 >= 10) {
        	 led_buffer_1_3[0] = counter1_3 / 10; // Phần chục
        	 led_buffer_1_3[1] = counter1_3 % 10; // Phần đơn vị
         }
}

void update_led7_1_1(int index)
{
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG_1(led_buffer_1_1[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG_1(led_buffer_1_1[1]);
		break;
	default:
		break;
	}
}
void update_led7_1_2(int index)
{
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG_1(led_buffer_1_2[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG_1(led_buffer_1_2[1]);
		break;
	default:
		break;
	}
}
void update_led7_1_3(int index)
{
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG_1(led_buffer_1_3[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG_1(led_buffer_1_3[1]);
		break;
	default:
		break;
	}
}


void update_led7_2_2(int index)
{
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG_2(led_buffer_2_2[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG_2(led_buffer_2_2[1]);
	default:
		break;
	}
}
void update_led7_2_1(int index)
{
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG_2(led_buffer_2_1[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG_2(led_buffer_2_1[1]);
	default:
		break;
	}
}
void update_led7_2_3(int index)
{
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG_2(led_buffer_2_3[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG_2(led_buffer_2_3[1]);
	default:
		break;
	}
}


void display7SEG_1(int num)
{
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_SET);
		break;
	case 1:


		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_SET);
		break;

	case 2:

		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	case 3:


		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	case 4:

		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	case 5:

		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	case 6:

		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	case 7:


		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_SET);
		break;

	case 8:

		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	case 9:

		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, GPIO_PIN_RESET);
		break;

	}
}
void display7SEG_2(int num)
{
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_SET);
		break;
	case 1:


		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_SET);
		break;

	case 2:

		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	case 3:


		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	case 4:

		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	case 5:

		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	case 6:

		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	case 7:


		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_SET);
		break;

	case 8:

		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	case 9:

		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, GPIO_PIN_RESET);
		break;

	}
}

