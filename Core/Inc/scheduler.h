/*
 * scheduler.h
 *
 *  Created on: Nov 30, 2024
 *      Author: Duy
 */

//#ifndef INC_SCHEDULER_H_
//#define INC_SCHEDULER_H_
//
//#include <stdint.h>
//#include <stdio.h>
//#include "main.h"
//
//#define SCH_TASKNUMBER 20
//#define FLAG 10
//
//typedef struct {
//    void (*pTask)(void);
//    uint8_t TaskID;
//    uint32_t Delay;
//    uint32_t Period;
//    unsigned char sche_flag;
//} SCH_Task;
//
//void SCH_Init(void);
//void SCH_Update(void);
//void SCH_Dispatch_Tasks(void);
//
//uint8_t SCH_Add_Task (void (*pTask)(void), uint32_t Delay, uint32_t 	);
//unsigned char SCH_Delete_Task(uint8_t TaskID);
//unsigned char SCH_Burden(void);
//
//
//#endif /* INC_SCHEDULER_H_ */
#include "main.h"
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#define SCH_MAX_TASKS	40
#define NO_TASK_ID		0

typedef struct{
	// Pointer to the task (must be a ’ void ( void ) ’ function )
	void(*pTask)(void);
	// Delay (ticks) until the function will (next) be run
	uint32_t Delay;
	// Interval (ticks) between subsequent runs .
	uint32_t Period;
	// Incremented (by scheduler) when task i s due to execute
	uint8_t RunMe;
	uint32_t TaskID;
} sTask ;

sTask SCH_tasks_G [SCH_MAX_TASKS ] ;
extern unsigned char current_index_task;

unsigned char SCH_Delete_Task(const unsigned char TASK_INDEX);
void SCH_Init(void);
void SCH_Add_Task (void(*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);

#endif /* INC_SCHEDULER_H_ */
