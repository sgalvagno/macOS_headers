//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSString;

@interface EmoticonSendButton : NSButton
{
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)handleTransparentChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

