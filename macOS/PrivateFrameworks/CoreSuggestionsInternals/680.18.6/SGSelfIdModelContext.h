//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PMLSpotlightReference;

@interface SGSelfIdModelContext : NSObject
{
    BOOL supervised;
    NSArray *features;
    unsigned long long namePosition;
    NSString *nameSourceContent;
    NSString *nameSourceLanguage;
    struct _NSRange nameSourceRange;
    long long nameConfidence;
    PMLSpotlightReference *spotlightReference;
}

- (void).cxx_destruct;
- (id)modelFeatures;
- (BOOL)hasValidRange;
- (id)name;

@end

