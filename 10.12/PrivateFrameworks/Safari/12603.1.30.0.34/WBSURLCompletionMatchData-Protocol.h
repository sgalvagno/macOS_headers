//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString;
@protocol WBSURLCompletionMatchData;

@protocol WBSURLCompletionMatchData <NSObject>
@property(readonly, nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) BOOL containsBookmark;
@property(readonly, nonatomic) NSString *originalURLString;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (BOOL)matchesAutocompleteTrigger:(NSString *)arg1;
- (NSString *)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (NSString *)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(void (^)(NSString *, unsigned long long, char *))arg1;
- (NSString *)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (NSString *)pageTitleAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(void (^)(NSString *, unsigned long long, char *))arg1;
- (id <WBSURLCompletionMatchData>)matchDataByMergingWithMatchData:(id <WBSURLCompletionMatchData>)arg1;

@optional
@property(readonly, nonatomic) long long visitCount;
@end

