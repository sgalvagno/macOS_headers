//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSColorWell;

@interface HSTracker.PlayerTrackersPreferences : NSViewController
{
    // Error parsing type: , name: showPlayerTracker
    // Error parsing type: , name: showPlayerCardCount
    // Error parsing type: , name: showPlayerDrawChance
    // Error parsing type: , name: showPlayerGet
    // Error parsing type: , name: showCthunCounter
    // Error parsing type: , name: showSpellCounter
    // Error parsing type: , name: showDeathrattleCounter
    // Error parsing type: , name: flashOnDraw
    // Error parsing type: , name: showRecord
    // Error parsing type: , name: inHandColor
    // Error parsing type: , name: showBoardDamage
    // Error parsing type: , name: showDeckName
    // Error parsing type: , name: showGraveyard
    // Error parsing type: , name: showGraveyardDetails
    // Error parsing type: , name: showJadeCounter
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)checkboxClicked:(id)arg1;
- (void)colorChange:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSButton *showJadeCounter; // @synthesize showJadeCounter;
@property(nonatomic) __weak NSButton *showGraveyardDetails; // @synthesize showGraveyardDetails;
@property(nonatomic) __weak NSButton *showGraveyard; // @synthesize showGraveyard;
@property(nonatomic) __weak NSButton *showDeckName; // @synthesize showDeckName;
@property(nonatomic) __weak NSButton *showBoardDamage; // @synthesize showBoardDamage;
@property(nonatomic) __weak NSColorWell *inHandColor; // @synthesize inHandColor;
@property(nonatomic) __weak NSButton *showRecord; // @synthesize showRecord;
@property(nonatomic) __weak NSButton *flashOnDraw; // @synthesize flashOnDraw;
@property(nonatomic) __weak NSButton *showDeathrattleCounter; // @synthesize showDeathrattleCounter;
@property(nonatomic) __weak NSButton *showSpellCounter; // @synthesize showSpellCounter;
@property(nonatomic) __weak NSButton *showCthunCounter; // @synthesize showCthunCounter;
@property(nonatomic) __weak NSButton *showPlayerGet; // @synthesize showPlayerGet;
@property(nonatomic) __weak NSButton *showPlayerDrawChance; // @synthesize showPlayerDrawChance;
@property(nonatomic) __weak NSButton *showPlayerCardCount; // @synthesize showPlayerCardCount;
@property(nonatomic) __weak NSButton *showPlayerTracker; // @synthesize showPlayerTracker;

@end

