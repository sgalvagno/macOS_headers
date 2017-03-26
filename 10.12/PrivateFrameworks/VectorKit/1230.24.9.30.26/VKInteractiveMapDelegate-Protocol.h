//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError, VKOverlayPainter;
@protocol VKInteractiveMap, VKOverlay, VKTrackableAnnotation, VKTrackableAnnotationPresentation;

@protocol VKInteractiveMapDelegate <NSObject>
- (void)map:(id <VKInteractiveMap>)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapLabelsDidLayout:(id <VKInteractiveMap>)arg1;
- (void)map:(id <VKInteractiveMap>)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 flyoverModeDidChange:(int)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 flyoverModeWillChange:(int)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didBecomePitched:(BOOL)arg2;
- (VKOverlayPainter *)map:(id <VKInteractiveMap>)arg1 painterForOverlay:(id <VKOverlay>)arg2;
- (id <VKTrackableAnnotationPresentation>)map:(id <VKInteractiveMap>)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)mapDidFinishInitialTrackingAnimation:(id <VKInteractiveMap>)arg1;
- (void)map:(id <VKInteractiveMap>)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(CDStruct_51745937)arg1;
- (void)mapDidFailLoadingTiles:(id <VKInteractiveMap>)arg1 withError:(NSError *)arg2;
- (void)mapDidFinishLoadingTiles:(id <VKInteractiveMap>)arg1;
- (void)mapDidStartLoadingTiles:(id <VKInteractiveMap>)arg1;
- (void)mapDidBecomeFullyDrawn:(id <VKInteractiveMap>)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id <VKInteractiveMap>)arg1;
- (void)mapDidChangeVisibleRegion:(id <VKInteractiveMap>)arg1;

@optional
- (void)map:(id <VKInteractiveMap>)arg1 didChangeOrientation:(double)arg2 snapped:(BOOL)arg3;
- (void)mapDidReloadStylesheet:(id <VKInteractiveMap>)arg1;
- (void)map:(id <VKInteractiveMap>)arg1 didUpdateContainsOverlay:(BOOL)arg2;
@end

