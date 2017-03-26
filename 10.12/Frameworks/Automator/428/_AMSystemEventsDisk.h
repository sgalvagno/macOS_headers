//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMSystemEventsDiskItem.h>

@class NSString;

@interface _AMSystemEventsDisk : _AMSystemEventsDiskItem
{
}

@property(readonly, copy) NSString *zone;
@property(readonly) BOOL startup;
@property(readonly, copy) NSString *server;
@property(readonly) BOOL localVolume;
@property BOOL ignorePrivileges;
@property(readonly) long long freeSpace;
@property(readonly) int format;
@property(readonly) BOOL ejectable;
@property(readonly) long long capacity;
- (id)items;
- (id)folders;
- (id)filePackages;
- (id)files;
- (id)diskItems;
- (id)aliases;

@end

