//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrowserKit/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BKImageAndTextCellPrivateData : NSObject <NSCopying>
{
    NSArray *_badgeDescriptions;
    NSArray *_badges;
    NSDictionary *_badgeFacets;
    NSDictionary *_badgeRenditionKeys;
    NSMutableArray *_badgeCells;
    BOOL _rolloverState;
}

@property BOOL rolloverState; // @synthesize rolloverState=_rolloverState;
@property(retain) NSMutableArray *badgeCells; // @synthesize badgeCells=_badgeCells;
@property(retain) NSDictionary *badgeRenditionKeys; // @synthesize badgeRenditionKeys=_badgeRenditionKeys;
@property(retain) NSDictionary *badgeFacets; // @synthesize badgeFacets=_badgeFacets;
@property(retain) NSArray *badges; // @synthesize badges=_badges;
@property(retain) NSArray *badgeDescriptions; // @synthesize badgeDescriptions=_badgeDescriptions;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

