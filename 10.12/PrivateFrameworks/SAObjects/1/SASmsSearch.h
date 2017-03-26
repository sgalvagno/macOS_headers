//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber, NSString, SASmsGroupName;

@interface SASmsSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *unread;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSDate *start;
@property(retain, nonatomic) SASmsGroupName *smsGroup;
@property(copy, nonatomic) NSArray *senders;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSDate *end;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

