//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "TBestFitStringSelectorDelegate-Protocol.h"

@class NSColor, NSString;

@interface TTextField : NSTextField <TBestFitStringSelectorDelegate>
{
    struct CGSize _maxSize;
    struct CGSize _minSize;
    struct CGSize _idealSize;
    _Bool _suspendCalcIdealSize;
    _Bool _idealSizeIsDirty;
    struct TNSRef<NSColor *, void> _enabledTextColor;
    struct TNSRef<NSColor *, void> _disabledTextColor;
    _Bool _autoSizeToFit;
    _Bool _autoAdjustHeightToFit;
    _Bool _sizingInProgress;
    _Bool _drawGrayTextWhenDisabled;
    _Bool _disableWhenWindowIsNotKey;
    _Bool _delayWindowOrderingOnClickThrough;
    struct TriStateBool _isEnabledCacheWhenNotKey;
    _Bool _isInsideWindowChangedKeyState;
    _Bool _stringSelectorUpdateTextWithAttributedString;
    struct unique_ptr<TBestFitStringSelector, std::__1::default_delete<TBestFitStringSelector>> _bestFitStringSelector;
}

+ (Class)cellClass;
@property(nonatomic) _Bool delayWindowOrderingOnClickThrough; // @synthesize delayWindowOrderingOnClickThrough=_delayWindowOrderingOnClickThrough;
@property(nonatomic) _Bool disableWhenWindowIsNotKey; // @synthesize disableWhenWindowIsNotKey=_disableWhenWindowIsNotKey;
@property(nonatomic) _Bool drawGrayTextWhenDisabled; // @synthesize drawGrayTextWhenDisabled=_drawGrayTextWhenDisabled;
@property(nonatomic) _Bool autoAdjustHeightToFit; // @synthesize autoAdjustHeightToFit=_autoAdjustHeightToFit;
@property(nonatomic) _Bool autoSizeToFit; // @synthesize autoSizeToFit=_autoSizeToFit;
@property(nonatomic) _Bool suspendCalcIdealSize; // @synthesize suspendCalcIdealSize=_suspendCalcIdealSize;
@property(readonly, nonatomic) struct CGSize idealSize; // @synthesize idealSize=_idealSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAccessibilityElement:(BOOL)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)stringSelector:(struct TBestFitStringSelector *)arg1 didChangeMinStringWidth:(double)arg2 maxStringWidth:(double)arg3;
- (void)setAttributedStringSet:(id)arg1 extraContentInsets:(struct NSEdgeInsets)arg2 updateTextWithAttributedString:(_Bool)arg3;
- (void)_updateBestFitStringInBound:(double)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)_windowChangedKeyState;
- (double)calcHeightToFit:(struct CGSize)arg1;
- (struct CGSize)calcSizeToFit;
- (struct CGSize)calcIdealSizeImpl;
- (_Bool)hasBestFitStringSelector;
- (void)calcIdealSize;
- (void)adjustHeightToFit;
- (void)sizeToFit;
- (void)setFont:(id)arg1;
- (void)_setAttributedStringValue:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)_setStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSubpixelAntialiasing:(_Bool)arg1;
@property(nonatomic) _Bool centerVertically; // @dynamic centerVertically;
@property(nonatomic) struct _NSRange truncateInRange; // @dynamic truncateInRange;
@property(retain, nonatomic) NSColor *disabledTextColor; // @dynamic disabledTextColor;
@property(retain, nonatomic) NSColor *enabledTextColor; // @dynamic enabledTextColor;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (id)textAttributes;
- (void)applySettingsFrom:(id)arg1;
- (id)copyTextField;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

