//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSEvent, SiriSuggestionsStartPageLinkRecommendationItem;

@protocol SiriSuggestionsStartPageLinkRecommendationDelegate <NSObject>

@optional
- (void)willReuseItem:(SiriSuggestionsStartPageLinkRecommendationItem *)arg1;
- (void)didRenameTitleOfItem:(SiriSuggestionsStartPageLinkRecommendationItem *)arg1;
- (void)didPerformContextMenuShowingEventForItem:(SiriSuggestionsStartPageLinkRecommendationItem *)arg1 withEvent:(NSEvent *)arg2;
- (void)didSelectItem:(SiriSuggestionsStartPageLinkRecommendationItem *)arg1 withEvent:(NSEvent *)arg2;
@end

