//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <FlightUtilities/FUFlightViewDelegate-Protocol.h>
#import <FlightUtilities/MKMapViewDelegate-Protocol.h>

@class FUErrorView, FUFlightView, FULoadingView, NSArray, NSDate, NSNumber, NSString;

@interface FUFlightViewController : NSViewController <MKMapViewDelegate, FUFlightViewDelegate>
{
    BOOL _loadingFlight;
    NSDate *_startLoadingDate;
    BOOL _highlightCurrentFlightLeg;
    BOOL _showInfoPanel;
    FUFlightView *_flightView;
    NSArray *_flights;
    FUErrorView *_errorView;
    FULoadingView *_loadingView;
    NSNumber *_flightCode;
    NSString *_airlineCode;
}

@property(retain) NSString *airlineCode; // @synthesize airlineCode=_airlineCode;
@property(retain) NSNumber *flightCode; // @synthesize flightCode=_flightCode;
@property __weak FULoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property __weak FUErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) BOOL showInfoPanel; // @synthesize showInfoPanel=_showInfoPanel;
@property(nonatomic) BOOL highlightCurrentFlightLeg; // @synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg;
@property(retain, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property(retain, nonatomic) FUFlightView *flightView; // @synthesize flightView=_flightView;
- (void).cxx_destruct;
- (void)flightView:(id)arg1 willShowingFlightWithIndex:(unsigned long long)arg2;
- (void)fadeLayer:(id)arg1 visible:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addFittingView:(id)arg1;
- (void)hideView:(id)arg1;
- (void)showView:(id)arg1;
- (void)showFlightView;
- (void)showErrorView;
- (void)showLoadingView;
- (void)viewDidLoad;
- (void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3;
- (void)commonInit;
- (id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2;
- (id)initWithFlights:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

