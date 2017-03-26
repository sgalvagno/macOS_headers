//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <CalendarUI/NSTextFieldDelegate-Protocol.h>

@class NSDictionary, NSString;
@protocol CalUIResizingTextFieldDelegate;

@interface CalUIResizingTextField : NSTextField <NSTextFieldDelegate>
{
    BOOL _resizingEnabled;
    BOOL _automaticLinkDetection;
    BOOL _alwaysTreatAsLink;
    NSDictionary *_textAttributes;
    id <CalUIResizingTextFieldDelegate> _calDelegate;
}

+ (Class)cellClass;
@property(nonatomic) BOOL alwaysTreatAsLink; // @synthesize alwaysTreatAsLink=_alwaysTreatAsLink;
@property(nonatomic) BOOL automaticLinkDetection; // @synthesize automaticLinkDetection=_automaticLinkDetection;
@property(retain, nonatomic) id <CalUIResizingTextFieldDelegate> calDelegate; // @synthesize calDelegate=_calDelegate;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property BOOL resizingEnabled; // @synthesize resizingEnabled=_resizingEnabled;
- (void).cxx_destruct;
- (BOOL)readPasteboard:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFieldEditorAllowsVibrancy:(BOOL)arg1;
- (void)makeCursorVisibleInTextView:(id)arg1 forScrollView:(id)arg2;
- (void)updateStringValue:(id)arg1;
- (void)setAttributedStringValueWithString:(id)arg1 andURLString:(id)arg2;
- (void)setStringValue:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updatePreferredMaxLayoutWidth:(id)arg1;
- (void)enableEntireFieldTreatedAsLink;
- (void)enableAutomaticLinkDetection;
- (void)_configureForLinks;
- (void)configureText;
- (void)dealloc;
- (id)initWithResizeEnabled:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

