//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABMonogramImageLoading : NSObject
{
}

+ (id)executeTask:(id)arg1;
+ (id)taskScheduler;
+ (id)scheduleTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)loadImageForEmails:(id)arg1 name:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)imageForEmails:(id)arg1 name:(id)arg2 options:(id)arg3;
+ (id)loadImageForPerson:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)imageForPerson:(id)arg1 options:(id)arg2;

@end

