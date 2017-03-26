//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewCell.h>

@class NSDictionary, NSImageView, NSTextField;

@interface GKLeaderboardListCell : GKCollectionViewCell
{
    NSDictionary *_metricsOverrides;
    NSImageView *_iconView;
    NSTextField *_nameLabel;
    NSTextField *_ranksLabel;
}

+ (double)defaultRowHeight;
+ (id)itemHeightList;
@property NSTextField *ranksLabel; // @synthesize ranksLabel=_ranksLabel;
@property NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property NSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSDictionary *metricsOverrides; // @synthesize metricsOverrides=_metricsOverrides;
- (void)didUpdateModel;
- (id)leaderboard;
- (void)dealloc;

@end

