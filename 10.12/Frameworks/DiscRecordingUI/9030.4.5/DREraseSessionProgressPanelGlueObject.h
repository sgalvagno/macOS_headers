//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiscRecordingUI/NSWindowDelegate-Protocol.h>

@class NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface DREraseSessionProgressPanelGlueObject : NSObject <NSWindowDelegate>
{
    struct DREraseSessionObject *_session;
    struct DREraseSessionProgressCallbacks _callbacks;
    NSWindow *_parentWindow;
}

- (BOOL)eraseProgressPanel:(id)arg1 eraseDidFinish:(id)arg2;
- (void)eraseProgressPanelDidFinish:(id)arg1;
- (void)eraseProgressPanelWillBegin:(id)arg1;
- (void)beginPanelWithOptions:(struct DREraseSessionProgressDialogOptions *)arg1;
- (void)setCallbacks:(struct DREraseSessionProgressCallbacks *)arg1;
- (void)setParentWindow:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(struct DREraseSessionObject *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

