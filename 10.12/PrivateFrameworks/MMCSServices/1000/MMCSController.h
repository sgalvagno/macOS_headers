//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;

@interface MMCSController : NSObject
{
    long long _connectionBehavior;
    id _powerAssertion;
    NSTimer *_powerAssertionTimer;
    struct _mmcs_engine *_engine;
    struct __CFURL *_chunkStoreURL;
    unsigned long long _currentItemID;
    NSMutableDictionary *_requestIDToBlockMap;
    NSMutableDictionary *_requestIDToTransfersMap;
    NSMutableDictionary *_requestIDToRemainingTransfersMap;
    NSMutableDictionary *_transferToRequestIDsMap;
    NSMutableDictionary *_transfers;
}

@property(readonly) NSMutableDictionary *transfers; // @synthesize transfers=_transfers;
@property long long connectionBehavior; // @synthesize connectionBehavior=_connectionBehavior;
- (void)_MMCSRegisterItems:(struct _mmcs_engine *)arg1 requestorContext:(void *)arg2 requestOptions:(id)arg3 completionCallback:(CDUnknownFunctionPointerType)arg4;
- (id)_MMCSICloudRequestHeadersCopy:(struct __CFString *)arg1;
- (void)_itemCompleted:(id)arg1;
- (void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)_putItemCompleted:(id)arg1 error:(id)arg2;
- (void)_processCompletedItem:(id)arg1 error:(id)arg2;
- (void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (id)getContentHeadersAsString;
- (id)parseContentHeaderAsDictionary:(id)arg1 treatValuesAsArrays:(BOOL)arg2;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 preauthenticate:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)unregisterFiles:(id)arg1;
- (void)registerFilesForUpload:(id)arg1 withPreauthentication:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)registerFilesForDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) BOOL isActive;
- (void)_registerFiles:(id)arg1 preauthenticate:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id *)arg5;
- (BOOL)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id *)arg5;
- (void)_setScheduledTransfers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_unregisterTransfers:(id)arg1;
- (void)_registerTransfers:(id)arg1 preauthenticate:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_handleRegistrationForMMCSPutFile:(id)arg1 preauthenticate:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_registeredTransferForItemID:(unsigned long long)arg1;
- (id)_registeredTransferForGUID:(id)arg1;
- (struct _mmcs_engine *)_engine;
- (id)_optionsForFiles:(id)arg1;
- (void)_addPreauthorizationOptions:(id)arg1 forFiles:(id)arg2;
- (void)dealloc;
- (void)_registerPowerAssertionIfNeeded;
- (void)_unregisterPowerAssertion;
- (void)_releasePowerAssertion;
- (void)_releasePowerAssertionAndSimulateCrash;
- (id)init;

@end

