//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSString, NSValue;

__attribute__((visibility("hidden")))
@interface PDBuildMapKey : NSObject <NSCopying>
{
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setGroupId:(id)arg1;
- (id)groupId;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)dealloc;
- (id)initWithDrawable:(id)arg1 groupId:(id)arg2;
- (id)init;

@end

