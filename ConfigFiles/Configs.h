#pragma once
#ifndef _CONFIGS_H_
#define _CONFIGS_H_
#ifdef _cplusplus
extern "C" {
#endif

	/*Get the Configuration options*/
	int GetConfigItem(char *pFileName, char *pKey);
	/*Write the Configuration options*/
	int WriteConfigItem(char *pFileName,char *pItemName, char *pValue);


#ifdef _cplusplus
}
#endif
#endif


