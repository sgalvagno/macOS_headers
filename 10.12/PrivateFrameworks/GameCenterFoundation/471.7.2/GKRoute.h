//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface GKRoute : NSObject
{
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (BOOL)matchesURL:(id)arg1 parameters:(id *)arg2;
- (BOOL)matchesURL:(id)arg1;
- (id)nonParameterCharacterSet;
- (void)dealloc;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (id)initWithString:(id)arg1;

@end

