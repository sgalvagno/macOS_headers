//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewController.h>

@class GKGameRecord, NSArray;

@interface GKAchievementsViewController : GKCollectionViewController
{
    GKGameRecord *_gameRecord;
    NSArray *_achievements;
}

@property(retain, nonatomic) NSArray *achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showAchievementDetails:(id)arg1;
- (id)title;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end

