//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableSet;

@interface ICCameraFolderProperties : NSObject
{
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSMutableSet *_files;
    NSMutableArray *_folders;
}

@property(retain) NSMutableArray *folders; // @synthesize folders=_folders;
@property(retain) NSMutableSet *files; // @synthesize files=_files;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void)finalize;
- (void)dealloc;

@end

