//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAImageRequestTileHint : NSObject
{
    struct PFIntSize_st _tileThreshold;
}

+ (id)noTileHint;
+ (id)defaultTileHint;
@property struct PFIntSize_st tileThreshold; // @synthesize tileThreshold=_tileThreshold;
- (id)description;
- (struct PFIntSize_st)tileSizeForImageSize:(struct PFIntSize_st)arg1;

@end

