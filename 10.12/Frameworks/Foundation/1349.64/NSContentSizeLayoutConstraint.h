//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint
{
    double _huggingPriority;
    double _compressionResistancePriority;
}

@property(readonly) double compressionResistancePriority; // @synthesize compressionResistancePriority=_compressionResistancePriority;
@property(readonly) double huggingPriority; // @synthesize huggingPriority=_huggingPriority;
- (id)_priorityDescription;
- (double)priorityForVariable:(id)arg1;
- (id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5;

@end

