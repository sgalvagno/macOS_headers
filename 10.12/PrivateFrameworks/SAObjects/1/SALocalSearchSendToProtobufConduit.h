//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSData, NSURL;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand
{
}

+ (id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendToProtobufConduit;
- (BOOL)requiresResponse;
@property(nonatomic) long long timeoutInSeconds;
@property(copy, nonatomic) NSData *rawRequest;
@property(copy, nonatomic) NSURL *endpoint;
@property(copy, nonatomic) NSArray *attributes;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

