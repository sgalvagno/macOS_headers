//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>
#import <MapKit/MKQuickRouteConfigurableView-Protocol.h>
#import <MapKit/MKQuickRouteManagerDelegate-Protocol.h>
#import <MapKit/MKQuickRouteTransportTypeFinding-Protocol.h>
#import <MapKit/MKStackingViewControllerFixedHeightAware-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, MKPlaceSectionRowView, MKTransitInfoLabelView, MNIdealTransportTypeFinder, NSAttributedString, NSButton, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, _MKPlaceActionButtonController, _MKPlaceCardHeaderMiddleSectionView, _MKQuickRouteManager, _MKUILabel;
@protocol GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate, _MKPlaceItem;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver, MKStackingViewControllerFixedHeightAware, MKQuickRouteTransportTypeFinding, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    unsigned long long _options;
    NSMutableArray *_firstLineRichTextArray;
    NSMutableArray *_secondLineRichTextArray;
    NSMutableArray *_thirdLineRichTextArray;
    _MKQuickRouteManager *_quickRouteAmazingNess;
    MNIdealTransportTypeFinder *_transportTypeFinder;
    MKPlaceSectionRowView *_topContainerView;
    MKPlaceSectionRowView *_middleContainerView;
    MKPlaceSectionRowView *_bottomContainerView;
    NSMutableArray *_topContainerConstraints;
    NSMutableArray *_middleContainerConstraints;
    NSMutableArray *_bottomContainerConstraints;
    _MKPlaceCardHeaderMiddleSectionView *_firstLineForMidContainerView;
    _MKPlaceCardHeaderMiddleSectionView *_secondLineForMidContainerView;
    _MKPlaceCardHeaderMiddleSectionView *_thirdLineForMidContainerView;
    NSLayoutConstraint *_firstLineToTopConstraint;
    NSLayoutConstraint *_secondLineToFirstLineConstraint;
    NSLayoutConstraint *_thirdLineToSecondLineConstraint;
    NSLayoutConstraint *_bottomToThirdLineConstraint;
    NSAttributedString *_distanceTextItem;
    BOOL _distanceOrETAWasFound;
    CDUnknownBlockType _etaStringFormatterBlock;
    NSNumber *_lastTransportTypeFound;
    NSButton *_primaryButton;
    NSButton *_actionButton;
    NSLayoutConstraint *_primaryButtonHeightConstraint;
    NSLayoutConstraint *_actionButtonHeightConstraint;
    _MKUILabel *_titleLabel;
    _MKUILabel *_distanceLabel;
    _MKUILabel *_categoryLabel;
    _MKUILabel *_priceLabel;
    _MKUILabel *_openNowLabel;
    _MKUILabel *_reviewLabel;
    _MKUILabel *_hoursLabel;
    MKTransitInfoLabelView *_transitLabel;
    MKMapItem *_nearbyItem;
    BOOL optionTitleHasOwnSection;
    BOOL optionSmallerScreen;
    BOOL _optionForceSmallButtonText;
    BOOL _resizableViewsDisabled;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    unsigned long long _primaryButtonType;
    id <MKPlaceCardHeaderViewControllerDelegate> _delegate;
    _MKPlaceActionButtonController *_actionButtonController;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
}

+ (double)minimalModeHeight;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) _MKPlaceActionButtonController *actionButtonController; // @synthesize actionButtonController=_actionButtonController;
@property(nonatomic) BOOL resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
@property(nonatomic) __weak id <MKPlaceCardHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long primaryButtonType; // @synthesize primaryButtonType=_primaryButtonType;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (id)transportTypeFinder;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (BOOL)quickRouteShouldIncludeTransit;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_primaryButtonSelected:(id)arg1;
- (void)_actionSelected:(id)arg1;
- (void)updateActionButton;
- (void)setUpBottomContainerConstraints;
- (id)_reviewLabelText;
- (void)infoCardThemeChanged:(id)arg1;
- (void)setUpMiddleContainerConstaints;
- (void)_contentSizeDidChange;
- (void)_updateBaselineConstraints;
- (void)setUpTopContainerConstraints;
- (id)labelForAttributedString:(id)arg1;
- (BOOL)_areDistanceAndETAInformationAvailable;
- (id)_applyButtonDefaultConfiguration:(id)arg1 selector:(SEL)arg2;
- (id)_buttonFont;
- (id)_actionButtonColor;
- (id)_primaryButtonTextColor;
- (id)_distanceLabelContainerView;
- (void)_setUpComponents;
- (void)_updateRidesharingButton;
- (void)_updateShareLocationButton;
- (void)_setPrimaryButtonTitle:(id)arg1;
- (void)_updateRerouteButton;
- (void)_updateDirectionsButton;
- (void)_updatePrimaryButton;
- (void)_setUpPrimaryButton;
- (BOOL)_isSmallerScreen;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (BOOL)_willShowDistance;
- (double)extraHeightToReserveInLayout;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateViewConstraints;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) double currentMinimalModeInterpolationFactor;
- (void)updateHeaderTitle;
- (void)_configureETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3;
- (void)_configureETAForMapItem:(id)arg1;
- (void)_updateETAHandler:(id)arg1;
- (BOOL)_shouldUpdateETAForMapView:(id)arg1;
- (void)_updateETA;
- (void)configureWithNearbyMapItem:(id)arg1;
@property(readonly, nonatomic) NSButton *primaryButton;
- (void)_commonInit;
- (id)initWithLineItem:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 placeHeaderOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

