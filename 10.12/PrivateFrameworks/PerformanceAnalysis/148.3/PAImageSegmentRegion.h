//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PerformanceAnalysis/PAMemRegion.h>

#import <PerformanceAnalysis/NSCoding-Protocol.h>

@class NSString, PAImageSegment;

@interface PAImageSegmentRegion : PAMemRegion <NSCoding>
{
    PAImageSegment *segment;
    NSString *segmentName;
    NSString *imageName;
    NSString *imagePath;
}

@property(retain) NSString *segmentName; // @synthesize segmentName;
@property(retain) NSString *imagePath; // @synthesize imagePath;
@property(retain) NSString *imageName; // @synthesize imageName;
@property(retain) PAImageSegment *segment; // @synthesize segment;
- (id)regionTypeSpecificString;
- (id)residentAndInfoString;
- (id)segmentInfoString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithVMRegionInfo:(CDStruct_544688f7 *)arg1 process:(id)arg2 andSegment:(id)arg3;

@end

