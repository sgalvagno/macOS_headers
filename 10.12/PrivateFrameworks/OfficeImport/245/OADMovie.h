//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADMovie : OCDDelayedMedia
{
    NSData *mData;
    NSString *mName;
    float mStart;
    float mEnd;
    BOOL mIsAudioOnly;
    BOOL loop;
}

@property BOOL loop; // @synthesize loop;
@property float movieEndPoint; // @synthesize movieEndPoint=mEnd;
@property float movieStartPoint; // @synthesize movieStartPoint=mStart;
@property BOOL isAudioOnly; // @synthesize isAudioOnly=mIsAudioOnly;
@property(retain) NSString *name; // @synthesize name=mName;
@property(retain) NSData *data; // @synthesize data=mData;
- (id)description;
- (void)dealloc;

@end

