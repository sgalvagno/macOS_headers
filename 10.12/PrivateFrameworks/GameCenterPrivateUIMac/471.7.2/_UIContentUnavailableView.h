//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSButton, NSString, NSTextField;

@interface _UIContentUnavailableView : NSView
{
    NSString *_buttonTitle;
    NSString *_extraButtonTitle;
    NSView *_container;
    NSTextField *_titleView;
    NSTextField *_messageView;
    CDUnknownBlockType _buttonAction;
    CDUnknownBlockType _extraButtonAction;
    NSView *_buttonsView;
    NSButton *_button;
    NSButton *_extraButton;
    NSArray *_buttonsViewConstraints;
}

@property(retain) NSArray *buttonsViewConstraints; // @synthesize buttonsViewConstraints=_buttonsViewConstraints;
@property(retain) NSButton *extraButton; // @synthesize extraButton=_extraButton;
@property(retain) NSButton *button; // @synthesize button=_button;
@property(retain) NSView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain) NSTextField *messageView; // @synthesize messageView=_messageView;
@property(retain) NSTextField *titleView; // @synthesize titleView=_titleView;
@property(retain) NSView *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType extraButtonAction; // @synthesize extraButtonAction=_extraButtonAction;
@property(copy, nonatomic) NSString *extraButtonTitle; // @synthesize extraButtonTitle=_extraButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void)extraButtonPressed:(id)arg1;
- (void)buttonPressed:(id)arg1;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;
- (id)_commonInitWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(BOOL)arg4;

@end

