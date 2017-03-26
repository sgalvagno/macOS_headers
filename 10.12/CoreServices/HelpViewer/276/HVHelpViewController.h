//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HVURLHandler-Protocol.h"

@class HPDQuery, HVHelpView, HVWebDelegate, NSImage, NSMutableDictionary, NSString, NSURL, WebFrame;

@interface HVHelpViewController : NSObject <HVURLHandler>
{
    HVHelpView *_helpView;
    NSURL *_currentURL;
    NSString *_currentBookTitle;
    HPDQuery *_currentQuery;
    NSString *_currentScope;
    BOOL _shouldGeneratePage;
    NSMutableDictionary *_results;
    BOOL javaScriptEnabled;
    BOOL _displayingSearchResult;
    BOOL _updateSearchResultsOnPageLoad;
    BOOL _pageIsLoading;
    WebFrame *_targetFrame;
    NSImage *_applecareIcon;
    HVWebDelegate *_webDelegate;
    float _clipTOCWidth;
    float _maxWindowWidth;
}

@property float maxWindowWidth; // @synthesize maxWindowWidth=_maxWindowWidth;
@property float clipTOCWidth; // @synthesize clipTOCWidth=_clipTOCWidth;
@property(readonly) HVWebDelegate *webDelegate; // @synthesize webDelegate=_webDelegate;
@property(retain) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(retain) WebFrame *targetFrame; // @synthesize targetFrame=_targetFrame;
@property(retain, nonatomic) NSString *currentScope; // @synthesize currentScope=_currentScope;
@property(retain) NSString *currentBookTitle; // @synthesize currentBookTitle=_currentBookTitle;
@property(retain) HPDQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly) HVHelpView *helpView; // @synthesize helpView=_helpView;
- (void).cxx_destruct;
- (void)hideTOC;
- (void)showTOC;
- (void)resizeTo:(float)arg1 height:(float)arg2 duration:(double)arg3 timingFunction:(id)arg4;
- (BOOL)isTOCButtonChecked;
- (void)setTOCButton:(BOOL)arg1 doNotification:(BOOL)arg2;
- (void)setTOCButton:(BOOL)arg1 doNotification:(BOOL)arg2 isInvokedByJavaScript:(BOOL)arg3;
- (void)showTOCButton:(BOOL)arg1;
- (BOOL)_sendMessageEventToMailPath:(id)arg1 eventID:(unsigned int)arg2 directObject:(id)arg3 title:(id)arg4 URL:(id)arg5;
- (BOOL)_validateQuery:(id)arg1;
- (void)windowWillClose;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)searchForQuery:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)showErrorSheetWithMessageText:(id)arg1 informativeText:(id)arg2;
- (void)pageDidFinishLoading;
- (void)mailCurrentPage;
- (void)print:(id)arg1;
- (BOOL)findTextFieldIsFirstResponder;
- (void)backForwardMenuClicked:(id)arg1;
- (void)sendButtonPressed:(id)arg1;
- (void)makeTextSmaller;
- (void)makeTextBigger;
- (void)navButtonPressed:(id)arg1;
- (void)reload;
- (id)_checkURLForiDVDHack:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)goHome:(id)arg1;
- (void)webAppIsLoaded;
- (void)loadWebapp;
- (void)goBack;
- (void)goForward;
- (void)goToLocation:(id)arg1;
- (BOOL)shouldLookOnlineForFile:(id)arg1;
- (BOOL)canMakeLarger;
- (BOOL)canMakeSmaller;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)_setCurrentScope:(id)arg1 forceBookChange:(BOOL)arg2;
- (id)init;

@end

