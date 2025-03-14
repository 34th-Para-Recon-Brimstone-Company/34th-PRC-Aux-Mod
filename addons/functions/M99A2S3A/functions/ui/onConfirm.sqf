#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst onConfirm.sqf] "

//Save the value
_display = (_this select 0) select 0;

_enteredValue = parseNumber (ctrlText 101);

[ace_player,_enteredValue] call MACRO_FNC_NAME(airburst_set_fuse_distance);

closeDialog 10846;
