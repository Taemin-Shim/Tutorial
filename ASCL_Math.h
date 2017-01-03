/*
 * ASCL_Math.h
 *
 *  Created on: 2013. 10. 20.
 *      Author: ASCL
 */

#ifndef ASCL_MATH_H_
#define ASCL_MATH_H_

#define pi 3.1415926536
/*
long double asinh(long double value);
long double acosh(long double value);
long double atanh(long double value);
long double acoth(long double value);
long double acsch(long double value);
long double asech(long double value);
*/
void LLH2ECEF(long double *LLH, float *ECEF);					// Function to convert from LLH(Latitude, Longitude, Height) to ECEF (Earth-centered, Earth-fixed).
void ECEF2ENU(float *bsECEF, float *uvECEF, float *result);		// Function to convert from ECEF (Earth-centered, Earth-fixed) to ENU (East, North, Up(Height)).
void LLH2ENU(long double *LLHo, long double *LLHt, float *ENU);	// Function to convert from LLH(Latitude, Longitude, Height) to ENU (East, North, Up(Height)).
void DcmB2I(float *attitude, float *body, float *inertial);		// Function to convert from Body frame coordinates to Inertial frame coordinates.
void DcmI2B(float *attitude, float *inertial, float *body);		// Function to convert from Inertial frame coordinates to Body frame coordinates.

long double AngCvt(unsigned short flag, long double angle);


#endif /* ASCL_MATH_H_ */
