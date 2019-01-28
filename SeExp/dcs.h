#include<stdio.h>

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

extern void FORCE_L_B_POL_TIME_INDEPENDENT_binary(
	kcg_bool I1_status,
	kcg_bool I1_value,
	kcg_bool I2_status,
	kcg_bool I2_value,
	kcg_int SIGN,
	kcg_bool O1_status,
	kcg_bool O1_value
);

extern void Vote_2_4_RA_BIN_TIME_INDEPENDENT(
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
);


extern void FSF_POL_TIME_INDEPENDENT_binary(
	kcg_bool I1_status,
	kcg_bool I1_value,
	kcg_bool I2_status,
	kcg_bool I2_value,
	kcg_bool O1_status,
	kcg_bool O1_value
);

