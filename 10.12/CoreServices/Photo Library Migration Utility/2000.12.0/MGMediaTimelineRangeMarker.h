//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface MGMediaTimelineRangeMarker : NSObject
{
    id _representedObject;
    CDStruct_977f9211 _mediaTimeRange;
}

+ (id)rangeMarkerWithRepresentedObject:(id)arg1 mediaTimeRange:(CDStruct_977f9211)arg2;
@property(readonly, nonatomic) CDStruct_977f9211 mediaTimeRange; // @synthesize mediaTimeRange=_mediaTimeRange;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void)dealloc;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1 mediaTimeRange:(CDStruct_977f9211)arg2;

@end

