//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OITSUProgress.h>

@class OITSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface OITSUBasicProgress : OITSUProgress
{
    OITSUBasicProgressStorage *mStorage;
}

@property(getter=isIndeterminate) BOOL indeterminate;
- (double)maxValue;
@property double value;
- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;

@end

