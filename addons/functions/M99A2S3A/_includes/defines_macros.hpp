// ============================================================================== Configuration

	#define MACRO_AUTHOR "3thPRC Modding Team"
	#define MACRO_MODNAME 34thPRC
	#define MACRO_MODNAME_SCRIPT aux_34thPRC
	#define MACRO_MOD_DISPLAY_TAG [34th]

// ============================================================================== End Configuration

// ============================================================================== Macro Functions
	#define MACRO_QUOTE(toQuote) #toQuote

	#define MACRO_QUOTE_SINGLE(toQuote) '##toQuote##'

	#define MACRO_UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2

	#define MACRO_PATCH_NAME(component) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,MACRO_UNDERSCORE_CONCAT(patch,component))

	#define MACRO_FNC_NAME(title) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,fnc),title)
	#define MACRO_VAR_NAME(varName) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,var),varName)
	#define MACRO_EVENT_NAME(varName) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,event),varName)
	#define MACRO_CLASSNAME(NAME) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,NAME)

	// Script logging
		#define MACRO_DIAG_LOG "----- 34thPRC scripting log: %1 -----"
		#define MACRO_SCRIPT "[definitions.hpp]"
// ============================================================================== End Macro Functions

// ============================================================================== Macro Constants

	#define MACRO_RPT_LOG "===34th PRC FUNCTION ERROR==="
// ============================================================================== End Macro Constants
