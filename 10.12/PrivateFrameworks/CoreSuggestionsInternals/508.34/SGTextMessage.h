//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessage.h>

@class CSPerson, NSArray, NSString;

@interface SGTextMessage : SGMessage
{
    BOOL _senderIsAccountOwner;
    CSPerson *_sender;
    NSArray *_recipients;
    NSString *_conversationIdentifier;
}

@property(readonly) BOOL senderIsAccountOwner; // @synthesize senderIsAccountOwner=_senderIsAccountOwner;
@property(retain) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) CSPerson *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;

@end

