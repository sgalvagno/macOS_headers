//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSAddition;

__attribute__((visibility("hidden")))
@interface QLThumbnailCachedAddition : NSObject
{
    GSAddition *_addition;
    unsigned long long _fileID;
}

@property(retain) GSAddition *addition; // @synthesize addition=_addition;
- (BOOL)isStillValid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAddition:(id)arg1;

@end

