//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDTextureAsset : TDAsset
{
    int exifOrientation;
}

@property(nonatomic) int exifOrientation; // @synthesize exifOrientation;
- (id)sourceImageWithDocument:(id)arg1;
- (struct CGSize)sourceImageSizeWithDocument:(id)arg1;
- (void)_logError:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *renditions; // @dynamic renditions;

@end

