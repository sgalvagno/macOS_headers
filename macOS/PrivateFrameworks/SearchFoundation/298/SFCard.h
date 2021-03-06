//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCard-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface SFCard : NSObject <SFCard, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int type:1;
        unsigned int source:1;
        unsigned int queryId:1;
        unsigned int flexibleSectionOrder:1;
    } _has;
    BOOL _flexibleSectionOrder;
    int _type;
    int _source;
    NSString *_title;
    NSArray *_cardSections;
    NSData *_intentMessageData;
    NSString *_intentMessageName;
    NSData *_intentResponseMessageData;
    NSString *_intentResponseMessageName;
    NSArray *_dismissalCommands;
    NSString *_cardId;
    NSString *_contextReferenceIdentifier;
    NSURL *_urlValue;
    NSData *_entityIdentifier;
    NSString *_resultIdentifier;
    unsigned long long _queryId;
    NSString *_fbr;
    NSArray *_entityProtobufMessages;
    NSData *_originalCardData;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic, getter=_originalCardData, setter=_setOriginalCardData:) NSData *originalCardData; // @synthesize originalCardData=_originalCardData;
@property(copy, nonatomic) NSArray *entityProtobufMessages; // @synthesize entityProtobufMessages=_entityProtobufMessages;
@property(nonatomic) BOOL flexibleSectionOrder; // @synthesize flexibleSectionOrder=_flexibleSectionOrder;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSURL *urlValue; // @synthesize urlValue=_urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier; // @synthesize contextReferenceIdentifier=_contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSArray *dismissalCommands; // @synthesize dismissalCommands=_dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName; // @synthesize intentResponseMessageName=_intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData; // @synthesize intentResponseMessageData=_intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName; // @synthesize intentMessageName=_intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData; // @synthesize intentMessageData=_intentMessageData;
@property(copy) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasFlexibleSectionOrder;
- (BOOL)hasQueryId;
- (BOOL)hasSource;
- (BOOL)hasType;
- (void)loadCardSectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

