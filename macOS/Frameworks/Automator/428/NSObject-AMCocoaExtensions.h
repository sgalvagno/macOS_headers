//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (AMCocoaExtensions)
+ (id)am_mostRecentlyOverriddenOfSelectorStrings:(id)arg1;
+ (BOOL)am_hasOverrideForSelector:(SEL)arg1;
- (BOOL)_isEqualToObject:(id)arg1;
- (id)_replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)tokensBetweenBeginningDelimiter:(id)arg1 endDelimiter:(id)arg2;
- (BOOL)isEmpty;
- (id)performConditional:(SEL)arg1 withObjects:(id)arg2 collectThoseReturning:(BOOL)arg3;
- (BOOL)performConditional:(SEL)arg1 withObjects:(id)arg2 returningWhenFound:(BOOL)arg3;
@end

