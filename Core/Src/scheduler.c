
/*
 * scheduler.c
 *
 *  Created on: Nov 30, 2024
 *      Author: Duy
 */

//#include "scheduler.h"
//
//SCH_Task tasks[SCH_TASKNUMBER];
//static void SCH_UpdateTasksche_flag(SCH_Task *task) {
//    if (task->Delay == 0) {
//        task->sche_flag = 1;
//    }
//}
//static void SCH_InitializeTask(SCH_Task *task, void (*pTask)(void), uint8_t TaskID, uint32_t Delay, uint32_t Period) {
//    task->pTask = pTask;
//    task->TaskID = TaskID;
//    task->Delay = Delay;
//    task->Period = Period;
//    task->sche_flag = (Delay == 0) ? 1 : 0; // Set sche_flag if Delay is zero
//}
//
//
//
//void SCH_Init(void) {
//    for (uint8_t i = 0; i < SCH_TASKNUMBER; i++) {
//        SCH_InitializeTask(&tasks[i], 0, SCH_TASKNUMBER - i, 0, 0);
//    }
//}
//
//void SCH_Update(void) {
//    if (tasks[0].pTask == 0) return;
//
//    if (tasks[0].Delay > FLAG) {
//        tasks[0].Delay -= FLAG;
//    } else {
//        tasks[0].Delay = 0;
//    }
//    if (tasks[0].Delay == 0) {
//    	tasks[0].sche_flag = 1;
//    }
//
//}
//
//void SCH_Dispatch_Tasks(void) {
//    if (tasks[0].sche_flag == 0) return;
//
//    (*tasks[0].pTask)();
//    if (tasks[0].Period > 0) {
//        SCH_Burden();
//    } else {
//        SCH_Delete_Task(tasks[0].TaskID);
//    }
//}
//
//uint8_t SCH_Add_Task (void (*pTask)(void), uint32_t Delay, uint32_t Period) {
//    if (tasks[SCH_TASKNUMBER - 1].pTask != 0) return 0; // No space for new task
//
//    uint8_t currentID = tasks[SCH_TASKNUMBER - 1].TaskID;
//    uint32_t currentDelay = 0;
//
//    for (uint8_t i = 0; i < SCH_TASKNUMBER; i++) {
//        currentDelay += tasks[i].Delay;
//
//        if (currentDelay > Delay || tasks[i].pTask == 0) {
//            // Shift tasks to make space for the new task
//            for (uint8_t j = SCH_TASKNUMBER - 1; j > i; j--) {
//                tasks[j] = tasks[j - 1];
//            }
//
//            // Set the new task
//            SCH_InitializeTask(&tasks[i], pTask, currentID,
//                               (currentDelay > Delay) ? (tasks[i + 1].Delay - (currentDelay - Delay)) : (Delay - currentDelay),
//                               Period);
//
//            // Update Delays for surrounding tasks
//            if (currentDelay > Delay) {
//                tasks[i + 1].Delay -= tasks[i].Delay;
//                SCH_UpdateTasksche_flag(&tasks[i + 1]);
//            }
//
//            return tasks[i].TaskID;
//        }
//    }
//    return 0;
//}
//
//unsigned char SCH_Delete_Task(uint8_t TaskID) {
//    for (uint8_t i = 0; i < SCH_TASKNUMBER; i++) {
//        if (tasks[i].pTask == 0) return 0; // No task found
//
//        if (tasks[i].TaskID == TaskID) {
//            if (tasks[i + 1].pTask != 0) {
//                tasks[i + 1].Delay += tasks[i].Delay; // Adjust Delay of next task
//            }
//
//            // Shift tasks to fill the gap
//            for (uint8_t j = i; j < SCH_TASKNUMBER - 1; j++) {
//                tasks[j] = tasks[j + 1];
//            }
//
//            SCH_InitializeTask(&tasks[SCH_TASKNUMBER - 1], 0, tasks[SCH_TASKNUMBER - 1].TaskID, 0, 0);
//            return tasks[SCH_TASKNUMBER - 1].pTask == 0;
//        }
//    }
//    return 0;
//}
//
//unsigned char SCH_Burden(void) {
//    if (tasks[0].pTask == 0) return 0;
//
//    SCH_Task currentTask = tasks[0];
//    uint32_t currentDelay = 0;
//
//    for (uint8_t i = 0; i < SCH_TASKNUMBER; i++) {
//        if (i + 1 == SCH_TASKNUMBER || tasks[i + 1].pTask == NULL) {
//            SCH_InitializeTask(&tasks[i], currentTask.pTask, currentTask.TaskID,
//                               currentTask.Period - currentDelay, currentTask.Period);
//            return 1;
//        }
//
//        currentDelay += tasks[i + 1].Delay;
//        if (currentDelay > currentTask.Period) {
//            tasks[i].pTask = currentTask.pTask;
//            tasks[i].TaskID = currentTask.TaskID;
//            tasks[i].Period = currentTask.Period;
//            tasks[i].sche_flag = 0;
//
//            int newDelay = currentDelay - currentTask.Period;
//            tasks[i].Delay = tasks[i + 1].Delay - newDelay;
//            SCH_UpdateTasksche_flag(&tasks[i]);
//            tasks[i + 1].Delay -= tasks[i].Delay;
//            SCH_UpdateTasksche_flag(&tasks[i + 1]);
//            return 1;
//        } else {
//            tasks[i] = tasks[i + 1]; // Shift task up
//        }
//    }
//    return 0;
//}
#include "scheduler.h"

unsigned char current_index_task = 0;

unsigned char SCH_Delete_Task(const unsigned char TASK_INDEX){
	unsigned char Return_code ;
	SCH_tasks_G [TASK_INDEX].pTask = 0x0000 ;
	SCH_tasks_G [TASK_INDEX].Delay = 0;
	SCH_tasks_G [TASK_INDEX].Period = 0;
	SCH_tasks_G [TASK_INDEX].RunMe = 0;
	current_index_task--;
	return Return_code ; // return status
}
void SCH_Init(void){
	unsigned char i ;
	for(i = 0; i < current_index_task; i++){
		SCH_Delete_Task(i);
	}
}
void SCH_Add_Task( void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD){
	if(current_index_task < SCH_MAX_TASKS){

		SCH_tasks_G[current_index_task].pTask = pFunction;
		SCH_tasks_G[current_index_task].Delay = DELAY;
		SCH_tasks_G[current_index_task].Period = PERIOD;
		SCH_tasks_G[current_index_task].RunMe = 0;

		SCH_tasks_G[current_index_task].TaskID = current_index_task;

		current_index_task++;
	}
}

void SCH_Update(void){
	for(int i = 0; i < current_index_task; i++){
		if (SCH_tasks_G[i].Delay > 0){
			SCH_tasks_G[i].Delay --;
		}else{
			SCH_tasks_G[i].Delay = SCH_tasks_G[i].Period;
			SCH_tasks_G[i].RunMe += 1;
		}
	}
}

void SCH_Dispatch_Tasks(void){
	for(int i = 0; i < current_index_task; i++){
		if(i == 3){// one-shot task
			if(SCH_tasks_G[i].RunMe > 0){
				SCH_tasks_G[i].RunMe--;
				(*SCH_tasks_G[i].pTask)();
				SCH_Delete_Task(i);
			}
			//delete task out of SCH_tasks_G
		}
		else{
			if(SCH_tasks_G[i].RunMe > 0){
				SCH_tasks_G[i].RunMe--;
				(*SCH_tasks_G[i].pTask)();
			}
		}
	}
}
