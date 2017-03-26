//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge
{
    GKAchievement *_achievement;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)detailsLoaded;
- (id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2;
- (id)titleText;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;

@end

