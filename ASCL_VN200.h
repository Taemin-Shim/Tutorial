/*
 * ASCL_VN200.h
 *
 *  Created on: 2013. 3. 12.
 *      Author: Wooyoung Jung
 */

#ifndef ASCL_VN200_H_
#define ASCL_VN200_H_

void Init_VN200(struct navData *p_nav, int *gFileDesc); 
void Read_VN200(char *buff, struct navData *p_nav, int byte_len, int *gFileDesc, int *Read_flag);

#endif /* ASCL_VN200_H_ */
