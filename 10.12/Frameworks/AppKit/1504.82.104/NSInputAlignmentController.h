//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSInputAlignmentControllerDelegate;

@interface NSInputAlignmentController : NSObject
{
    id <NSInputAlignmentControllerDelegate> _delegate;
    NSMutableArray *_sessions;
    id _reserved0;
}

+ (struct CGPoint)alignmentDeltaFromMatches:(id)arg1;
@property __weak id <NSInputAlignmentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAlignmentStateForItem:(id)arg1;
- (void)setAlignmentGuides:(id)arg1 affectingItem:(id)arg2;
- (id)checkAlignmentOfItem:(id)arg1;
- (id)alignItem:(id)arg1 usingFilter:(id)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)_delegateShouldAlignOnMatch:(id)arg1;
- (id)_sessionForItem:(id)arg1;

@end

