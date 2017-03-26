//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKPlayerPickerViewController.h>

#import <GameCenterPrivateUIMac/NSTabViewDelegate-Protocol.h>

@class GKInvitePickerDataSource, NSSet, NSString;

@interface GKInvitePickerViewController : GKPlayerPickerViewController <NSTabViewDelegate>
{
    GKInvitePickerDataSource *_invitePickerDataSource;
    NSSet *_hiddenPlayers;
}

@property(retain) NSSet *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain) GKInvitePickerDataSource *invitePickerDataSource; // @synthesize invitePickerDataSource=_invitePickerDataSource;
- (void)didBecomeReadyToDisplayData;
- (void)didEnterLoadedState;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)updateNoContentTitles;
- (void)configureNearbyDataSource;
- (void)setSupportsNearby:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (id)pickerView;
- (void)setupView;
- (void)configureDataSource;
- (id)splitingDataSource;
- (void)dealloc;
- (id)initWithGame:(id)arg1 hiddenPlayers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

