//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContainerPropertyDescription : NSObject
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (id)CNValueForContainer:(id)arg1;
- (BOOL)isValidValue:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) Class valueClass;
@property(readonly, nonatomic) BOOL isWritable;
@property(readonly, copy, nonatomic) NSString *key;

@end

