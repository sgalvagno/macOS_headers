//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiMessage.h>

@class LiProgress, NSError;

@interface LiReply : LiMessage
{
    unsigned char _requestType;
    unsigned char _replyStatus;
    NSError *_error;
    LiProgress *_progress;
}

+ (unsigned char)encodingObjectType;
+ (BOOL)isReply:(id)arg1;
@property(readonly, nonatomic) LiProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned char replyStatus; // @synthesize replyStatus=_replyStatus;
@property(readonly, nonatomic) unsigned char requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (BOOL)appendToDescription:(id)arg1 forProperty:(SEL)arg2;
- (id)typeString;
- (BOOL)isPartial;
- (BOOL)hasProgress;
- (BOOL)hasError;
- (BOOL)isComplete;
- (id)initWithStatus:(unsigned char)arg1 forRequest:(id)arg2;
- (id)initWithReplyType:(unsigned char)arg1 status:(unsigned char)arg2 forRequest:(id)arg3;
- (id)initWithReplyType:(unsigned char)arg1 status:(unsigned char)arg2 progress:(id)arg3 forRequest:(id)arg4;
- (id)initWithProgress:(id)arg1 forRequest:(id)arg2;
- (id)initErrorReply:(id)arg1 forRequest:(id)arg2;

@end

