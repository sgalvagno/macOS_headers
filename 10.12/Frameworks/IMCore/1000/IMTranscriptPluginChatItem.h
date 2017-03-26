//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

#import <IMCore/IMPluginChatItemProtocol-Protocol.h>

@class IMBalloonPluginDataSource, IMPluginPayload, NSString;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol>
{
    BOOL _isLastChatItemOfPluginType;
    BOOL _hasSetIsLastChatItemOfPluginType;
    IMPluginPayload *_initialPayload;
    NSString *_bundleIdentifier;
    IMBalloonPluginDataSource *_dataSource;
}

@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL hasSetIsLastChatItemOfPluginType; // @synthesize hasSetIsLastChatItemOfPluginType=_hasSetIsLastChatItemOfPluginType;
@property(nonatomic, setter=setLastChatItemOfPluginType:) BOOL isLastChatItemOfPluginType; // @synthesize isLastChatItemOfPluginType=_isLastChatItemOfPluginType;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) IMPluginPayload *initialPayload; // @synthesize initialPayload=_initialPayload;
- (void).cxx_destruct;
- (BOOL)wantsAutoPlayback;
@property(readonly, nonatomic) BOOL isSaved;
@property(readonly, nonatomic) BOOL isPlayed;
@property(readonly, nonatomic) unsigned long long playbackType;
@property(readonly, nonatomic) NSString *pluginSessionGUID;
@property(readonly, nonatomic) BOOL isDataSourceInitialized;
- (id)_initWithItem:(id)arg1 initialPayload:(id)arg2 messagePartRange:(struct _NSRange)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSString *type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly) Class superclass;

@end

