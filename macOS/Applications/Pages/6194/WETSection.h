//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WETSection : NSObject
{
}

+ (void)map:(id)arg1 documentState:(id)arg2;
+ (void)mapSectionBackground:(id)arg1;
+ (BOOL)mapPageMaster:(id)arg1 to:(id)arg2 isHeader:(BOOL)arg3 blockListState:(id)arg4 previousInheritedHeaderFooterFrom:(id)arg5;
+ (BOOL)mapMasterDrawables:(id)arg1 blockListState:(id)arg2;
+ (void)mapHeadersAndFootersTo:(id)arg1 blockListState:(id)arg2;
+ (void)mapColumns:(id)arg1 to:(id)arg2 blockListState:(id)arg3;
+ (void)mapMarginsFrom:(id)arg1 to:(id)arg2 blockListState:(id)arg3;
+ (void)mapSectionStyle:(id)arg1 to:(id)arg2 isContinuous:(BOOL)arg3 blockListState:(id)arg4;

@end

