//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>
{
    NSString *_platform;
    NSString *_buildNumber;
    NSString *_appVersion;
    long long _schemaRevision;
}

+ (id)_frameworkVersion;
+ (id)frameworkVersion;
+ (id)_systemVersionPlistPath;
+ (id)_systemBuildVersion;
+ (id)systemBuildVersion;
+ (id)currentSoftwareVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)arg1;
- (void).cxx_destruct;
@property long long schemaRevision; // @synthesize schemaRevision=_schemaRevision;
@property(copy) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(copy) NSString *platform; // @synthesize platform=_platform;
- (BOOL)isEqualToSoftwareVersion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)archivalRepresentation;

@end

