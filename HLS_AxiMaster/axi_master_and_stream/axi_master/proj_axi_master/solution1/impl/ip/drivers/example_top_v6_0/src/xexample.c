// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.1
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xexample.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XExample_CfgInitialize(XExample *InstancePtr, XExample_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Myaxil_BaseAddress = ConfigPtr->Myaxil_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XExample_SetByte_wroffset(XExample *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XExample_WriteReg(InstancePtr->Myaxil_BaseAddress, XEXAMPLE_MYAXIL_ADDR_BYTE_WROFFSET_DATA, Data);
}

u32 XExample_GetByte_wroffset(XExample *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XExample_ReadReg(InstancePtr->Myaxil_BaseAddress, XEXAMPLE_MYAXIL_ADDR_BYTE_WROFFSET_DATA);
    return Data;
}

void XExample_SetCtrl_reg(XExample *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XExample_WriteReg(InstancePtr->Myaxil_BaseAddress, XEXAMPLE_MYAXIL_ADDR_CTRL_REG_DATA, Data);
}

u32 XExample_GetCtrl_reg(XExample *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XExample_ReadReg(InstancePtr->Myaxil_BaseAddress, XEXAMPLE_MYAXIL_ADDR_CTRL_REG_DATA);
    return Data;
}

u32 XExample_GetStatus_reg(XExample *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XExample_ReadReg(InstancePtr->Myaxil_BaseAddress, XEXAMPLE_MYAXIL_ADDR_STATUS_REG_DATA);
    return Data;
}

u32 XExample_GetStatus_regVld(XExample *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XExample_ReadReg(InstancePtr->Myaxil_BaseAddress, XEXAMPLE_MYAXIL_ADDR_STATUS_REG_CTRL);
    return Data & 0x1;
}

