//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AFManagedStorageService <NSObject>
- (oneway void)fetchManagedStoreObjectForKey:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (oneway void)setManagedStoreObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;
@end

