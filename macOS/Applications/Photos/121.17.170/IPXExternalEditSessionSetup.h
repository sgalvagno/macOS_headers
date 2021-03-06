//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PFBackgroundServiceManagerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURL, PFCanceler, PFCoalescer, PFWorkContext;
@protocol IPXExternalEditSessionSetupDelegate, IPXFastEnumeration, NSFilePresenter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXExternalEditSessionSetup : NSObject <PFBackgroundServiceManagerDelegate>
{
    id <IPXExternalEditSessionSetupDelegate> _delegate;
    id <IPXFastEnumeration> _assets;
    NSURL *_applicationURL;
    NSMutableDictionary *_utiSupportDict;
    id <NSFilePresenter> _presenter;
    PFWorkContext *_workContext;
    PFCoalescer *_coalescer;
    NSObject<OS_dispatch_queue> *_workQueue;
    PFCanceler *_canceler;
    NSMutableArray *_sessionURLs;
}

@property(readonly) NSMutableArray *sessionURLs; // @synthesize sessionURLs=_sessionURLs;
@property(readonly) PFCanceler *canceler; // @synthesize canceler=_canceler;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) PFCoalescer *coalescer; // @synthesize coalescer=_coalescer;
@property(retain) PFWorkContext *workContext; // @synthesize workContext=_workContext;
@property(readonly) id <NSFilePresenter> presenter; // @synthesize presenter=_presenter;
@property(readonly) NSMutableDictionary *utiSupportDict; // @synthesize utiSupportDict=_utiSupportDict;
@property(readonly) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(readonly) id <IPXFastEnumeration> assets; // @synthesize assets=_assets;
@property __weak id <IPXExternalEditSessionSetupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)cancelWork:(id)arg1 context:(id)arg2;
- (BOOL)endWork:(id)arg1;
- (BOOL)endBatch:(id)arg1 context:(id)arg2;
- (BOOL)performJob:(id)arg1 context:(id)arg2;
- (id)_alertInformativeTextForErrors:(id)arg1;
- (void)_performOutstandingOpensForCoalescer:(id)arg1;
- (void)_openFiles:(id)arg1;
- (id)_copyFileForAsset:(id)arg1 error:(out id *)arg2;
- (id)_fileExtensionForExportSettings:(id)arg1 asset:(id)arg2;
- (id)_exportSettingsForAsset:(id)arg1 editingInput:(id)arg2;
- (id)_exportSettingsForVideoAsset:(id)arg1 editingInput:(id)arg2;
- (id)_exportSettingsForImageAsset:(id)arg1 editingInput:(id)arg2;
- (id)_defaultExportSettings;
- (long long)_exportImageFormatForEditSession:(id)arg1;
- (BOOL)_applicationSupportsContentType:(id)arg1;
- (void)openExternalEditSession;
- (id)initAssets:(id)arg1 withApplicationURL:(id)arg2 filePresenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

