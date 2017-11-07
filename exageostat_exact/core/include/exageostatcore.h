/**
 *
 * Copyright (c) 2017, King Abdullah University of Science and Technology
 * All rights reserved.
 *
 * ExaGeoStat is a software package provided by KAUST
 **/
/**
 *
 * @file exageostatcore.h
 *
 * Core functions header file.
 *
 * @version 0.1.0
 *
 * @author Sameh Abdulah
 * @date 2017-11-07
 *
 **/
#ifndef _EXAGEOSTATCORE_H_
#define _EXAGEOSTATCORE_H_
#include "../../../misc/include/MLE_misc.h"

void core_dcmg (double * A, int m, int n, int m0, int n0, location * l1, location* l2, double * localtheta, int distance_metric);
double core_dmdet (double * A, int m, int n, int m0, int n0);
void core_dzcpy(double * Z,  int m, int m0, double *r);
double core_ddotp(double * Z, double *dotproduct,int n);

#endif
