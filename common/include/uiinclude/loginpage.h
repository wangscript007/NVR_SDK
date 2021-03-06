#ifndef _LOGINPAGE_H_
#define _LOGINPAGE_H_

#include "ui.h"

#define IDC_STATIC_LOGIN_USER		IDD_DIALOG_LOGIN+1
#define IDC_COMBO_LOGIN_USER		IDD_DIALOG_LOGIN+2

#define IDC_STATIC_LOGIN_PASSWORD	IDD_DIALOG_LOGIN+3
#define IDC_EDIT_LOGIN_PASSWORD		IDD_DIALOG_LOGIN+4

#define IDC_BUTTON_LOGIN_OK			IDD_DIALOG_LOGIN+5
#define IDC_BUTTON_LOGIN_CANCEL		IDD_DIALOG_LOGIN+6

BOOL CreateLoginPage();
BOOL ShowLoginPage();

void OnLoginUser(s32 param);
void OnLoginOK(s32 param);
void OnLoginCancel(s32 param);

#endif
