//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSButton, NSLayoutConstraint, NSMutableArray, NSSegmentedControl, NSString, _MKPlaceReservationInfo;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView
{
    NSSegmentedControl *_openTimesControl;
    NSButton *_buttonMakeReservation;
    NSButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property(readonly, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
- (void).cxx_destruct;
- (void)_mapkit_tintColorDidChange;
- (void)_updateTintColor;
- (void)_updateButtonTitleAttributes;
- (void)_updateMutableConstraints;
- (void)_setupImmutableConstraints;
- (void)_updateWithReservationInfo;
- (id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(BOOL)arg2;
- (double)_buttonBottomMargin;
- (double)_buttonTopMargin;
- (id)_buttonFontSmall;
- (id)_buttonFontLarge;
- (void)_actionMakeReservation;
- (id)_newButtonForAttribution:(BOOL)arg1;
@property(retain, nonatomic) NSString *selectedTimeString;
@property(nonatomic) unsigned long long selectedTimeIndex;
- (void)dealloc;
- (id)initWithReservationInfo:(id)arg1;

@end

