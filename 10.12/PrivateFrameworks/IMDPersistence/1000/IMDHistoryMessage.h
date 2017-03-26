//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDPersistence/NSCoding-Protocol.h>

@class IMDHistoryHandle, NSAttributedString, NSDate, NSError, NSMutableArray, NSString;

@interface IMDHistoryMessage : NSObject <NSCoding>
{
    IMDHistoryHandle *_sender;
    IMDHistoryHandle *_recipient;
    NSDate *_time;
    NSAttributedString *_text;
    long long _flags;
    NSString *_guid;
    id _color;
    NSError *_error;
    NSAttributedString *_messageSubject;
    NSAttributedString *_appKitText;
    NSAttributedString *_superText;
    long long _baseWritingDirection;
    NSMutableArray *_attachments;
}

@property(retain) IMDHistoryHandle *recipient; // @synthesize recipient=_recipient;
@property(retain, nonatomic) NSAttributedString *superText; // @synthesize superText=_superText;
@property(retain) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property long long baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
@property(retain) NSAttributedString *messageSubject; // @synthesize messageSubject=_messageSubject;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id color; // @synthesize color=_color;
@property(retain) NSString *guid; // @synthesize guid=_guid;
@property long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSAttributedString *appKitText; // @synthesize appKitText=_appKitText;
@property(retain) NSDate *time; // @synthesize time=_time;
@property(retain) IMDHistoryHandle *sender; // @synthesize sender=_sender;
@property(retain) NSAttributedString *text; // @dynamic text;
- (id)description;
- (BOOL)isEmpty;
- (BOOL)isMessage;
- (BOOL)isServiceMessage;
- (BOOL)isSent;
- (BOOL)isSystemMessage;
- (BOOL)isAutoReply;
- (BOOL)isDelayed;
- (BOOL)isFromMe;
- (BOOL)isEmote;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

