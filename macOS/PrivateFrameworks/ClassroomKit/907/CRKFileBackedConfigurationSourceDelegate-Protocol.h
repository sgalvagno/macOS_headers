//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRKFileBackedConfigurationSource, NSURL;

@protocol CRKFileBackedConfigurationSourceDelegate <NSObject>

@optional
- (void)fileBackedConfigurationSource:(CRKFileBackedConfigurationSource *)arg1 didDeleteConfigurationAtURL:(NSURL *)arg2 inDirectory:(NSURL *)arg3;
@end

