//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface LiModelLoadOptions : NSObject
{
    unsigned char _propertiesMask;
    BOOL _readOnly;
    NSArray *_additionalKeyPaths;
}

@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) NSArray *additionalKeyPaths; // @synthesize additionalKeyPaths=_additionalKeyPaths;
@property(nonatomic) unsigned char propertiesMask; // @synthesize propertiesMask=_propertiesMask;
- (void).cxx_destruct;

@end

