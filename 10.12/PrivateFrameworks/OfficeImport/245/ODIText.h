//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIText : NSObject
{
}

+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCenteredHorizontally:(BOOL)arg3 isCenteredVertically:(BOOL)arg4 includeChildren:(BOOL)arg5 state:(id)arg6;
+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCentered:(BOOL)arg3 includeChildren:(BOOL)arg4 state:(id)arg5;
+ (void)addTextFromPoint:(id)arg1 level:(unsigned int)arg2 includeChildren:(BOOL)arg3 toShape:(id)arg4 baseListStyle:(id)arg5 state:(id)arg6;
+ (id)baseListStyleForPoint:(id)arg1 shape:(id)arg2 isCentered:(BOOL)arg3 state:(id)arg4;

@end

