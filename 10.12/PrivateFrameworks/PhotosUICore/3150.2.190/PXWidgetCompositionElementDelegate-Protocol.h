//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXWidgetCompositionElement;

@protocol PXWidgetCompositionElementDelegate <NSObject>
- (struct NSObject *)elementViewController:(PXWidgetCompositionElement *)arg1;

@optional
- (BOOL)element:(PXWidgetCompositionElement *)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)element:(PXWidgetCompositionElement *)arg1 transitionToViewController:(struct NSObject *)arg2 withTransitionType:(long long)arg3;
@end

