/*
 * ASCL_guidance_para.h
 *
 *  Created on: 2013. 11. 11.
 *      Author: Wooyoung
 */

#ifndef ASCL_GUIDANCE_PARA_H_
#define ASCL_GUIDANCE_PARA_H_

#include "ASCL_Define.h"		//star4u

void Init_Guidance(struct guidanceData *p_guidance);
void Guidance(struct navData nav, struct servoData servo, struct guidanceData *p_guidance);

#endif /* ASCL_GUIDANCE_PARA_H_ */
