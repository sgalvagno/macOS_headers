//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AppleDoubleResource : NSObject
{
    unsigned long long _offset;
    unsigned long long _type;
    unsigned long long _length;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property unsigned long long length; // @synthesize length=_length;
@property unsigned long long type; // @synthesize type=_type;
@property unsigned long long offset; // @synthesize offset=_offset;
- (void)dealloc;
- (id)description;

@end

