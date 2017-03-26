//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OADSubBlip : OCDDelayedMedia
{
    int mType;
    NSData *mData;
    struct CGSize mSizeInPoints;
    int mSizeInBytes;
    struct CGRect mFrame;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isLoaded;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setSizeInBytes:(int)arg1;
- (int)sizeInBytes;
- (void)setSizeInPoints:(struct CGSize)arg1;
- (struct CGSize)sizeInPoints;
- (void)setType:(int)arg1;
- (int)type;
- (void)setData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 type:(int)arg2;

@end

