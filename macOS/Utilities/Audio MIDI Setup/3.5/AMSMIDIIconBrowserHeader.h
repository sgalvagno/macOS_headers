//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSCollectionViewElement-Protocol.h"

@class NSImageView, NSString, NSTextField;

@interface AMSMIDIIconBrowserHeader : NSView <NSCollectionViewElement>
{
}

- (void)drawRect:(struct CGRect)arg1;
@property(readonly) NSTextField *itemCountField;
@property(readonly) NSTextField *titleTextField;
- (id)textFieldWithTag:(long long)arg1;
@property(readonly) NSImageView *imageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

