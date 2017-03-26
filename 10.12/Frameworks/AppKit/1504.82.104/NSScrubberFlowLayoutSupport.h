//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSScrubberFlowLayout;

__attribute__((visibility("hidden")))
@interface NSScrubberFlowLayoutSupport : NSObject
{
    id _layout;
    BOOL _dynamicSizes;
    struct CGRect *_frames;
    long long _frameCount;
    NSMutableIndexSet *_dirtyIndexes;
}

@property BOOL dynamicSizes; // @synthesize dynamicSizes=_dynamicSizes;
- (void)invalidateItemsAtIndexes:(id)arg1;
- (void)invalidateEverything;
- (long long)_indexOfItemAtLocation:(double)arg1;
- (void)enumerateFramesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
@property(readonly) double contentWidth;
- (void)ensureValidLayout;
@property(nonatomic) __weak NSScrubberFlowLayout *scrubberLayout;
- (void)dealloc;
- (id)init;

@end

