//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCROffsetMapEntry : NSObject <NSCopying>
{
    unsigned long long _location;
    unsigned long long _length;
    long long _delta;
}

@property(nonatomic) long long delta; // @synthesize delta=_delta;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRange:(struct _NSRange)arg1 delta:(long long)arg2;

@end

