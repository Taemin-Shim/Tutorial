/*
 * ASCL_controller_para.h
 *
 *  Created on: 2013. 11. 11.
 *      Author: Wooyoung
 */

#ifndef ASCL_CONTROLLER_PARA_H_
#define ASCL_CONTROLLER_PARA_H_

#include "ASCL_Define.h"		//star4u

void Init_Controller(struct controllerData *p_controller);
void Controller(struct navData nav, struct guidanceData guidance, struct servoData *p_servo, struct controllerData *p_controller);

#endif /* ASCL_CONTROLLER_PARA_H_ */
