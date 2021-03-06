/* ===========================================================================
* @path $(IPNCPATH)\sys_adm\system_server
*
* @desc
* .
* Copyright (c) Appro Photoelectron Inc.  2008
*
* Use of this software is controlled by the terms and conditions found
* in the license agreement under which this software has been supplied
*
* =========================================================================== */
/**
* @file system_control.h
* @brief Commands to system server
*/
#ifndef __SYSTEM_CONTORL_H__
#define __SYSTEM_CONTORL_H__

#include <netinet/in.h>
#include <time.h>
#include <sys_env_type.h>
//#define VANLINK_DVR_PTZ_DEBUG

/**
* @brief User data
*/
typedef struct{
	char id[USER_LEN];
	char password[PASSWORD_LEN];
	char remote_ip[IP_STR_LEN];
}login_data_t;
/**
* @brief User authority
*/
typedef struct{
	char user_id[USER_LEN];
	int	authority;
}get_user_authority_t;

int SystemInit(void);
void SystemCleanup(void);
int* GetDhcpEn();
unsigned short *GetHttpPort();
char *GetFqdn();
int SetNetMask(in_addr_t net_mask);
int SetTime(struct tm* time);
int SetTimeFormat(unsigned char value);
int SetDaylightTime(unsigned char value);
int changeTimeZone();
int SetTimeZone(unsigned char value);
unsigned short* GetDeviceType();
char *GetSdFileName();
char *GetTitle();
char *GetRegUsr();
char *GetOSDText();
unsigned char *GetMac();
in_addr_t* GetIp();
in_addr_t* GetGateWay();
in_addr_t* GetNetmask();
char* GetFtpServerIp();
char *GetFtpUsername();
char *GetFtpPassword();
char *GetFtpFoldername();
int *GetFtpImageAmount();
int *GetFtpPid();
unsigned short *GetFtpPort();
char* GetSmtpServerIp();
unsigned char *GetSmtpAuthentication();
char *GetsmtpUsername();
char *GetSmtpPassword();
char *GetSmtpSenderEmail();
char *GetSmtpReceiverEmail();
char *GetSmtpCC();
char *GetSmtpSubject();
char *GetSmtpText();
unsigned char *GetSmtpAttachments();
unsigned char *GetSmtpView();
int* GetDhcpCinfig();
//unsigned short* GetUpnpPort();
int SetIp(in_addr_t ip);
int SetHttpPort(unsigned short port);
int SetTitle(void * buf, int length);
int SetRegUsrName(void * buf, int length);
int SetOSDTextInfo(void * buf, int length);
int SetGateway(in_addr_t gateway);
int SetDhcpEnable(int enable);
int SetFtpFqdn(void * buf, int length);
int SetFtpUsername(void * buf, int length);
int SetFtpPassword(void * buf, int length);
int SetFtpFoldname(void * buf, int length);
int SetFtpImageacount(int imageacount);
int SetFtpPid(int pid);
int SetFtpPort(unsigned short port);
int SetSmtpServerIp(void *buf, int length);
int SetSmtpAuthentication(unsigned char authentication);
int SetSmtpUsername(void * buf, int length);
int SetSmtpPassword(void * buf, int length);
int SetSmtpSenderEmail(void * buf, int length);
int SetSmtpReceiverEmail(void * buf, int length);
int SetSmtpCC(void * buf, int length);
int SetSmtpSubject(void * buf, int length);
int SetSmtpText(void * buf, int length);
int SetSmtpAttachments(unsigned char attachments);
int SetSmtpView(unsigned char view);
in_addr_t* GetDns();
int SetDns(in_addr_t ip);
int SetSntpServer(void * buf, int length);
void SendOSDChangeMsg(void);
int SetSchedule(void * buf, int length);
 //add by sxh
int SetCamPtzWithCh(char* cmd,int channel);//add by sxh
int InitCamPtz();

int SetCamPtz(int value);

int DelSchedule(int bEnable);
int DoLogin(login_data_t* pPrm);
int GetUserAuthority(char* user);
int AddUser(Acount_t *acout);
int DelUser(char *strUserName);
int SetImageFormat(unsigned char value);
int SetResolution(unsigned char value);
int SetMPEG4Res(unsigned char value);
int SetMPEG42Res(unsigned char value);
int SetLostAlarm(unsigned char value);
int SetSDAlarmEnable(unsigned char value);
int SetFTPAlarmEnable(unsigned char value);
int SetSMTPAlarmEnable(unsigned char value);
int SetAlarmDuration(unsigned char value);
int SetVideoCodecMode(unsigned char value);
int SetVideoCodecRes(unsigned char value);
int SetTVcable(unsigned char value);
int SetBlc(unsigned char value);
int SetMotionDetect(unsigned char value);
int SetMotionCEnable(unsigned char value);
int SetMotionLevel(unsigned char value);
int SetMotionCValue(unsigned char value);
int SetMotionDetectBlock(char *pValue,int len);
int SetAVIDuration(unsigned char value);
int SetAVIFormat(unsigned char value);
int SetFTPFileFormat(unsigned char value);
int SetSDFileFormat(unsigned char value);
int SetAttFileFormat(unsigned char value);
int SetAudioEnable(unsigned char value);
int SetASmtpAttach(unsigned char value);
int SetRftpenable(unsigned char value);
int SetSdReEnable(unsigned char value);
int SetImageParaDefault(unsigned char value);
int SetGIOInEnable(unsigned char value);
int SetGIOInType(unsigned char value);
int SetGIOOutEnable(unsigned char value);
int SetGIOOutType(unsigned char value);
int SetAudioInVolume(unsigned char value);
int SetAudioOutVolume(unsigned char value);
int SetSystemDefault(unsigned char value);
int SetRateControl(unsigned char value);
int SetNetMulticast(unsigned char value);
void ScheduleStop();
void SetRestart();
void SetDefault();
int DoBootProc(int value);
int CheckCpuSpeed(void);
int SetVideoMode(unsigned char value);
int SetHttpsPort(unsigned char value);

int SetPtzChl(unsigned char *value);

#if 0
int SetRS485Port(unsigned char *value);
int SetRS485PortDev_add(unsigned char value);
int SetRS485PortDev_del(unsigned char value);

int SetRS232Port(unsigned char *value);
int SetRS232Speed(unsigned char* value);
int SetRS232Databit(unsigned char* value);
int SetRS232Stopbit(unsigned char* value);
int SetRS232Parity(unsigned char* value);
int SetRS232StreamCtrl(unsigned char* value);
#endif

int SetVideoCodecCombo(unsigned char value);
int SetMotionDetCEnable(unsigned char value);
int SetMotionDetLevel(unsigned char value);
int SetMotionDetCValue(unsigned char value);
int SetVideoCodecType(unsigned char value);
void SetMotionDetectParam(void);

#endif
