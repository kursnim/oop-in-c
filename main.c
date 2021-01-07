#include "Platform_Types.h"
#include <stdio.h>

/* MSG_01_10ms */
typedef struct
{
    uint8 Signal_01;
    uint8 Signal_02;
} tSG_MSG_01_10ms;

typedef struct
{
    tSG_MSG_01_10ms value;
} Rte_DE_tSG_MSG_01_10ms;

typedef struct
{
    Rte_DE_tSG_MSG_01_10ms Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms;
} Rte_tsRB_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms;

/* MSG_02_10ms */

typedef struct
{
    uint8 Signal_03;
    uint8 Signal_04;
} tSG_MSG_02_10ms;

typedef struct
{
    tSG_MSG_02_10ms value;
} Rte_DE_tSG_MSG_02_10ms;

typedef struct
{
    Rte_DE_tSG_MSG_02_10ms Rte_R_PiCCAN_SG_MSG_02_10ms_SG_MSG_02_10ms;
} Rte_tsRB_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms;

/* RTE */
typedef union
{
    Rte_tsRB_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms;
    Rte_tsRB_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms Rte_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms;
} Rte_tuRB_Task_5ms_Core0;

typedef struct
{
    Rte_tuRB_Task_5ms_Core0 Rte_RB;
} Rte_tsTask_5ms_Core0;

Rte_tsTask_5ms_Core0 Rte_Task_5ms_Core0;

void CCAN_R_Get_MSG_01_10ms()
{
}
void CCAN_R_Get_MSG_02_10ms()
{
}

typedef struct
{
    uint8 ApplTypeOfRxAccessInfo;
} Com_RxAccessInfoType;

Com_RxAccessInfoType *Com_RxAccessInfoPtrType;

#define COM_UINT8_APPLTYPEOFRXACCESSINFO 0U
#define COM_UINT16_APPLTYPEOFRXACCESSINFO 2U

const Com_RxAccessInfoType Com_RxAccessInfo[4] = {
    {COM_UINT8_APPLTYPEOFRXACCESSINFO},
    {COM_UINT8_APPLTYPEOFRXACCESSINFO},
    {COM_UINT8_APPLTYPEOFRXACCESSINFO},
    {COM_UINT8_APPLTYPEOFRXACCESSINFO}};

#define Com_GetRxAccessInfoOfPCConfig() Com_RxAccessInfo
#define Com_GetApplTypeOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].ApplTypeOfRxAccessInfo)

void Com_ReceiveSignal_GetRxSigBuffer(uint16 idxRxAccessInfo, void *SignalDataPtr)
{
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
    case COM_UINT8_APPLTYPEOFRXACCESSINFO:
        *(uint8 *)SignalDataPtr = 3;
        // printf("%d", SignalDataPtr);
        break;
    }
    //
}

void Com_ReceiveSignal(uint16 SignalId, void *SignalDataPtr)
{
    Com_ReceiveSignal_GetRxSigBuffer(SignalId, SignalDataPtr);
}

#define ComConf_ComGroupSignal_Signal_01 0
#define ComConf_ComGroupSignal_Signal_01 1
#define ComConf_ComGroupSignal_Signal_02 2
#define ComConf_ComGroupSignal_Signal_03 3

void Task_5ms()
{
    Com_ReceiveSignal(ComConf_ComGroupSignal_Signal_01, &Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value.Signal_01);

    Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value.Signal_02 = 2;
    CCAN_R_Get_MSG_01_10ms();
    // Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms.Rte_R_PiCCAN_SG_MSG_02_10ms_SG_MSG_02_10ms.value.Signal_03 = 3;
    // Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms.Rte_R_PiCCAN_SG_MSG_02_10ms_SG_MSG_02_10ms.value.Signal_04 = 4;
    CCAN_R_Get_MSG_02_10ms();
}

int main(int argc, char const *argv[])
{

    Task_5ms();

    // printf("%ld\n", sizeof(Rte_tsTask_5ms_Core0));
    // printf("%d\n", Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value);
    // printf("%d\n", (&Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value));
    // printf("%d\n", *(&Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value));
    // printf("%d\n", &(*(&Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value)).Signal_02);
    // // printf("%d\n", Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_01_10ms.Rte_R_PiCCAN_SG_MSG_01_10ms_SG_MSG_01_10ms.value.Signal_02);

    printf("%d\n", Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms.Rte_R_PiCCAN_SG_MSG_02_10ms_SG_MSG_02_10ms.value.Signal_03);
    printf("%d\n", Rte_Task_5ms_Core0.Rte_RB.Rte_APP_CCAN_FD_CCAN_R_Get_MSG_02_10ms.Rte_R_PiCCAN_SG_MSG_02_10ms_SG_MSG_02_10ms.value.Signal_04);

    return 0;
}
