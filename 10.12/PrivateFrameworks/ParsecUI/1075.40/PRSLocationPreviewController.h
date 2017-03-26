//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSPreviewController.h>

#import <ParsecUI/_MKPlaceViewControllerFeedbackDelegate-Protocol.h>

@class NSString, _MKPlaceViewController;

@interface PRSLocationPreviewController : PRSPreviewController <_MKPlaceViewControllerFeedbackDelegate>
{
    _MKPlaceViewController *_placeViewController;
}

+ (id)newPreviewController;
+ (id)sharedPreviewController;
@property(retain) _MKPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
- (void).cxx_destruct;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)view;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;
- (void)refresh:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

