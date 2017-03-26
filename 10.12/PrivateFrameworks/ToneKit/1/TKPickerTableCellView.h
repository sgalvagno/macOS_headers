//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSLayoutConstraint, NSString, NSTextField;

@interface TKPickerTableCellView : NSView
{
    BOOL _textCentered;
    BOOL _showsCheckmark;
    NSTextField *_textField;
    NSTextField *_detailTextField;
    NSView *_textContainerView;
    NSImageView *_checkmarkView;
    NSLayoutConstraint *_textContainerViewRightConstraint;
}

+ (double)intrinsicHeight;
@property(nonatomic) BOOL showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
@property(nonatomic, getter=isTextCentered) BOOL textCentered; // @synthesize textCentered=_textCentered;
@property(retain, nonatomic, setter=_setTextContainerViewRightConstraint:) NSLayoutConstraint *_textContainerViewRightConstraint; // @synthesize _textContainerViewRightConstraint;
@property(retain, nonatomic, setter=_setCheckmarkView:) NSImageView *_checkmarkView; // @synthesize _checkmarkView;
@property(retain, nonatomic, setter=_setTextContainerView:) NSView *_textContainerView; // @synthesize _textContainerView;
@property(retain, nonatomic, setter=_setDetailTextField:) NSTextField *_detailTextField; // @synthesize _detailTextField;
@property(retain, nonatomic, setter=_setTextField:) NSTextField *_textField; // @synthesize _textField;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *text;
- (void)_removeCheckmark;
- (void)_addCheckmark;
- (void)_configureTextFieldAsWideButShrinkable:(id)arg1 withOtherTextField:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

