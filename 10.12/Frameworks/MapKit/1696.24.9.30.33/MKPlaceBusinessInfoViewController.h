//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionHeaderView, NSString, _MKPlaceBusinessInfoRow;

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate>
{
    MKMapItem *_mapItem;
    MKPlaceSectionHeaderView *_headerView;
    _MKPlaceBusinessInfoRow *_businessInfoRow;
}

+ (BOOL)mapItemHasBusinessInfoToDisplay:(id)arg1;
- (void).cxx_destruct;
- (id)infoCardChildUnactionableUIElements;
- (void)_updateBusinessInfo;
- (void)infoCardThemeChanged:(id)arg1;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

