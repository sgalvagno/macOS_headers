//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVIterableCache;

__attribute__((visibility("hidden")))
@interface AVVideoTrackThumbnailManager : NSObject
{
    AVIterableCache *_cachedThumbnails;
}

- (void).cxx_destruct;
- (struct CGImage *)_thumbnailImageClosestToTime:(double)arg1;
- (id)thumbnailWithTime:(double)arg1;
- (id)thumbnailsWithTimes:(id)arg1;
- (id)allThumbnails;
- (id)timesOfThumbnailsWithPlaceholderImage;
- (void)setImage:(struct CGImage *)arg1 forTime:(double)arg2;
- (void)addThumbnailWithTime:(double)arg1 index:(unsigned long long)arg2 zoomFactor:(unsigned long long)arg3;
@property(readonly) unsigned long long count;
- (id)init;

@end

