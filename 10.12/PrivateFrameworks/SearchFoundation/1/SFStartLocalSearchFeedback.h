//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFStartSearchFeedback.h>

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback
{
    unsigned long long _indexType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3;

@end

