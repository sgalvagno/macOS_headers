//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMCancelable-Protocol.h>

@class NSMutableArray, NSString;

@interface FMCancelationToken : NSObject <FMCancelable>
{
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)callCancelationBlocks:(id)arg1;
- (BOOL)isCanceled;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (id)nts_cancel;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

