//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKAnnotationCalloutController.h>

@class MKAnnotationView, _MKBalloonCalloutView;

@interface _MKBalloonAnnotationCalloutController : MKAnnotationCalloutController
{
    _MKBalloonCalloutView *_calloutView;
    MKAnnotationView *_annotationView;
}

@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (void)_showCalloutAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect)arg4;
- (BOOL)_isShowingCallout;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;

@end

