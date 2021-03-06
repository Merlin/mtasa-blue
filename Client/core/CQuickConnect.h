/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CQuickConnect.h
 *  PURPOSE:     Header file for quick connect window class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

class CQuickConnect;

#pragma once

#include "CMainMenu.h"

class CQuickConnect
{
public:
    CQuickConnect();
    ~CQuickConnect();

    void SetVisible(bool bVisible);
    bool IsVisible();
    void Reset();

private:
    bool OnConnectButtonClick(CGUIElement* pElement);
    bool OnBackButtonClick(CGUIElement* pElement);
    bool OnHostChanged(CGUIElement* pElement);

    void LoadData();

    CGUIWindow* m_pWindow;
    CGUIEdit*   m_pEditHost;
    CGUIEdit*   m_pEditPort;
    CGUIEdit*   m_pEditPass;
    CGUILabel*  m_pLabelHost;
    CGUILabel*  m_pLabelPort;
    CGUILabel*  m_pLabelPass;
    CGUIButton* m_pButtonConnect;
    CGUIButton* m_pButtonBack;
};
