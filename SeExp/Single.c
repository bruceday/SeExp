#include<stdio.h>
//#include "klee/klee.h"

#define NO_FAULT 0
#define FAULT 1
#define FOURTH_INPUT 4
#define THIRD_INPUT 3
#define FIRST_INPUT 1
#define NO_INPUT 0
#define SECOND_INPUT 2
#define kcg_bool int
#define kcg_int int
#define VALUE_1 1
#define VALUE_0 0


void Vote_2_4_RA_BIN_TIME_INDEPENDENT_Se(
	kcg_bool I1_status,
	kcg_bool I1_value,
	kcg_bool I2_status,
	kcg_bool I2_value,
	kcg_bool I3_status,
	kcg_bool I3_value,
	kcg_bool I4_status,
	kcg_bool I4_value,
	kcg_bool O1_status,
	kcg_bool O1_value
)
{
	kcg_bool tmp;
	kcg_int Local_number_NV;
	kcg_int Local_number_NF;

	kcg_bool _L90_I1_status;
	kcg_bool _L90_I1_value;
	kcg_bool _L90_I2_status;
	kcg_bool _L90_I2_value;
	kcg_bool _L90_I3_status;
	kcg_bool _L90_I3_value;

	kcg_bool _L82_I1_status;
	kcg_bool _L82_I1_value;
	kcg_bool _L82_I2_status;
	kcg_bool _L82_I2_value;
	kcg_bool _L82_I3_status;
	kcg_bool _L82_I3_value;

	kcg_bool _L81_I1_status;
	kcg_bool _L81_I1_value;
	kcg_bool _L81_I2_status;
	kcg_bool _L81_I2_value;
	kcg_bool _L81_I3_status;
	kcg_bool _L81_I3_value;

	kcg_bool _L64_I1_status;
	kcg_bool _L64_I1_value;
	kcg_bool _L64_I2_status;
	kcg_bool _L64_I2_value;
	kcg_bool _L64_I3_status;
	kcg_bool _L64_I3_value;

	kcg_bool _L306;
	kcg_bool _L281;
	kcg_bool _L249;
	kcg_bool _L246;
	kcg_bool _L213;
	kcg_bool _L190;
	kcg_bool _L180;
	kcg_bool _L368;
	kcg_bool _L348;
	kcg_bool _L332;

	O1_status = NO_FAULT;

	_L82_I1_status = I1_status;
	_L82_I1_value = I1_value;
	_L82_I2_status = I2_status;
	_L82_I2_value = I2_value;
	_L82_I3_status = I3_status;
	_L82_I3_value = I3_value;

	_L90_I1_status = I1_status;
	_L90_I1_value = I1_value;
	_L90_I2_status = I2_status;
	_L90_I2_value = I2_value;
	_L90_I3_status = I4_status;
	_L90_I3_value = I4_value;

	_L64_I1_status = I1_status;
	_L64_I1_value = I1_value;
	_L64_I2_status = I3_status;
	_L64_I2_value = I3_value;
	_L64_I3_status = I4_status;
	_L64_I3_value = I4_value;

	_L368 = !I3_status;
	_L332 = !I1_status;
	tmp = !I2_status;
	_L348 = !I4_status;
	if (_L332&tmp&_L368&_L348) {
		Local_number_NF = FOURTH_INPUT;
	}
	else if ((I1_status&tmp&_L368&_L348) | (_L332&_L368&_L348&I2_status) | (_L332&tmp&_L348*I3_status) | (_L332&tmp&_L368&I4_status)) {
		Local_number_NF = THIRD_INPUT;
	}
	else if ((I1_status&I4_status&I3_status&tmp) | (_L332&I2_status&I3_status&I4_status) | (_L368&I1_status&I2_status&I4_status) | (_L348&I1_status&I2_status&I3_status)) {
		Local_number_NF = FIRST_INPUT;
	}
	else if (I1_status&I2_status&I3_status&I4_status) {
		Local_number_NF = NO_INPUT;
	}
	else {
		Local_number_NF = SECOND_INPUT;
	}
	switch (Local_number_NF)
	{
	case 2:
		if (I1_status&I2_status) {
			_L81_I1_status = I3_status;
			_L81_I1_value = I3_value;
			_L81_I2_status = I4_status;
			_L81_I2_value = I4_value;
			_L81_I3_status = I1_status;
			_L81_I3_value = I1_value;
		}
		else if (I1_status&I3_status) {
			_L81_I1_status = I2_status;
			_L81_I1_value = I2_value;
			_L81_I2_status = I4_status;
			_L81_I2_value = I4_value;
			_L81_I3_status = I1_status;
			_L81_I3_value = I1_value;
		}
		else if (I1_status&I4_status) {
			_L81_I1_status = I2_status;
			_L81_I1_value = I2_value;
			_L81_I2_status = I3_status;
			_L81_I2_value = I3_value;
			_L81_I3_status = I1_status;
			_L81_I3_value = I1_value;
		}
		else if (I2_status&I3_status) {
			_L81_I1_status = I1_status;
			_L81_I1_value = I1_value;
			_L81_I2_status = I4_status;
			_L81_I2_value = I4_value;
			_L81_I3_status = I3_status;
			_L81_I3_value = I3_value;
		}
		else if (I2_status&I4_status) {
			_L81_I1_status = _L64_I1_status;
			_L81_I1_value = _L64_I1_value;
			_L81_I2_status = _L64_I2_status;
			_L81_I2_value = _L64_I2_value;
			_L81_I3_status = _L64_I3_status;
			_L81_I3_value = _L64_I3_value;
		}
		else {
			_L81_I1_status = _L90_I1_status;
			_L81_I1_value = _L90_I1_value;
			_L81_I2_status = _L90_I2_status;
			_L81_I2_value = _L90_I2_value;
			_L81_I3_status = _L90_I3_status;
			_L81_I3_value = _L90_I3_value;
		}
		break;
	case 3:
		if (I1_status) {
			_L81_I1_status = I2_status;
			_L81_I1_value = I2_value;
			_L81_I2_status = I3_status;
			_L81_I2_value = I3_value;
			_L81_I3_status = I4_status;
			_L81_I3_value = I4_value;
		}
		else if (I2_status) {
			_L81_I1_status = _L64_I1_status;
			_L81_I1_value = _L64_I1_value;
			_L81_I2_status = _L64_I2_status;
			_L81_I2_value = _L64_I2_value;
			_L81_I3_status = _L64_I3_status;
			_L81_I3_value = _L64_I3_value;
		}
		else if (I3_status) {
			_L81_I1_status = _L90_I1_status;
			_L81_I1_value = _L90_I1_value;
			_L81_I2_status = _L90_I2_status;
			_L81_I2_value = _L90_I2_value;
			_L81_I3_status = _L90_I3_status;
			_L81_I3_value = _L90_I3_value;
		}
		else {
			_L81_I1_status = _L82_I1_status;
			_L81_I1_value = _L82_I1_value;
			_L81_I2_status = _L82_I2_status;
			_L81_I2_value = _L82_I2_value;
			_L81_I3_status = _L82_I3_status;
			_L81_I3_value = _L82_I3_value;
		}
		break;
	case 1:
		_L81_I1_status = _L64_I1_status;
		_L81_I1_value = _L64_I1_value;
		_L81_I2_status = _L64_I2_status;
		_L81_I2_value = _L64_I2_value;
		_L81_I3_status = _L64_I3_status;
		_L81_I3_value = _L64_I3_value;
		break;
	case 4:
		_L81_I1_status = _L64_I1_status;
		_L81_I1_value = _L64_I1_value;
		_L81_I2_status = _L64_I2_status;
		_L81_I2_value = _L64_I2_value;
		_L81_I3_status = _L64_I3_status;
		_L81_I3_value = _L64_I3_value;
		break;
	case 0:
		_L81_I1_status = _L64_I1_status;
		_L81_I1_value = _L64_I1_value;
		_L81_I2_status = _L64_I2_status;
		_L81_I2_value = _L64_I2_value;
		_L81_I3_status = _L64_I3_status;
		_L81_I3_value = _L64_I3_value;
		break;
	default:
		_L81_I1_status = _L64_I1_status;
		_L81_I1_value = _L64_I1_value;
		_L81_I2_status = _L64_I2_status;
		_L81_I2_value = _L64_I2_value;
		_L81_I3_status = _L64_I3_status;
		_L81_I3_value = _L64_I3_value;
		break;
	}

	_L306 = !_L81_I3_value;
	_L281 = !I1_value;
	_L249 = !I4_value;
	_L246 = !_L81_I1_value;
	_L213 = !I2_value;
	_L190 = !_L81_I2_value;
	_L180 = !I3_value;
	if (Local_number_NF == FIRST_INPUT) {
		if ((_L332&I1_value) | (tmp&I2_value) | (_L368&I3_value) |
			(_L348&I4_value)) {
			Local_number_NV = FIRST_INPUT;
		}
		else
		{
			Local_number_NV = NO_FAULT;
		}
	}
	else if (Local_number_NF == SECOND_INPUT) {
		if (_L81_I1_value&_L81_I2_value) {
			Local_number_NV = SECOND_INPUT;
		}
		else if (_L81_I1_value | _L81_I2_value)
		{
			Local_number_NV = FIRST_INPUT;
		}
		else
		{
			Local_number_NV = NO_INPUT;
		}
	}
	else if (Local_number_NF == THIRD_INPUT) {
		if (_L81_I1_value&_L81_I2_value&_L81_I3_value) {
			Local_number_NV = THIRD_INPUT;
		}
		else if ((_L246&_L81_I2_value&_L81_I3_value) | (_L81_I1_value&_L190&_L81_I3_value) | (_L81_I1_value&_L306&_L81_I2_value))
		{
			Local_number_NV = SECOND_INPUT;
		}
		else if (_L246&_L190&_L306) {
			Local_number_NV = NO_INPUT;
		}
		else
		{
			Local_number_NV = FIRST_INPUT;
		}
	}
	else if (Local_number_NF == FOURTH_INPUT)
	{
		if (_L281&_L213&_L180&_L249) {
			Local_number_NV = NO_INPUT;
		}
		else if (I1_value&I2_value&I3_value&I4_value)
		{
			Local_number_NV = FOURTH_INPUT;
		}
		else if ((_L281&I2_value&I4_value&I3_value) | (I1_value&I4_value&_L213&I3_value) | (I1_value&I2_value&_L180&I4_value) | (I1_value&I2_value&I3_value&_L249))
		{
			Local_number_NV = THIRD_INPUT;
		}
		else if ((_L213&_L180&_L249&I1_value) | (_L281&_L180&_L249&I2_value) | (_L281&_L213&_L249&I3_value) | (_L281&_L213&_L180&I4_value)) {
			Local_number_NV = FIRST_INPUT;
		}
		else
		{
			Local_number_NV = SECOND_INPUT;
		}
	}
	else
	{
		Local_number_NV = NO_INPUT;
	}
	switch (Local_number_NF)
	{
	case 1:
		switch (Local_number_NV)
		{
		case 1:
			O1_value = VALUE_1;
			break;
		case 0:
			O1_value = VALUE_1;
			break;
		default:
			O1_value = VALUE_0;
			break;
		}
		break;
	case 2:
		switch (Local_number_NV)
		{
		case 1:
			O1_value = VALUE_1;
			break;
		case 2:
			O1_value = VALUE_1;
			break;
		case 0:
			O1_value = VALUE_0;
			break;
		default:
			O1_value = VALUE_0;
			break;
		}
		break;
	case 3:
		switch (Local_number_NV)
		{
		case 3:
			O1_value = VALUE_1;
			break;
		case 2:
			O1_value = VALUE_1;
			break;
		case 1:
			O1_value = VALUE_0;
			break;
		case 0:
			O1_value = VALUE_0;
			break;
		default:
			O1_value = VALUE_0;
			break;
		}
		break;
	case 4:
		switch (Local_number_NV)
		{
		case 4:
			O1_value = VALUE_1;
			break;
		case 3:
			O1_value = VALUE_1;
			break;
		case 2:
			O1_value = VALUE_1;
			break;
		case 1:
			O1_value = VALUE_0;
			break;
		case 0:
			O1_value = VALUE_0;
			break;
		default:
			O1_value = VALUE_0;
			break;
		}
		break;
	case 0:
		O1_value = VALUE_1;
		break;
	default:
		O1_value = VALUE_0;
		break;
	}
}



void Single(
	kcg_bool N0RRPF010AX31B03_status,
	kcg_bool N0RRPF010AX31B03_value,
	kcg_bool N0RRPF010AX13B03_status,
	kcg_bool N0RRPF010AX13B03_value,
	kcg_bool N0RRPF010AX23B03_status,
	kcg_bool N0RRPF010AX23B03_value,
	kcg_bool N0RRPF010AX43B03_status,
	kcg_bool N0RRPF010AX43B03_value,
	kcg_bool N0RRP186KS3_status,
	kcg_bool N0RRP186KS3_value
)
{
	Vote_2_4_RA_BIN_TIME_INDEPENDENT_Se(
		N0RRPF010AX31B03_status,
		N0RRPF010AX31B03_value,
		N0RRPF010AX13B03_status,
		N0RRPF010AX13B03_value,
		N0RRPF010AX23B03_status,
		N0RRPF010AX23B03_value,
		N0RRPF010AX43B03_status,
		N0RRPF010AX43B03_value,
		N0RRP186KS3_status,
		N0RRP186KS3_value
	);
}

//void main()
//{
//	kcg_bool TFMS001B01_1_force_status;
//	kcg_bool TFMS001B01_1_force_value;
//	kcg_bool TFMS001B01_status;
//	kcg_bool TFMS001B01_value;
//	kcg_bool N0RRPF010AX13B01_status;
//	kcg_bool N0RRPF010AX13B01_value;
//	kcg_bool N0RRPF010AX23B01_status;
//	kcg_bool N0RRPF010AX23B01_value;
//	kcg_bool N0RRPF010AX43B01_status;
//	kcg_bool N0RRPF010AX43B01_value;
//	kcg_bool TFMS002B01_1_force_status;
//	kcg_bool TFMS002B01_1_force_value;
//	kcg_bool TFMS002B01_status;
//	kcg_bool TFMS002B01_value;
//	kcg_bool N0RRPF010AX13B02_status;
//	kcg_bool N0RRPF010AX13B02_value;
//	kcg_bool N0RRPF010AX23B02_status;
//	kcg_bool N0RRPF010AX23B02_value;
//	kcg_bool N0RRPF010AX43B02_status;
//	kcg_bool N0RRPF010AX43B02_value;
//	kcg_bool TFMS003B01_1_force_status;
//	kcg_bool TFMS003B01_1_force_value;
//	kcg_bool TFMS003B01_status;
//	kcg_bool TFMS003B01_value;
//	kcg_bool RRPF010AB01_2_force_status;
//	kcg_bool RRPF010AB01_2_force_value;
//	kcg_bool RRPF010AB02_2_force_status;
//	kcg_bool RRPF010AB02_2_force_value;
//	kcg_bool RRPF010AB03_2_force_status;
//	kcg_bool RRPF010AB03_2_force_value;
//	kcg_bool N0RRPF010AX35B01_status;
//	kcg_bool N0RRPF010AX35B01_value;
//	kcg_bool N0RRPF010AX35B02_status;
//	kcg_bool N0RRPF010AX35B02_value;
//	kcg_bool N0RRPF010AX35B03_status;
//	kcg_bool N0RRPF010AX35B03_value;
//	kcg_bool KCS301B01_16_force_status;
//	kcg_bool KCS301B01_16_force_value;
//	kcg_bool KCS301B01_status;
//	kcg_bool KCS301B01_value;
//	kcg_bool TFMS001B01_1_out_status;
//	kcg_bool TFMS001B01_1_out_value;
//	kcg_bool N0RRP176KS3_status;
//	kcg_bool N0RRP176KS3_value;
//	kcg_bool TFMS002B01_1_out_status;
//	kcg_bool TFMS002B01_1_out_value;
//	kcg_bool N0RRP181KS3_status;
//	kcg_bool N0RRP181KS3_value;
//	kcg_bool TFMS003B01_1_out_status;
//	kcg_bool TFMS003B01_1_out_value;
//	kcg_bool N0RRP186KS3_status;
//	kcg_bool N0RRP186KS3_value;
//	kcg_bool RRPF010AB01_2_out_status;
//	kcg_bool RRPF010AB01_2_out_value;
//	kcg_bool RRPF010AB02_2_out_status;
//	kcg_bool RRPF010AB02_2_out_value;
//	kcg_bool RRPF010AB03_2_out_status;
//	kcg_bool RRPF010AB03_2_out_value;
//	kcg_bool KCS301B01_16_out_status;
//	kcg_bool KCS301B01_16_out_value;
//	kcg_int TFMS001B01_1_b_force;
//	kcg_int TFMS002B01_1_b_force;
//	kcg_int TFMS003B01_1_b_force;
//	kcg_int RRPF010AB01_2_b_force;
//	kcg_int RRPF010AB02_2_b_force;
//	kcg_int RRPF010AB03_2_b_force;
//	kcg_int KCS301B01_16_b_force;
//	klee_make_symbolic(&TFMS001B01_1_force_status, sizeof(TFMS001B01_1_force_status), "TFMS001B01_1_force_status");
//	klee_make_symbolic(&TFMS001B01_1_force_value, sizeof(TFMS001B01_1_force_value), "TFMS001B01_1_force_value");
//	klee_make_symbolic(&TFMS001B01_status, sizeof(TFMS001B01_status), "TFMS001B01_status");
//	klee_make_symbolic(&TFMS001B01_value, sizeof(TFMS001B01_value), "TFMS001B01_value");
//	klee_make_symbolic(&N0RRPF010AX13B01_status, sizeof(N0RRPF010AX13B01_status), "N0RRPF010AX13B01_status");
//	klee_make_symbolic(&N0RRPF010AX13B01_value, sizeof(N0RRPF010AX13B01_value), "N0RRPF010AX13B01_value");
//
//	klee_make_symbolic(&N0RRPF010AX23B01_status, sizeof(N0RRPF010AX23B01_status), "N0RRPF010AX23B01_status");
//	klee_make_symbolic(&N0RRPF010AX23B01_value, sizeof(N0RRPF010AX23B01_value), "N0RRPF010AX23B01_value");
//
//	klee_make_symbolic(&N0RRPF010AX43B01_status, sizeof(N0RRPF010AX43B01_status), "N0RRPF010AX43B01_status");
//	klee_make_symbolic(&N0RRPF010AX43B01_value, sizeof(N0RRPF010AX43B01_value), "N0RRPF010AX43B01_value");
//
//	klee_make_symbolic(&TFMS002B01_1_force_status, sizeof(TFMS002B01_1_force_status), "TFMS002B01_1_force_status");
//	klee_make_symbolic(&TFMS002B01_1_force_value, sizeof(TFMS002B01_1_force_value), "TFMS002B01_1_force_value");
//
//	klee_make_symbolic(&TFMS002B01_status, sizeof(TFMS002B01_status), "TFMS002B01_status");
//	klee_make_symbolic(&TFMS002B01_value, sizeof(TFMS002B01_value), "TFMS002B01_value");
//
//	klee_make_symbolic(&N0RRPF010AX13B02_status, sizeof(N0RRPF010AX13B02_status), "N0RRPF010AX13B02_status");
//	klee_make_symbolic(&N0RRPF010AX13B02_value, sizeof(N0RRPF010AX13B02_value), "N0RRPF010AX13B02_value");
//
//	klee_make_symbolic(&N0RRPF010AX23B02_status, sizeof(N0RRPF010AX23B02_status), "N0RRPF010AX23B02_status");
//	klee_make_symbolic(&N0RRPF010AX23B02_value, sizeof(N0RRPF010AX23B02_value), "N0RRPF010AX23B02_value");
//
//	klee_make_symbolic(&N0RRPF010AX43B02_status, sizeof(N0RRPF010AX43B02_status), "N0RRPF010AX43B02_status");
//	klee_make_symbolic(&N0RRPF010AX43B02_value, sizeof(N0RRPF010AX43B02_value), "N0RRPF010AX43B02_value");
//
//	klee_make_symbolic(&TFMS003B01_1_force_status, sizeof(TFMS003B01_1_force_status), "TFMS003B01_1_force_status");
//	klee_make_symbolic(&TFMS003B01_1_force_value, sizeof(TFMS003B01_1_force_value), "TFMS003B01_1_force_value");
//
//	klee_make_symbolic(&TFMS003B01_status, sizeof(TFMS003B01_status), "TFMS003B01_status");
//	klee_make_symbolic(&TFMS003B01_value, sizeof(TFMS003B01_value), "TFMS003B01_value");
//
//
//	klee_make_symbolic(&RRPF010AB01_2_force_status, sizeof(RRPF010AB01_2_force_status), "RRPF010AB01_2_force_status");
//	klee_make_symbolic(&RRPF010AB01_2_force_value, sizeof(RRPF010AB01_2_force_value), "RRPF010AB01_2_force_value");
//
//	klee_make_symbolic(&RRPF010AB02_2_force_status, sizeof(RRPF010AB02_2_force_status), "RRPF010AB02_2_force_status");
//	klee_make_symbolic(&RRPF010AB02_2_force_value, sizeof(RRPF010AB02_2_force_value), "RRPF010AB02_2_force_value");
//
//	klee_make_symbolic(&RRPF010AB03_2_force_status, sizeof(RRPF010AB03_2_force_status), "RRPF010AB03_2_force_status");
//	klee_make_symbolic(&RRPF010AB03_2_force_value, sizeof(RRPF010AB03_2_force_value), "RRPF010AB03_2_force_value");
//
//	klee_make_symbolic(&N0RRPF010AX35B01_status, sizeof(N0RRPF010AX35B01_status), "N0RRPF010AX35B01_status");
//	klee_make_symbolic(&N0RRPF010AX35B01_value, sizeof(N0RRPF010AX35B01_value), "N0RRPF010AX35B01_value");
//
//	klee_make_symbolic(&N0RRPF010AX35B02_status, sizeof(N0RRPF010AX35B02_status), "N0RRPF010AX35B02_status");
//	klee_make_symbolic(&N0RRPF010AX35B02_value, sizeof(N0RRPF010AX35B02_value), "N0RRPF010AX35B02_value");
//
//	klee_make_symbolic(&N0RRPF010AX35B03_status, sizeof(N0RRPF010AX35B03_status), "N0RRPF010AX35B03_status");
//	klee_make_symbolic(&N0RRPF010AX35B03_value, sizeof(N0RRPF010AX35B03_value), "N0RRPF010AX35B03_value");
//
//	klee_make_symbolic(&KCS301B01_16_force_status, sizeof(KCS301B01_16_force_status), "KCS301B01_16_force_status");
//	klee_make_symbolic(&KCS301B01_16_force_value, sizeof(KCS301B01_16_force_value), "KCS301B01_16_force_value");
//
//	klee_make_symbolic(&KCS301B01_status, sizeof(KCS301B01_status), "KCS301B01_status");
//	klee_make_symbolic(&KCS301B01_value, sizeof(KCS301B01_value), "KCS301B01_value");
//
//	klee_make_symbolic(&TFMS001B01_1_out_status, sizeof(TFMS001B01_1_out_status), "TFMS001B01_1_out_status");
//	klee_make_symbolic(&TFMS001B01_1_out_value, sizeof(TFMS001B01_1_out_value), "TFMS001B01_1_out_value");
//
//	klee_make_symbolic(&N0RRP176KS3_status, sizeof(N0RRP176KS3_status), "N0RRP176KS3_status");
//	klee_make_symbolic(&N0RRP176KS3_value, sizeof(N0RRP176KS3_value), "N0RRP176KS3_value");
//
//	klee_make_symbolic(&TFMS002B01_1_out_status, sizeof(TFMS002B01_1_out_status), "TFMS002B01_1_out_status");
//	klee_make_symbolic(&TFMS002B01_1_out_value, sizeof(TFMS002B01_1_out_value), "TFMS002B01_1_out_value");
//
//	klee_make_symbolic(&N0RRP181KS3_status, sizeof(N0RRP181KS3_status), "N0RRP181KS3_status");
//	klee_make_symbolic(&N0RRP181KS3_value, sizeof(N0RRP181KS3_value), "N0RRP181KS3_value");
//
//	klee_make_symbolic(&TFMS003B01_1_out_status, sizeof(TFMS003B01_1_out_status), "TFMS003B01_1_out_status");
//	klee_make_symbolic(&TFMS003B01_1_out_value, sizeof(TFMS003B01_1_out_value), "TFMS003B01_1_out_value");
//
//	klee_make_symbolic(&N0RRP186KS3_status, sizeof(N0RRP186KS3_status), "N0RRP186KS3_status");
//	klee_make_symbolic(&N0RRP186KS3_value, sizeof(N0RRP186KS3_value), "N0RRP186KS3_value");
//
//	klee_make_symbolic(&RRPF010AB01_2_out_status, sizeof(RRPF010AB01_2_out_status), "RRPF010AB01_2_out_status");
//	klee_make_symbolic(&RRPF010AB01_2_out_value, sizeof(RRPF010AB01_2_out_value), "RRPF010AB01_2_out_value");
//
//	klee_make_symbolic(&RRPF010AB02_2_out_status, sizeof(RRPF010AB02_2_out_status), "RRPF010AB02_2_out_status");
//	klee_make_symbolic(&RRPF010AB02_2_out_value, sizeof(RRPF010AB02_2_out_value), "RRPF010AB02_2_out_value");
//
//	klee_make_symbolic(&RRPF010AB03_2_out_status, sizeof(RRPF010AB03_2_out_status), "RRPF010AB03_2_out_status");
//	klee_make_symbolic(&RRPF010AB03_2_out_value, sizeof(RRPF010AB03_2_out_value), "RRPF010AB03_2_out_value");
//
//	klee_make_symbolic(&KCS301B01_16_out_status, sizeof(KCS301B01_16_out_status), "KCS301B01_16_out_status");
//	klee_make_symbolic(&KCS301B01_16_out_value, sizeof(KCS301B01_16_out_value), "KCS301B01_16_out_value");
//
//	klee_make_symbolic(&TFMS001B01_1_b_force, sizeof(TFMS001B01_1_b_force), "TFMS002B01_1_b_force");
//
//	klee_make_symbolic(&TFMS002B01_1_b_force, sizeof(TFMS002B01_1_b_force), "TFMS002B01_1_b_force");
//
//	klee_make_symbolic(&TFMS003B01_1_b_force, sizeof(TFMS003B01_1_b_force), "TFMS003B01_1_b_force");
//
//	klee_make_symbolic(&RRPF010AB01_2_b_force, sizeof(RRPF010AB01_2_b_force), "RRPF010AB01_2_b_force");
//
//	klee_make_symbolic(&RRPF010AB02_2_b_force, sizeof(RRPF010AB02_2_b_force), "RRPF010AB02_2_b_force");
//
//	klee_make_symbolic(&RRPF010AB03_2_b_force, sizeof(RRPF010AB03_2_b_force), "RRPF010AB03_2_b_force");
//
//	klee_make_symbolic(&KCS301B01_16_b_force, sizeof(KCS301B01_16_b_force), "KCS301B01_16_b_force");
//
//
//
//	SeTest(
//		TFMS001B01_1_force_status,
//		TFMS001B01_1_force_value,
//		TFMS001B01_status,
//		TFMS001B01_value,
//		N0RRPF010AX13B01_status,
//		N0RRPF010AX13B01_value,
//		N0RRPF010AX23B01_status,
//		N0RRPF010AX23B01_value,
//		N0RRPF010AX43B01_status,
//		N0RRPF010AX43B01_value,
//		TFMS002B01_1_force_status,
//		TFMS002B01_1_force_value,
//		TFMS002B01_status,
//		TFMS002B01_value,
//		N0RRPF010AX13B02_status,
//		N0RRPF010AX13B02_value,
//		N0RRPF010AX23B02_status,
//		N0RRPF010AX23B02_value,
//		N0RRPF010AX43B02_status,
//		N0RRPF010AX43B02_value,
//		TFMS003B01_1_force_status,
//		TFMS003B01_1_force_value,
//		TFMS003B01_status,
//		TFMS003B01_value,
//		RRPF010AB01_2_force_status,
//		RRPF010AB01_2_force_value,
//		RRPF010AB02_2_force_status,
//		RRPF010AB02_2_force_value,
//		RRPF010AB03_2_force_status,
//		RRPF010AB03_2_force_value,
//		N0RRPF010AX35B01_status,
//		N0RRPF010AX35B01_value,
//		N0RRPF010AX35B02_status,
//		N0RRPF010AX35B02_value,
//		N0RRPF010AX35B03_status,
//		N0RRPF010AX35B03_value,
//		KCS301B01_16_force_status,
//		KCS301B01_16_force_value,
//		KCS301B01_status,
//		KCS301B01_value,
//		TFMS001B01_1_out_status,
//		TFMS001B01_1_out_value,
//		N0RRP176KS3_status,
//		N0RRP176KS3_value,
//		TFMS002B01_1_out_status,
//		TFMS002B01_1_out_value,
//		N0RRP181KS3_status,
//		N0RRP181KS3_value,
//		TFMS003B01_1_out_status,
//		TFMS003B01_1_out_value,
//		N0RRP186KS3_status,
//		N0RRP186KS3_value,
//		RRPF010AB01_2_out_status,
//		RRPF010AB01_2_out_value,
//		RRPF010AB02_2_out_status,
//		RRPF010AB02_2_out_value,
//		RRPF010AB03_2_out_status,
//		RRPF010AB03_2_out_value,
//		KCS301B01_16_out_status,
//		KCS301B01_16_out_value,
//		TFMS001B01_1_b_force,
//		TFMS002B01_1_b_force,
//		TFMS003B01_1_b_force,
//		RRPF010AB01_2_b_force,
//		RRPF010AB02_2_b_force,
//		RRPF010AB03_2_b_force,
//		KCS301B01_16_b_force);
//}
