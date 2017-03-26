//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/RDLibraryUpgradeProgressSupport-Protocol.h>

@class NSError, NSString, RDDatabase, RDLibraryUpgradeProgress;
@protocol OS_dispatch_group, RDLibraryUpgradeActionCache;

@interface RDLibraryUpgradePhaseProcessor : NSObject <RDLibraryUpgradeProgressSupport>
{
    RDLibraryUpgradeProgress *_phaseProgress;
    NSError *_error;
    int _errorSpinlock;
    int _progressSpinlock;
    BOOL _recloneOnError;
    RDDatabase *_database;
    id <RDLibraryUpgradeActionCache> _delegate;
    CDUnknownBlockType _phaseBlock;
    NSObject<OS_dispatch_group> *_group;
}

+ (long long)progressCount;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(copy) CDUnknownBlockType phaseBlock; // @synthesize phaseBlock=_phaseBlock;
@property(readonly) __weak id <RDLibraryUpgradeActionCache> delegate; // @synthesize delegate=_delegate;
@property BOOL recloneOnError; // @synthesize recloneOnError=_recloneOnError;
@property(readonly) RDDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)newProgressWithTotalCount:(long long)arg1 percentPendingUnitCount:(double)arg2;
- (long long)progressCountFromPercentOfTotal:(double)arg1;
- (void)atomicallyIncrementCompletedUnitCountForProgress:(id)arg1 increment:(long long)arg2;
- (void)atomicallyIncrementCompletedUnitCountBy:(long long)arg1;
@property(retain) NSError *error;
- (void)actionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)progress;
- (id)phaseName;
- (unsigned short)outerErrorCode;
- (void)setupDefaults;
- (id)initWithDatabase:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

