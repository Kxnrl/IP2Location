public Extension __ext_iplocation = 
{
	name = "IPLocation",
	file = "iplocation.ext",
#if defined AUTOLOAD_EXTENSIONS
	autoload = 1,
#else
	autoload = 0,
#endif
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};

native void IP_GetLocation(const char[] ip, char[] location);