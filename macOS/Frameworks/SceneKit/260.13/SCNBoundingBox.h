//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingBox : NSObject
{
    struct SCNVector3 min;
    struct SCNVector3 max;
}

+ (id)SCNJSExportProtocol;
@property(nonatomic) struct SCNVector3 max; // @synthesize max;
@property(nonatomic) struct SCNVector3 min; // @synthesize min;
- (id)description;

@end

