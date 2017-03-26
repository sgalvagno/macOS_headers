//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewController.h>

#import <GameCenterPrivateUIMac/GKChallengeDetailDelegate-Protocol.h>

@class GKChallenge, GKChallengeDetailViewController, GKChallengesDataSource, GKGame, GKPlayer, NSIndexPath, NSString;

@interface GKChallengesViewController : GKCollectionViewController <GKChallengeDetailDelegate>
{
    GKPlayer *_player;
    GKGame *_game;
    GKChallenge *_selectedChallenge;
    GKChallengeDetailViewController *_detailController;
    NSIndexPath *_indexPathOfSelectedChallenge;
}

+ (id)challengesControllerForPlayer:(id)arg1 inGame:(id)arg2;
+ (id)challengesControllerForPlayer:(id)arg1;
@property(retain) NSIndexPath *indexPathOfSelectedChallenge; // @synthesize indexPathOfSelectedChallenge=_indexPathOfSelectedChallenge;
@property(retain) GKChallengeDetailViewController *detailController; // @synthesize detailController=_detailController;
@property(retain) GKChallenge *selectedChallenge; // @synthesize selectedChallenge=_selectedChallenge;
@property(retain) GKGame *game; // @synthesize game=_game;
@property(retain) GKPlayer *player; // @synthesize player=_player;
- (void)challengeDetailViewController:(id)arg1 playChallenge:(id)arg2;
- (void)challengeDetailViewController:(id)arg1 declinedChallenge:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureShowMore:(id)arg1;
- (void)configureSectionHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)configureDataSource;
- (void)restoreSelectedChallenge;
- (void)didEnterNoContentState;
- (void)didExitRefreshingState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
@property(readonly) GKChallengesDataSource *challengesDataSource;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 game:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

