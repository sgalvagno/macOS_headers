//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@class NSArray;

@interface LiLibraryHistoryReply : LiReply
{
    NSArray *_history;
}

+ (unsigned char)encodingObjectType;
@property(readonly) NSArray *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithHistoryArray:(id)arg1 forRequest:(id)arg2;

@end

