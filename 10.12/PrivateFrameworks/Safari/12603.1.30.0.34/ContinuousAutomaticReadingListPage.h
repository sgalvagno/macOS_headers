//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ContinuousReadingListPageItem.h>

@class WBSAutomaticReadingListItem;

__attribute__((visibility("hidden")))
@interface ContinuousAutomaticReadingListPage : ContinuousReadingListPageItem
{
    WBSAutomaticReadingListItem *_automaticReadingListItem;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) WBSAutomaticReadingListItem *automaticReadingListItem; // @synthesize automaticReadingListItem=_automaticReadingListItem;
- (void).cxx_destruct;
- (id)reposterScreenName;
- (id)reposterDisplayName;
- (BOOL)isRepostedByAuthenticatedUser;
- (id)screenName;
- (BOOL)isSocial;
- (BOOL)hasDefaultSiteIcon;
- (id)secondaryIcon;
- (id)icon;
- (id)itemDescription;
- (id)title;
- (id)urlString;
- (id)representedReadingListItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAutomaticReadingListItem:(id)arg1;

@end

