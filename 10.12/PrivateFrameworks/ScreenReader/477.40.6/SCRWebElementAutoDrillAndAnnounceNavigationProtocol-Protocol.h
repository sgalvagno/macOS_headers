//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class SCREvent, SCROutputRequest;

@protocol SCRWebElementAutoDrillAndAnnounceNavigationProtocol
- (void)focusOntoAutoDrillAndAnnouceWebElement:(SCROutputRequest *)arg1;
- (BOOL)webElementSuperInteractRightWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (BOOL)webElementSuperInteractLeftWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (BOOL)webElementSuperInteractDownWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (BOOL)webElementSuperInteractUpWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (void)addEndBookendToRequest:(SCROutputRequest *)arg1;
- (void)addStartBookendToRequest:(SCROutputRequest *)arg1;
- (void)setFocusArrivedFromFront:(BOOL)arg1;
- (BOOL)focusArrivedFromFront;
- (void)setFocusIsOnElement:(BOOL)arg1;
- (BOOL)focusIsOnElement;
@end

