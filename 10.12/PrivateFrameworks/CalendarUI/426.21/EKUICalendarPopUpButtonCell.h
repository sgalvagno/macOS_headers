//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKUIPopUpButtonCell.h>

@class EKUICalendarPopUpButton;

@interface EKUICalendarPopUpButtonCell : EKUIPopUpButtonCell
{
    EKUICalendarPopUpButton *_uiButton;
}

@property __weak EKUICalendarPopUpButton *uiButton; // @synthesize uiButton=_uiButton;
- (void).cxx_destruct;
- (void)drawTitle:(id)arg1 inFrame:(struct CGRect)arg2 deemphasizedString:(id)arg3 inView:(id)arg4;
- (id)titleFont;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

