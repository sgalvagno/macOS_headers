//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPCommentContent, CKDPDate, CKDPIdentifier, CKDPLikeInfo, NSString;

__attribute__((visibility("hidden")))
@interface CKDPComment : PBCodable <NSCopying>
{
    CKDPCommentContent *_commentContent;
    CKDPIdentifier *_commentId;
    CKDPDate *_createdAt;
    CKDPIdentifier *_from;
    CKDPLikeInfo *_likeInfo;
    NSString *_path;
}

@property(retain, nonatomic) CKDPLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(retain, nonatomic) CKDPCommentContent *commentContent; // @synthesize commentContent=_commentContent;
@property(retain, nonatomic) CKDPIdentifier *from; // @synthesize from=_from;
@property(retain, nonatomic) CKDPDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) CKDPIdentifier *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLikeInfo;
@property(readonly, nonatomic) BOOL hasCommentContent;
@property(readonly, nonatomic) BOOL hasFrom;
@property(readonly, nonatomic) BOOL hasCreatedAt;
@property(readonly, nonatomic) BOOL hasPath;
@property(readonly, nonatomic) BOOL hasCommentId;

@end

