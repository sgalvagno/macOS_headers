//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, NSURL, SAUIAppPunchOut;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>
{
}

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswer;
@property(copy, nonatomic) NSArray *thumbnails;
@property(copy, nonatomic) NSURL *searchUri;
@property(copy, nonatomic) NSString *query;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *link;
@property(copy, nonatomic) NSString *displayLink;
@property(copy, nonatomic) NSString *descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

