//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQDNameMappable.h"

@class NSString;

@interface GQDTWarning : NSObject <GQDNameMappable>
{
    struct __CFDictionary *mMetadata;
    BOOL mIgnored;
}

+ (const struct StateSpec *)stateForReading;
@property(readonly, nonatomic) BOOL ignored; // @synthesize ignored=mIgnored;
@property(readonly, nonatomic) struct __CFDictionary *metadata; // @synthesize metadata=mMetadata;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

