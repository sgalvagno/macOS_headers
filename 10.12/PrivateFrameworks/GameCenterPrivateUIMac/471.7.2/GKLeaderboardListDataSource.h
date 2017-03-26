//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasicCollectionViewDataSource.h>

@class GKGameRecord, GKLeaderboardSet, GKPlayer;

@interface GKLeaderboardListDataSource : GKBasicCollectionViewDataSource
{
    GKLeaderboardSet *_leaderboardSet;
    GKGameRecord *_game;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGameRecord *game; // @synthesize game=_game;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)configureCollectionView:(id)arg1;
- (id)sectionTitle;
- (void)dealloc;
- (id)initWithGame:(id)arg1 player:(id)arg2;
- (id)initWithLeaderboardSet:(id)arg1 game:(id)arg2 player:(id)arg3;

@end

