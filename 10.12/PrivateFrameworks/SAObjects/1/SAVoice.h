//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject
{
}

+ (id)voiceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voice;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *masteredVersion;
@property(copy, nonatomic) NSString *languageString;
@property(copy, nonatomic) NSString *gender;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

