//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVFigObjectInspector.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVMetadataItem, NSArray, NSData, NSDictionary, NSString;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>
{
}

- (id)makePropertyListForProxyWithOptions:(id)arg1;
@property(readonly, nonatomic) id propertyListForProxy;
@property(readonly, nonatomic) BOOL containsMovieFragments;
@property(readonly, nonatomic) BOOL canContainMovieFragments;
@property(readonly, nonatomic) NSData *SHA1Digest;
@property(readonly, nonatomic, getter=isComposable) BOOL composable;
@property(readonly, nonatomic, getter=isReadable) BOOL readable;
@property(readonly, nonatomic, getter=isExportable) BOOL exportable;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable;
- (BOOL)hasProtectedContent;
@property(readonly, nonatomic) NSString *identifyingTagClass;
- (id)metadataForFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
@property(readonly, nonatomic) NSArray *commonMetadata;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) AVMetadataItem *creationDate;
@property(readonly, nonatomic) NSArray *mediaSelectionGroups;
@property(readonly, nonatomic) NSDictionary *trackReferences;
@property(readonly, nonatomic) NSArray *alternateTrackGroups;
@property(readonly, nonatomic) NSArray *trackIDs;
@property(readonly, nonatomic) long long trackCount;
@property(readonly, nonatomic) BOOL providesPreciseDurationAndTiming;
@property(readonly, nonatomic) int naturalTimeScale;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) float preferredSoundCheckVolumeNormalization;
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) float preferredRate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

