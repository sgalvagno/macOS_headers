//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WKWebProcessPlugInLoadDelegate-Protocol.h>

@class NSString, WBSWebProcessPlugIn, WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInFrame;

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate>
{
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebProcessPlugIn *_webProcessPlugIn;
}

@property(readonly, nonatomic) WBSWebProcessPlugIn *webProcessPlugIn; // @synthesize webProcessPlugIn=_webProcessPlugIn;
@property(readonly, nonatomic) WKWebProcessPlugInBrowserContextController *browserContextController; // @synthesize browserContextController=_browserContextController;
- (void).cxx_destruct;
- (id)requestIfDoNotTrackEnabled:(id)arg1;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *mainFrame;
- (void)willDestroyBrowserContextController:(id)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

