//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MRNowPlayingArtwork : NSObject
{
}

+ (id)createNowPlayingArtworkFromXPCDictionary:(id)arg1;
- (id)copyImageData;
- (void)bindToXPCDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL hasArtworkData;
@property(readonly, nonatomic) unsigned int type;

@end

