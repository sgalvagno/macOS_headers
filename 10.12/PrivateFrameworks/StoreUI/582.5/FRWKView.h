//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/WKView.h>

#import <StoreUI/FRJSMessagingDelegate-Protocol.h>

@class FRJSRootObject, FRStoreWebViewController, ISServiceProxy, NSLock, NSMutableArray, NSString, NSURL;
@protocol FRWKViewDelegate;

@interface FRWKView : WKView <FRJSMessagingDelegate>
{
    NSMutableArray *_downloads;
    struct OpaqueWKContext *_processContextRef;
    BOOL _disableScrolling;
    BOOL _navigationEnabled;
    BOOL _initialLoadCommitted;
    BOOL _loading;
    BOOL _shouldClearHistoryOnNextLoad;
    BOOL _shouldKeepCurrentHistoryItem;
    id <FRWKViewDelegate> _delegate;
    FRJSRootObject *_rootObject;
    NSString *_signUpURLRegex;
    NSURL *_signUpURL;
    FRStoreWebViewController *_storeWebViewController;
    ISServiceProxy *_serviceProxy;
    NSMutableArray *_messageQueue;
    NSLock *_messageQueueLock;
    NSURL *_loadingURL;
}

@property(retain, nonatomic) NSURL *loadingURL; // @synthesize loadingURL=_loadingURL;
@property(nonatomic) BOOL shouldKeepCurrentHistoryItem; // @synthesize shouldKeepCurrentHistoryItem=_shouldKeepCurrentHistoryItem;
@property(nonatomic) BOOL shouldClearHistoryOnNextLoad; // @synthesize shouldClearHistoryOnNextLoad=_shouldClearHistoryOnNextLoad;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSLock *messageQueueLock; // @synthesize messageQueueLock=_messageQueueLock;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(nonatomic) BOOL initialLoadCommitted; // @synthesize initialLoadCommitted=_initialLoadCommitted;
@property(readonly, nonatomic) ISServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) __weak FRStoreWebViewController *storeWebViewController; // @synthesize storeWebViewController=_storeWebViewController;
@property(retain, nonatomic) NSURL *signUpURL; // @synthesize signUpURL=_signUpURL;
@property(retain, nonatomic) NSString *signUpURLRegex; // @synthesize signUpURLRegex=_signUpURLRegex;
@property(nonatomic) BOOL navigationEnabled; // @synthesize navigationEnabled=_navigationEnabled;
@property BOOL disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property(readonly, nonatomic) FRJSRootObject *rootObject; // @synthesize rootObject=_rootObject;
@property(nonatomic) __weak id <FRWKViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_immediateActionAnimationControllerForHitTestResult:(struct OpaqueWKHitTestResult *)arg1 withType:(unsigned int)arg2 userData:(void *)arg3;
- (struct WKPageContextMenuClientV3)_contextMenuClient;
- (struct WKPageUIClientV5)_uiClient;
- (struct WKPageLoaderClientV5)_loadClient;
- (struct WKPagePolicyClientV1)_policyClient;
- (struct WKContextDownloadClientV0)_downloadClient;
- (id)_infoForDownload:(struct OpaqueWKDownload *)arg1;
- (struct WKContextInjectedBundleClientV1)_bundleClient;
- (id)_handleMessage:(struct OpaqueWKString *)arg1 withMessageBody:(void *)arg2;
- (struct OpaqueWKContext *)_primaryWebProcess;
- (void)_setDragImage:(id)arg1 at:(struct CGPoint)arg2 linkDrag:(BOOL)arg3;
- (BOOL)dragPromisedFilesOfTypes:(id)arg1 fromRect:(struct CGRect)arg2 source:(id)arg3 slideBack:(BOOL)arg4 event:(id)arg5;
- (id)beginDraggingSessionWithItems:(id)arg1 event:(id)arg2 source:(id)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)viewWillHide;
- (void)viewDidUnhide;
- (id)sendSynchronousMessage:(id)arg1 messageBody:(id)arg2;
- (void)sendMessage:(id)arg1 messageBody:(id)arg2;
- (BOOL)isAccountCreationURL:(id)arg1;
- (id)requestDataForURL:(id)arg1;
- (void)cancelLoad;
- (void)loadHTML:(id)arg1;
- (BOOL)loadRequest:(id)arg1;
- (BOOL)loadURL:(id)arg1;
- (BOOL)_canGoForwardToURL:(id)arg1;
- (BOOL)_canGoBackToURL:(id)arg1;
- (BOOL)_url:(id)arg1 isEqualToBackForwardListItem:(struct OpaqueWKBackForwardListItem *)arg2;
- (void)goToHistoryIndex:(long long)arg1;
- (void)goForward;
- (void)goBack;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (void)reload;
- (void)removeCurrentPage;
- (void)clearHistoryOnNextLoad;
- (void)clearHistory;
- (void)clearAllCaches:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSURL *activeURL;
@property double topContentInset;
- (struct CGRect)rectForDOMElement:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

