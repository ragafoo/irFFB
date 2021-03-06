#pragma once
#include "stdafx.h"
#include "irFFB.h"

class Settings {

    public:
        Settings();
        void setDevWnd(HWND);
        HWND getDevWnd();
        void setFfbWnd(HWND);
        HWND getFfbWnd();
        void setMinWnd(sWins_t *);
        sWins_t *getMinWnd();
        void setMaxWnd(sWins_t *);
        sWins_t *getMaxWnd();
        void setBumpsWnd(sWins_t *);
        sWins_t *getBumpsWnd();
        void setLoadWnd(sWins_t *);
        sWins_t *getLoadWnd();
        void setLongLoadWnd(sWins_t *);
        sWins_t *getLongLoadWnd();
        void setSopWnd(sWins_t *);
        sWins_t *getSopWnd();
        void setSopOffsetWnd(sWins_t *);
        sWins_t *getSopOffsetWnd();
        void setUse360Wnd(HWND);
        HWND getUse360Wnd();
        void setCarSpecificWnd(HWND);
        HWND getCarSpecificWnd();
        void setReduceWhenParkedWnd(HWND);
        HWND getReduceWhenParkedWnd();
        void setRunOnStartupWnd(HWND);
        HWND getRunOnStartupWnd();
        void setStartMinimisedWnd(HWND);
        HWND getStartMinimisedWnd();
        void clearFfbDevices();
        void addFfbDevice(GUID dev, const wchar_t *);
        void setFfbDevice(int);
        bool isFfbDevicePresent();
        GUID getFfbDevice();
        void setFfbType(int);
        int getFfbType();
        void setMinForce(int);
        int getMinForce();
        void setMaxForce(int);
        int getMaxForce();    
        float getScaleFactor();
        void setBumpsFactor(int);
        float getBumpsFactor();
        void setLoadFactor(int);
        float getLoadFactor();
        void setLongLoadFactor(int);
        int getLongLoadFactor();
        void setSopFactor(int);
        float getSopFactor();
        void setSopOffset(int);
        float getSopOffset();
        void setUse360ForDirect(bool);
        bool getUse360ForDirect();
        void setUseCarSpecific(bool, char *);
        bool getUseCarSpecific();
        void setReduceWhenParked(bool);
        bool getReduceWhenParked();
        void setRunOnStartup(bool);
        bool getRunOnStartup();
        void setStartMinimised(bool);
        bool getStartMinimised();
        int getBumpsSetting();
        int getLoadSetting();
        int getMinForceSetting();
        int getSopOffsetSetting();
        void writeCarSpecificSetting();
        void readRegSettings(char *);
        void readGenericSettings();
        void writeRegSettings();
        void writeGenericSettings();
        void readSettingsForCar(char *);
        void writeSettingsForCar(char *);

    private:
        HWND devWnd, ffbWnd;
        sWins_t *minWnd, *maxWnd, *bumpsWnd, *loadWnd, *longLoadWnd, *sopWnd, *sopOffsetWnd;
        HWND use360Wnd, carSpecificWnd, reduceWhenParkedWnd;
        HWND runOnStartupWnd, startMinimisedWnd;
        int ffbType, ffdeviceIdx, minForce, maxForce, longLoadFactor;
        float scaleFactor, bumpsFactor, loadFactor, sopFactor, sopOffset;
        bool use360ForDirect, useCarSpecific;
        bool reduceWhenParked, runOnStartup, startMinimised;
        GUID devGuid = GUID_NULL, ffdevices[MAX_FFB_DEVICES];
        wchar_t strbuf[64];

        wchar_t *ffbTypeString(int);
        PWSTR getIniPath();
        void writeWithNewline(std::ofstream &, char *);

};