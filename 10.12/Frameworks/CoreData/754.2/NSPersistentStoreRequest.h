//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying>
{
    NSArray *_affectedStores;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *affectedStores;
@property(readonly) unsigned long long requestType;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_secureOperation;
- (void)_setSecureOperation:(BOOL)arg1;

@end

