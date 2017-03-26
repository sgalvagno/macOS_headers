//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRLink : SCRMapElement
{
    BOOL _computedMissingDescription;
}

- (BOOL)isLink;
- (id)readContentsElement;
- (unsigned long long)groupBehavior;
- (BOOL)shouldIncludeDescendants;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)isMissingDescription;
- (void)addItemNameDescriptionToRequest:(id)arg1;
- (void)addItemNameContentToRequest:(id)arg1;
- (void)_addDescriptionString:(id)arg1 toRequest:(id)arg2;
- (void)_itemBraillePostFeedbackHandler:(id)arg1;
- (void)itemPostFeedbackHandler:(id)arg1;
- (void)itemPreFeedbackHandler:(id)arg1;
- (id)valueDescription;
- (id)helpDescription;
- (id)titleDescription;
- (void)addItemTypeToRequest:(id)arg1;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (BOOL)isInternalLink;

@end

