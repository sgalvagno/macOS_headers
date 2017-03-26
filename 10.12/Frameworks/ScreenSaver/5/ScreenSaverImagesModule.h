//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenSaver/ScreenSaverModule.h>

#import <ScreenSaver/NSCopying-Protocol.h>

@class NSString;

@interface ScreenSaverImagesModule : ScreenSaverModule <NSCopying>
{
    NSString *_style;
    NSString *_mediaGroupID;
    NSString *_iLifeMediaGroupTypeIdentifier;
    unsigned int _iLifeMediaGroupType;
}

+ (id)moduleWithName:(id)arg1;
@property(retain) NSString *mediaGroupID; // @synthesize mediaGroupID=_mediaGroupID;
@property(retain) NSString *iLifeMediaGroupTypeIdentifier; // @synthesize iLifeMediaGroupTypeIdentifier=_iLifeMediaGroupTypeIdentifier;
@property unsigned int iLifeMediaGroupType; // @synthesize iLifeMediaGroupType=_iLifeMediaGroupType;
- (BOOL)requiresGraphicsAcceleration;
- (void)generateSemiUniqueName;
- (void)updateUsingILifeMediaManager:(id)arg1;
@property(retain) NSString *style; // @synthesize style=_style;
- (id)crashReporterString;
- (id)defaultsName;
- (id)saverPath;
- (BOOL)isSlideshow;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

