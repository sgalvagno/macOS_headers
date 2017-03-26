//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCandidateListTouchBarItemDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class NSCandidateListTouchBarItem, NSDictionary, NSString, NSTouchBar, PRSCoreDuet;

@interface SPTouchBarManager : NSObject <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate>
{
    BOOL _shouldLaunch;
    NSTouchBar *_candidateBar;
    NSCandidateListTouchBarItem *_candidateList;
    PRSCoreDuet *_coreDuet;
    NSDictionary *_shortcuts;
}

+ (id)sharedTouchBarManager;
@property BOOL shouldLaunch; // @synthesize shouldLaunch=_shouldLaunch;
@property(retain) NSDictionary *shortcuts; // @synthesize shortcuts=_shortcuts;
@property(retain) PRSCoreDuet *coreDuet; // @synthesize coreDuet=_coreDuet;
@property(retain, nonatomic) NSCandidateListTouchBarItem *candidateList; // @synthesize candidateList=_candidateList;
@property(retain) NSTouchBar *candidateBar; // @synthesize candidateBar=_candidateBar;
- (void).cxx_destruct;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (void)updateCandidates:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

