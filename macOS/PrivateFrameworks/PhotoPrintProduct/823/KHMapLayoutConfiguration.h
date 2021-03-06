//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface KHMapLayoutConfiguration : NSObject
{
    NSMutableDictionary *_layoutChoices;
    NSMutableSet *_layoutElements;
}

@property(readonly) NSDictionary *layoutChoices; // @synthesize layoutChoices=_layoutChoices;
- (void)commitLayoutChoices;
- (void)setLayoutChoiceIdx:(unsigned long long)arg1 forElement:(id)arg2;
- (unsigned long long)layoutChoiceIdxForElement:(id)arg1;
- (id)init;
- (void)dealloc;

@end

