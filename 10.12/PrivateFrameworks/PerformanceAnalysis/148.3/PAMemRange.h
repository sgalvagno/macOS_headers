//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PerformanceAnalysis/NSCoding-Protocol.h>

@interface PAMemRange : NSObject <NSCoding>
{
    unsigned long long start;
    unsigned long long size;
}

+ (id)newMemRangeThatIsIntersectionOf:(id)arg1 with:(id)arg2;
@property unsigned long long size; // @synthesize size;
@property unsigned long long start; // @synthesize start;
- (BOOL)containsSwappedPages:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(unsigned long long)arg1 andSize:(unsigned long long)arg2;
- (id)description;
- (id)rangeString;
- (long long)compare:(id)arg1 equalWhenContained:(BOOL)arg2 equalWhenIntersects:(BOOL)arg3;
- (long long)compare:(id)arg1;
- (long long)compareSize:(id)arg1;
- (BOOL)isContiguous:(id)arg1;
- (BOOL)intersects:(id)arg1;
- (BOOL)contains:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isConsistent;
@property(readonly) unsigned long long end;

@end

