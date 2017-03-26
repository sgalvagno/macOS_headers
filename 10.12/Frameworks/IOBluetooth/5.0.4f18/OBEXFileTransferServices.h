//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOBluetoothOBEXSession, NSString, NSTimer;

@interface OBEXFileTransferServices : NSObject
{
    id mOBEXFileGet;
    id mOBEXFilePut;
    id mFolderListingFileRef;
    int mActionCommand;
    int mSavedCommand;
    NSString *mActionArgument1;
    NSString *mActionArgument2;
    NSString *mActionArgument3;
    NSString *mCurrentRemoteDirectory;
    BOOL mActionInProgress;
    BOOL mWeOpenedTheOBEXConnection;
    BOOL mHasTargetHeader;
    id mDelegate;
    BOOL mAbortedByOwner;
    BOOL mWeAreAborting;
    NSTimer *mInactivityTimer;
    IOBluetoothOBEXSession *mOBEXSession;
    unsigned short mMaxPacketLength;
    int mConnectionID;
    id mPUTProgress;
    id mGETProgress;
    void *mReserved1;
    void *mReserved2;
}

+ (id)withOBEXSession:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isConnected;
- (id)currentPath;
- (int)abort;
- (int)getDefaultVCard:(id)arg1;
- (int)copyRemoteFile:(id)arg1 toLocalPath:(id)arg2;
- (int)sendData:(id)arg1 type:(id)arg2 name:(id)arg3;
- (int)sendFile:(id)arg1;
- (int)removeItem:(id)arg1;
- (int)retrieveFolderListing;
- (int)createFolder:(id)arg1;
- (int)changeCurrentFolderBackward;
- (int)changeCurrentFolderToRoot;
- (int)changeCurrentFolderForwardToPath:(id)arg1;
- (int)disconnect;
- (int)connectToObjectPushService;
- (int)connectToFTPService;
- (int)connect;
@property id delegate;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithOBEXSession:(id)arg1;
- (void)GetFileHandler:(id)arg1 isEnd:(BOOL)arg2 errorCode:(int)arg3 transferProgress:(id)arg4;
- (void)PutFileHandler:(id)arg1 isEnd:(BOOL)arg2 errorCode:(int)arg3 transferProgress:(id)arg4;
- (void)notifyDelegateOfProgress:(int)arg1 itemName:(id)arg2;
- (void)finalizeActionWithError:(int)arg1 itemName:(id)arg2;
- (void)finalizeActionAsync:(id)arg1;
- (void)inactivityTimerFired:(id)arg1;
- (void)OBEXRemoveItemHandler:(struct OBEXGetCommandResponseData *)arg1;
- (void)OBEXGetFolderListingHandler:(struct OBEXGetCommandResponseData *)arg1;
- (void)OBEXSetPathHandler:(struct OBEXSetPathCommandResponseData *)arg1;
- (void)OBEXDisconnectHandler:(struct OBEXDisconnectCommandResponseData *)arg1;
- (void)OBEXAbortHandler:(struct OBEXAbortCommandResponseData *)arg1;
- (void)OBEXConnectHandler:(struct OBEXConnectCommandResponseData *)arg1;
- (void)SessionResponseCallback:(struct OBEXSessionEvent *)arg1;
- (int)sendRemoveCommandWithDict:(struct __CFDictionary *)arg1;
- (int)sendGetListingCommandWithDict:(struct __CFDictionary *)arg1;
- (int)sendSetPathCommandWithDict:(struct __CFDictionary *)arg1 andFlags:(unsigned char)arg2;
- (void)startCommand;
- (void)initiateAction;
- (void)initForNewAction;
- (void)setActionArgument3:(id)arg1;
- (void)setActionArgument2:(id)arg1;
- (void)setActionArgument1:(id)arg1;
- (void)setActionInProgress:(BOOL)arg1;
- (id)OBEXSession;
- (void)setOBEXSession:(id)arg1;

@end

