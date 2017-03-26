//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaOffer : NSObject
{
    BOOL _hasAudio;
    BOOL _hasVideo;
    NSURL *_previewURL;
    NSString *_type;
}

+ (id)typeForOffer:(id)arg1;
+ (id)previewURLForOffer:(id)arg1;
+ (BOOL)hasVideoForOffer:(id)arg1;
+ (BOOL)hasAudioForOffer:(id)arg1;
@property(readonly, nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(readonly, nonatomic) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

