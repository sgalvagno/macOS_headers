//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct AuthMethName {
    char method[21];
};

struct BSDTimeStructCopy {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    int tm_gmtoff;
    unsigned int tm_zone;
};

struct PWAccessFeatures {
    unsigned int requiresAlpha:1;
    unsigned int usingHardExpirationDate:1;
    unsigned int usingExpirationDate:1;
    unsigned int canModifyPasswordforSelf:1;
    unsigned int usingHistory:1;
    unsigned int newPasswordRequired:1;
    unsigned int isAdminUser:1;
    unsigned int isDisabled:1;
    unsigned int isSessionKeyAgent:1;
    unsigned int historyCount:4;
    unsigned int passwordCannotBeName:1;
    unsigned int passwordIsHash:1;
    unsigned int requiresNumeric:1;
    struct BSDTimeStructCopy expirationDateGMT;
    struct BSDTimeStructCopy hardExpireDateGMT;
    struct BSDTimeStructCopy validAfterGMT;
    unsigned int maxMinutesUntilChangePassword;
    unsigned int maxMinutesUntilDisabled;
    unsigned int maxMinutesOfNonUse;
    unsigned short maxFailedLoginAttempts;
    unsigned short minChars;
    unsigned short maxChars;
};

struct PWAdminGroupList {
    unsigned char _field1;
    unsigned char _field2[16];
};

struct PWFileEntry {
    unsigned char _field1[16];
    struct BSDTimeStructCopy _field2;
    struct BSDTimeStructCopy _field3;
    struct BSDTimeStructCopy _field4;
    struct BSDTimeStructCopy _field5;
    unsigned short _field6;
    struct PWAccessFeatures _field7;
    char _field8[512];
    unsigned short _field9;
    struct PasswordDigest _field10[10];
    char _field11[256];
    unsigned char _field12[16];
    struct PWAdminGroupList _field13;
    long long _field14;
    char _field15;
    char _field16[380];
    int _field17;
    struct PWMoreAccessFeatures _field18;
    char _field19[37];
};

struct PWFileHeader {
    struct PWGlobalAccessFeatures access;
    struct PWGlobalAccessFeatures origAccess;
    struct AuthMethName weakAuthMethods[25];
    struct AuthMethName origWeakAuthMethods[25];
    unsigned int publicKeyLen;
    unsigned char publicKey[1024];
    unsigned char origPublicKey[1024];
    unsigned int privateKeyLen;
    unsigned char privateKey[2048];
    unsigned char origPrivateKey[2048];
    struct PWGlobalMoreAccessFeatures extraAccess;
    struct PWGlobalMoreAccessFeatures origExtraAccess;
};

struct PWGlobalAccessFeatures {
    unsigned int hcHighBit:1;
    unsigned int passwordCannotBeName:1;
    unsigned int passwordIsHash:1;
    unsigned int requiresNumeric:1;
    unsigned int requiresAlpha:1;
    unsigned int usingHardExpirationDate:1;
    unsigned int usingExpirationDate:1;
    unsigned int usingHistory:1;
    unsigned int unused:1;
    unsigned int requiresSymbol:1;
    unsigned int noModifyPasswordforSelf:1;
    unsigned int newPasswordRequired:1;
    unsigned int requiresMixedCase:1;
    unsigned int hcLowBits:3;
    struct BSDTimeStructCopy expirationDateGMT;
    struct BSDTimeStructCopy hardExpireDateGMT;
    unsigned int maxMinutesUntilChangePassword;
    unsigned int maxMinutesUntilDisabled;
    unsigned int maxMinutesOfNonUse;
    unsigned short maxFailedLoginAttempts;
    unsigned short minChars;
    unsigned short maxChars;
};

struct PWGlobalMoreAccessFeatures {
    unsigned int minutesUntilFailedLoginReset;
    unsigned int notGuessablePattern;
};

struct PWMoreAccessFeatures {
    unsigned int minutesUntilFailedLoginReset;
    unsigned int notGuessablePattern;
    char userkey[64];
    unsigned int logOffTime;
    unsigned int kickOffTime;
    unsigned int adminNoChangePasswords:1;
    unsigned int requiresSymbol:1;
    unsigned int unused:1;
    unsigned int isComputerAccount:1;
    unsigned int requiresMixedCase:1;
    unsigned int doNotMerge:1;
    unsigned int doNotReplicate:1;
    unsigned int recordIsDead:1;
    unsigned int adminClass:3;
    unsigned int adminNoPromoteAdmins:1;
    unsigned int adminNoClearState:1;
    unsigned int adminNoDelete:1;
    unsigned int adminNoCreate:1;
    unsigned int adminNoSetPolicies:1;
};

struct PWSDebugLogOptions {
    _Bool changeList;
    _Bool quit;
};

struct PasswordDigest {
    char _field1[35];
    char _field2[256];
};

struct PasswordServerPrefs {
    unsigned long long badTrialDelay;
    unsigned short listenerPort[11];
    int listenerTypeFlags;
    _Bool externalToolSet;
    char externalToolPath[256];
    _Bool realmSet;
    char realm[256];
    _Bool syncSASLPluginList;
    long long deleteWait;
    long long purgeWait;
    struct SASLPluginEntry saslPluginState[31];
    int prefsVersion;
    struct PWSDebugLogOptions logOptions;
};

struct SASLPluginEntry {
    char name[21];
    int state;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

