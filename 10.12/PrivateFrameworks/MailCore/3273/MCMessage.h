//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/ECMessage-Protocol.h>
#import <MailCore/MCMessageSortingInterface-Protocol.h>

@class MCDisplayNameInfo, MCMessageHeaders, MCMimeBody, MCParsedMessage, NSArray, NSColor, NSData, NSDate, NSMutableSet, NSSet, NSString, NSUUID;
@protocol ECMimePart, MCMailAccount, MCMailbox, MCMessageDataSource;

@interface MCMessage : NSObject <MCMessageSortingInterface, ECMessage>
{
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSString *_sender;
    NSData *_messageIDHeaderDigest;
    NSData *_inReplyToHeaderDigest;
    NSUUID *_documentID;
    CDStruct_7ad7028e _messageColor;
    BOOL _type;
    double _dateSentInterval;
    double _dateReceivedInterval;
    double _dateLastViewedInterval;
    id <MCMessageDataSource> _dataSource;
    // Error parsing type: Aq, name: _messageFlags
    unsigned char _subjectPrefixLength;
    NSMutableSet *_gmailLabels;
    BOOL _recipientType;
    BOOL _markedForOverwrite;
    long long _conversationID;
}

+ (BOOL)isMessageURLString:(id)arg1;
+ (long long)displayablePriorityForPriority:(long long)arg1;
+ (long long)validatePriority:(long long)arg1;
+ (BOOL)messageColorIsValid:(CDStruct_7ad7028e)arg1;
+ (BOOL)allMessages:(id)arg1 areSameType:(BOOL)arg2;
+ (unsigned char)subjectPrefixLengthUnknown;
+ (id)unreadMessagesFromMessages:(id)arg1;
+ (BOOL)_messageTypeForMessageTypeKey:(id)arg1;
+ (id)messageTypeKeyForMessageType:(BOOL)arg1;
+ (id)descriptionForType:(BOOL)arg1 plural:(BOOL)arg2;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (id)messageWithRFC822Data:(id)arg1 sanitizeData:(BOOL)arg2;
+ (id)messageWithRFC822Data:(id)arg1;
+ (void)initialize;
@property(readonly) long long conversationID; // @synthesize conversationID=_conversationID;
@property BOOL markedForOverwrite; // @synthesize markedForOverwrite=_markedForOverwrite;
@property BOOL recipientType; // @synthesize recipientType=_recipientType;
@property double primitiveDateLastViewedInterval; // @synthesize primitiveDateLastViewedInterval=_dateLastViewedInterval;
@property double primitiveDateReceivedInterval; // @synthesize primitiveDateReceivedInterval=_dateReceivedInterval;
@property double primitiveDateSentInterval; // @synthesize primitiveDateSentInterval=_dateSentInterval;
@property BOOL primitiveMessageType; // @synthesize primitiveMessageType=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <ECMimePart> messageBody;
@property(readonly, nonatomic) MCParsedMessage *parsedMessage;
- (id)imageArchiveURL;
- (void)_updateAttributeSet:(id)arg1 includingHTML:(BOOL)arg2 withParsedMessage:(id)arg3 orderedAttachments:(id *)arg4;
- (id)_searchableItemWithHTML:(id)arg1 parsedMessage:(id)arg2 updatableAttributesOnly:(BOOL)arg3 outOrderedAttachments:(id *)arg4;
- (id)searchableItemWithHTML:(id)arg1 parsedMessage:(id)arg2 updatableAttributesOnly:(BOOL)arg3;
- (void)setAttachmentFilenames:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4 force:(BOOL)arg5;
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4;
- (void)setAttachmentInfoFromBody:(id)arg1;
@property(readonly) NSData *headerData;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSData *bodyData;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, copy) NSArray *listUnsubscribe;
- (id)URLStringWithHeaders:(id)arg1;
@property(readonly, copy, nonatomic) NSString *URLStringIfAvailable;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)_URLStringWithHeaders:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *remoteMailboxURLString;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly) CDStruct_7ad7028e messageColor;
@property(readonly, nonatomic) unsigned int uid;
@property(readonly, copy) NSString *remoteID;
@property(readonly, copy) NSArray *references;
- (void)setMessageInfoFromMessage:(id)arg1;
- (void)setMessageInfo:(id)arg1 subjectPrefixLength:(unsigned char)arg2 to:(id)arg3 cc:(id)arg4 sender:(id)arg5 type:(BOOL)arg6 dateReceivedTimeIntervalSince1970:(double)arg7 dateSentTimeIntervalSince1970:(double)arg8 messageIDHeaderDigest:(id)arg9 inReplyToHeaderDigest:(id)arg10 dateLastViewedTimeIntervalSince1970:(double)arg11;
@property(readonly) BOOL conversationMuted;
@property(readonly) BOOL conversationVIP;
@property(readonly) BOOL senderVIP;
@property(readonly) BOOL junk;
@property(readonly) BOOL answered;
@property(readonly) BOOL flagged;
@property(copy) NSArray *cc;
@property(copy) NSArray *to;
@property(readonly, nonatomic) MCDisplayNameInfo *senderDisplayNameInfo;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly, copy) NSString *senderIfAvailable;
@property(copy) NSString *sender;
@property(readonly, copy) NSArray *from;
@property double dateLastViewedAsTimeIntervalSince1970;
@property(readonly) NSDate *dateLastViewed;
@property double dateSentAsTimeIntervalSince1970;
@property(readonly) NSDate *dateSent;
@property double dateReceivedAsTimeIntervalSince1970;
@property(readonly) NSDate *dateReceived;
@property(readonly, nonatomic) BOOL shouldImmediatelyCalculateSnippets;
@property(readonly, nonatomic) BOOL supportsSnippets;
@property unsigned long long subjectPrefixLength;
@property(copy) NSString *subject;
@property(readonly, copy) NSString *subjectIfAvailable;
@property(readonly, copy, nonatomic) NSString *subjectNotIncludingReAndFwdPrefix;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1 type:(BOOL)arg2;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (id)_newDateFromDateHeaderInHeaders:(id)arg1;
- (id)_newDateFromHeader:(id)arg1 inHeaders:(id)arg2;
- (id)_newDateFromReceivedHeadersInHeaders:(id)arg1;
- (id)rawSourceFromHeaders:(id)arg1 body:(id)arg2;
@property(readonly, nonatomic) long long priority;
- (void)setPriorityFromHeaders:(id)arg1;
@property(readonly, nonatomic) long long junkMailLevel;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL hasCalculatedNumberOfAttachments;
@property(readonly, nonatomic) BOOL isPartialMessageBodyAvailable;
@property(readonly, nonatomic) BOOL isMessageContentLocallyAvailable;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly, copy) NSData *rawInReplyToHeaderDigest;
@property(copy) NSData *inReplyToHeaderDigest;
- (void)unlockedSetInReplyToHeaderDigest:(id)arg1;
@property(readonly, nonatomic) BOOL isReply;
@property(readonly, copy) NSData *rawMessageIDHeaderDigest;
- (void)setMessageIDHeaderDigest:(id)arg1;
- (void)unlockedSetMessageIDHeaderDigest:(id)arg1;
@property(readonly, copy) NSData *messageIDHeaderDigest;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(readonly, nonatomic) unsigned long long messageSize;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;
- (void)setPrimitiveColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;
@property BOOL colorHasBeenEvaluated;
- (void)setPrimitiveColorHasBeenEvaluated:(BOOL)arg1;
@property(copy) NSColor *color;
- (void)setPrimitiveColor:(id)arg1;
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) int colorForSort;
@property(readonly, nonatomic) int colorIntValue;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (void)removeGmailLabels:(id)arg1;
- (void)addGmailLabels:(id)arg1;
@property(retain) NSSet *gmailLabels;
- (void)setPrimitiveMessageFlags:(long long)arg1 mask:(long long)arg2;
@property(readonly, nonatomic) long long primitiveMessageFlags;
- (void)setMessageFlags:(long long)arg1 mask:(long long)arg2;
@property(readonly, nonatomic) long long messageFlags;
@property(copy) NSUUID *documentID;
@property(readonly, nonatomic) BOOL isMessageMeeting;
@property(readonly, nonatomic) BOOL isEditable;
@property BOOL type;
@property(readonly, nonatomic) MCMessageHeaders *headersIfAvailable;
@property(readonly) MCMessageHeaders *headers;
- (void)_cacheMessageBodyDataIfPossible:(id)arg1;
@property(readonly, copy) NSData *cachedMessageBodyData;
- (void)_cacheMimeBodyIfPossible:(id)arg1;
@property(readonly) MCMimeBody *cachedMimeBody;
- (void)_cacheHeaderDataIfPossible:(id)arg1;
@property(readonly, copy) NSData *cachedHeaderData;
- (void)_cacheHeadersIfPossible:(id)arg1;
@property(readonly) MCMessageHeaders *cachedHeaders;
- (void)uncacheBodyAndHeader;
- (void)cacheBodyAndHeader;
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) BOOL dataSourceShouldBeSet;
@property(readonly, nonatomic) __weak id <MCMessageDataSource> primitiveDataSource;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

