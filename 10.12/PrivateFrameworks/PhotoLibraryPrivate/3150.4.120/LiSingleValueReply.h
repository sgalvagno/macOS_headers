//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@interface LiSingleValueReply : LiReply
{
    unsigned long long _tableId;
    id _value;
}

+ (unsigned char)encodingObjectType;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) unsigned long long tableId; // @synthesize tableId=_tableId;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithReplyStatus:(unsigned char)arg1 forRequest:(id)arg2 tableId:(unsigned long long)arg3 value:(id)arg4;

@end

