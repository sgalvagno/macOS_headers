//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICEKExporter, KNAnimatedSlideModel;

@interface ICEKPlaybackState : NSObject
{
    ICEKExporter *mExporter;
    KNAnimatedSlideModel *mCurrentSlideModel;
    unsigned long long mCurrentSlideIndex;
    unsigned long long mCurrentEventIndex;
}

@property(readonly, nonatomic) unsigned long long currentEventIndex; // @synthesize currentEventIndex=mCurrentEventIndex;
@property(readonly, nonatomic) unsigned long long currentSlideIndex; // @synthesize currentSlideIndex=mCurrentSlideIndex;
@property(readonly, nonatomic) unsigned long long currentSlideBuildEventCount;
- (id)p_currentSlideModel;
- (void)gotoSlideIndex:(unsigned long long)arg1 eventIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithExporter:(id)arg1;

@end

