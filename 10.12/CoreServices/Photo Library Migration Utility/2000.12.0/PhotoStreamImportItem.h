//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSDictionary, NSString;

@interface PhotoStreamImportItem : NSObject
{
    NSString *assetId;
    NSString *sourceUuid;
    NSString *path;
    NSString *photoUid;
    NSDictionary *metadata;
}

@property(retain) NSDictionary *metadata; // @synthesize metadata;
@property(copy) NSString *photoUid; // @synthesize photoUid;
@property(copy) NSString *path; // @synthesize path;
@property(copy) NSString *sourceUuid; // @synthesize sourceUuid;
@property(copy) NSString *assetId; // @synthesize assetId;
- (void)dealloc;

@end

