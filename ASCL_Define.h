/*
 * ASCL_Define.h
 *
 *  Created on: 2013. 10. 19.
 *      Author: ASCL
 */

#ifndef ASCL_DEFINE_H_
#define ASCL_DEFINE_H_

#define UART2 COMA
#define UART3 COMB
#define UART4 COMC
#define UART5 COMD

#define FROM 0
#define TO	1

//#define dt 	0.0020			// interrupt dt (sec)
#define dt_ctrl 0.02		// control dt (sec)
//#define period (dt*1000000) // interrupt dt in (usec)
//#define	wpNo	21

//#define MODEM_RXBUF_LENGTH	256
//#define MODEM_TXBUF_LENGTH	186	// for telemetry 1.2 and 1.4

//#define OVS_RXBUF_LENGTH 64 // for UTRC experiment
//#define OVS_SEN_LENGTH   7  // for UTRC experiment

#define NUM_GAIN 3	  // the number of control gains

#define NUM_RCPWM 4   // the number of rc pwm ports (from rc controller)
#define NUM_FCCPWM 3 // the number of fcc pwm ports (to servo)

struct navData
{
	// from sensor or filter
	float time;
	unsigned char time_of_week[8];
	unsigned short week_number;
	long double llh_target[3];
	float euler[3];
	float vNed[3];
	float vUvw[3];
	float acc[3];
	float pqr[3];
	long double llh[3];
	float llh_gps[3];
	unsigned char status;
	unsigned char NumSats;
	unsigned char GpsFix;
	unsigned short status_ori;
	float delta_v[7];
};

struct servoData
{
	// from rc controller
	unsigned short scMode, scModeOld;   // Servo Controller Mode(0:Fail-safe, 1:Manual, 2:Auto)
	unsigned short bootUp;
	unsigned short autoChangeFlag;
	unsigned short rcPwm[NUM_RCPWM];
	unsigned int rcPwmErrCount;

	// to servo ports
	unsigned short fccPwm[NUM_FCCPWM];
};

struct guidanceData
{
	// from GCS
	float gcsCmd;

	// shared data
	unsigned short warmupFlag;
	float uavNorth, uavEast;
	unsigned short guidanceMode;

	// to controller
	float guidanceCmd;
};

struct controllerData
{
	float controlGain[NUM_GAIN];
	float headingCmd;
	long double integ_num;
};

#define  pi       	3.1415926536
#define  d2r      	0.01745329252
#define  r2d      	57.2957795129

typedef union
{
	unsigned long in;		// 32 bit integer
	float out;				// 32 bit float
} floatUnion;

typedef union
{
	unsigned long in[2];	// 32 bit integer
	long double out;		// 64 bit float
} doubleUnion;


#endif /* ASCL_DEFINE_H_ */
