//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASportsSeason : AceObject <SAAceSerializable>
{
}

+ (id)seasonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)season;
@property(copy, nonatomic) NSNumber *seasonYear;
@property(copy, nonatomic) NSString *relativeSeasonYear;
@property(copy, nonatomic) NSNumber *currentSeasonYear;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

