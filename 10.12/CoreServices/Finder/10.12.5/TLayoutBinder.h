//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSView;

@interface TLayoutBinder : NSObject <NSCopying>
{
    NSView *_slaveView;
    struct TLayoutBinding _layoutBinding;
    struct unordered_map<TNSRef<NSView *, void>, std::__1::pair<unsigned long, TNotificationCenterObserver>, std::__1::hash<TNSRef<NSView *, void>>, std::__1::equal_to<TNSRef<NSView *, void>>, std::__1::allocator<std::__1::pair<const TNSRef<NSView *, void>, std::__1::pair<unsigned long, TNotificationCenterObserver>>>> _observedMasterViews;
}

@property(readonly) NSView *slaveView; // @synthesize slaveView=_slaveView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getMaxDelta:(double *)arg1 minDelta:(double *)arg2 fromSideBinding:(const struct TSideLayoutBinding *)arg3 superviewIsFlipped:(_Bool)arg4;
- (void)getNewOrigin:(double *)arg1 newSize:(double *)arg2 suspendMinBinding:(_Bool *)arg3 fromMaxBinding:(struct TSideLayoutBinding *)arg4 fromMinBinding:(struct TSideLayoutBinding *)arg5 masterView:(id)arg6 masterViewFrame:(const struct CGRect *)arg7 superviewIsFlipped:(_Bool)arg8;
- (void)masterViewFrameChanged:(id)arg1;
- (void)stopObservingMasterView:(id)arg1;
- (void)startObservingMasterView:(id)arg1;
- (void)clearBinding:(struct TSideLayoutBinding *)arg1;
- (void)setBinding:(id)arg1 kind:(int)arg2 sideBinding:(struct TSideLayoutBinding *)arg3;
- (void)clearRightBinding;
- (void)setRightBinding:(id)arg1 kind:(int)arg2;
- (void)getRightBinding:(id *)arg1 kind:(int *)arg2;
- (void)anchorRightBinding;
- (id)rightMasterView;
- (int)rightBindingKind;
- (void)clearLeftBinding;
- (void)setLeftBinding:(id)arg1 kind:(int)arg2;
- (void)getLeftBinding:(id *)arg1 kind:(int *)arg2;
- (void)anchorLeftBinding;
- (id)leftMasterView;
- (int)leftBindingKind;
- (void)clearBottomBinding;
- (void)setBottomBinding:(id)arg1 kind:(int)arg2;
- (void)getBottomBinding:(id *)arg1 kind:(int *)arg2;
- (void)anchorBottomBinding;
- (id)bottomMasterView;
- (int)bottomBindingKind;
- (void)clearTopBinding;
- (void)setTopBinding:(id)arg1 kind:(int)arg2;
- (void)getTopBinding:(id *)arg1 kind:(int *)arg2;
- (void)anchorTopBinding;
- (id)topMasterView;
- (int)topBindingKind;
- (void)clearBindings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSlaveView:(id)arg1;

@end

