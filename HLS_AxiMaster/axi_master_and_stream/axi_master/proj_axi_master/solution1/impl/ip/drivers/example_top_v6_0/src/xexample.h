// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.1
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XEXAMPLE_H
#define XEXAMPLE_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xexample_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Myaxil_BaseAddress;
} XExample_Config;
#endif

typedef struct {
    u32 Myaxil_BaseAddress;
    u32 IsReady;
} XExample;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XExample_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XExample_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XExample_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XExample_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XExample_Initialize(XExample *InstancePtr, u16 DeviceId);
XExample_Config* XExample_LookupConfig(u16 DeviceId);
int XExample_CfgInitialize(XExample *InstancePtr, XExample_Config *ConfigPtr);
#else
int XExample_Initialize(XExample *InstancePtr, const char* InstanceName);
int XExample_Release(XExample *InstancePtr);
#endif


void XExample_SetByte_wroffset(XExample *InstancePtr, u32 Data);
u32 XExample_GetByte_wroffset(XExample *InstancePtr);
void XExample_SetCtrl_reg(XExample *InstancePtr, u32 Data);
u32 XExample_GetCtrl_reg(XExample *InstancePtr);
u32 XExample_GetStatus_reg(XExample *InstancePtr);
u32 XExample_GetStatus_regVld(XExample *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
