#ifndef _IPLOCATION_EXTENSION_H_
#define _IPLOCATION_EXTENSION_H_

#include "smsdk_ext.h"

class IPLocation : public SDKExtension {
public:
    virtual bool SDK_OnLoad(char *error, size_t maxlength, bool late);
    virtual void SDK_OnUnload();
};

extern const sp_nativeinfo_t iplocation_natives[];

#endif