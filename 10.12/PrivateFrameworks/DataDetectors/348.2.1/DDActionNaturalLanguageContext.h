//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DDActionNaturalLanguageContext : NSObject
{
    NSString *_leadingText;
    NSString *_trailingText;
    struct __DDResult *_result;
    NSArray *_associatedResults;
}

@property(retain) NSArray *associatedResults; // @synthesize associatedResults=_associatedResults;
@property(retain) struct __DDResult *result; // @synthesize result=_result;
@property(retain) NSString *trailingText; // @synthesize trailingText=_trailingText;
@property(retain) NSString *leadingText; // @synthesize leadingText=_leadingText;
- (void)dealloc;

@end

