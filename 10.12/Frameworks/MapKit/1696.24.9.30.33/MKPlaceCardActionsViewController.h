//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKPlaceCardActionSectionViewDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class MKMapItem, NSArray, NSString;
@protocol MKPlaceCardActionControllerDelegate;

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    BOOL _haveTwoColumns;
    BOOL _useSmallFonts;
    BOOL _showTopSeparator;
    BOOL _allowRowSelection;
    id <MKPlaceCardActionControllerDelegate> _delegate;
    NSArray *_actionItemArray;
    NSArray *_viewArray;
    MKMapItem *_mapItem;
}

@property(nonatomic) BOOL allowRowSelection; // @synthesize allowRowSelection=_allowRowSelection;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSArray *viewArray; // @synthesize viewArray=_viewArray;
@property(copy, nonatomic) NSArray *actionItemArray; // @synthesize actionItemArray=_actionItemArray;
@property(nonatomic) __weak id <MKPlaceCardActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(nonatomic) BOOL useSmallFonts; // @synthesize useSmallFonts=_useSmallFonts;
@property(nonatomic) BOOL haveTwoColumns; // @synthesize haveTwoColumns=_haveTwoColumns;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)openURL:(id)arg1;
- (void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)_setUpSectionViews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

