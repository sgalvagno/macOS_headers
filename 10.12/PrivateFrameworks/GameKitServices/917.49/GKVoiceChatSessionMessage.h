//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameKitServices/GKOOBMessage.h>

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage
{
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (unsigned int)conferenceID;
- (BOOL)_checkSize:(unsigned long long)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (unsigned int)subtype;
- (id)payload;
- (id)data;
- (void)dealloc;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

