//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKUIRepeatGadget.h>

@class EKUIPopUpButton;

@interface EKUIRepeatPickerGadget : EKUIRepeatGadget
{
    EKUIPopUpButton *_repeatPicker;
}

@property(retain) EKUIPopUpButton *repeatPicker; // @synthesize repeatPicker=_repeatPicker;
- (void).cxx_destruct;
- (void)repeatChanged:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (id)control;
- (double)baselineOffset;
- (id)labelString;
- (id)addMenuItemForRecurrenceFrequency:(long long)arg1 withTitle:(id)arg2;
- (id)initWithViewController:(id)arg1;

@end

