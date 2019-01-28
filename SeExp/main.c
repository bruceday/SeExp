#include<stdio.h>
//#include"dcs.h"
#include "klee/klee.h"

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

void FORCE_L_B_POL_TIME_INDEPENDENT_binary(
	kcg_bool I1_status,
	kcg_bool I1_value,
	kcg_bool I2_status,
	kcg_bool I2_value,
	kcg_int SIGN,
	kcg_bool O1_status,
	kcg_bool O1_value
)
{
	switch (SIGN)
	{
	case 1:
		O1_value = I1_value;
		O1_status = I2_status;
		break;
	case 2:
		O1_value = I2_value;
		O1_status = I1_status;
		break;
	case 3:
		O1_status = I2_status;
		O1_value = I2_value;
	default:
		O1_status = I1_status;
		O1_value = I1_value;
		break;
	}
}

int main()
{	
	kcg_bool I1_status;
	kcg_bool I1_value;
	kcg_bool I2_status;
	kcg_bool I2_value;
	kcg_int SIGN;
	kcg_bool O1_status;
	kcg_bool O1_value;
	klee_make_symbolic(&I1_status, sizeof(I1_status), "I1_status");
	klee_make_symbolic(&I1_value, sizeof(I1_value), "I1_value");
	klee_make_symbolic(&I2_status, sizeof(I2_status), "I2_status");
	klee_make_symbolic(&I2_value, sizeof(I2_value), "I2_value");
	klee_make_symbolic(&SIGN, sizeof(SIGN), "SIGN");
	klee_make_symbolic(&O1_status, sizeof(O1_status), "O1_status");
	klee_make_symbolic(&O1_value, sizeof(O1_value), "O1_value");
	FORCE_L_B_POL_TIME_INDEPENDENT_binary(
		I1_status,
		I1_value,
		I2_status,
		I2_value,
		SIGN,
		O1_status,
		O1_value
	);
	return 0;
}