//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BookmarkLocation : NSObject
{
    NSString *_parentUUID;
    unsigned long long _childIndex;
}

@property unsigned long long childIndex; // @synthesize childIndex=_childIndex;
@property(copy) NSString *parentUUID; // @synthesize parentUUID=_parentUUID;
- (void).cxx_destruct;

@end

