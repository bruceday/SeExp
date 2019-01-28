#include<stdio.h>
#include"dcs.h"
#include "klee/klee.h"

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