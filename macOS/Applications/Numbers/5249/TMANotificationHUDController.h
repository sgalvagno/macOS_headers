//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMacHUDWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class NSString, NSTextField;

@interface TMANotificationHUDController : TSDMacHUDWindowController <NSWindowDelegate>
{
    BOOL _shouldAutohide;
    NSTextField *_infoTextField;
}

@property(nonatomic) BOOL shouldAutohide; // @synthesize shouldAutohide=_shouldAutohide;
@property(retain, nonatomic) NSTextField *infoTextField; // @synthesize infoTextField=_infoTextField;
- (void).cxx_destruct;
- (void)windowDidMove:(id)arg1;
- (void)userCloseHUD:(id)arg1;
- (void)showHUDInView:(id)arg1 insets:(struct NSEdgeInsets)arg2;
- (void)setHUDText;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)close;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

