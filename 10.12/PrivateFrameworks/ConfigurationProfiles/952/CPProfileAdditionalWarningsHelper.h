//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CPProfileAdditionalWarningsHelper : NSObject
{
    NSMutableArray *fWarnings;
    NSString *fPayloadUUID;
}

+ (id)helperForPayload:(id)arg1 forProfile:(id)arg2;
- (void)addWarningWithTitle:(id)arg1 message:(id)arg2;
- (id)warnings;
- (void)dealloc;
- (id)initForPayload:(id)arg1 forProfile:(id)arg2;

@end

