//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKChallengeSuggestionCell.h>

@class GKLeaderboard, GKScore;

@interface GKScoreChallengeSuggestionCell : GKChallengeSuggestionCell
{
    GKLeaderboard *_leaderboard;
}

+ (double)defaultRowHeight;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(readonly, nonatomic) GKScore *score;
- (id)iconURLString;
- (id)iconSource;
- (void)didUpdateModel;
- (void)dealloc;

@end

