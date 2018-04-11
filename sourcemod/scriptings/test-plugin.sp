#include <iplocation>

#pragma semicolon 1
#pragma newdecls required

public void OnPluginStart()
{
    char location[128];
    IP_GetLocation("104.25.134.27", location); // CloudFlare
    PrintToServer("IP: 104.25.134.27 -> Location: %s", location);
    LogMessage("IP: 104.25.134.27 -> Location: %s", location);
}
