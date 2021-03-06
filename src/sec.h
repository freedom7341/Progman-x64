/****************************** Module Header ******************************\
* Module Name: winlogon.h
*
* Copyright (c) 1991, Microsoft Corporation
*
* Main header file for winlogon
*
* History:
* 12-09-91 Davidc       Created.
\***************************************************************************/


#ifndef RC_INVOKED
// #include <nt.h>
// #include <ntrtl.h>
// #include <nturtl.h>
#endif

#include <windows.h>
// #include <winuserp.h>

//
// Include individual module header files
//
#include "secdesc.h"
#include "security.h"
#include "util.h"

// NTSTATUS definitions
#define STATUS_SUCCESS                          ((NTSTATUS)0x00000000L) // ntsubauth
#define STATUS_BUFFER_TOO_SMALL          ((NTSTATUS)0xC0000023L)

