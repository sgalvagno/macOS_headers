//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/NSCopying-Protocol.h>
#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSArray, NSFileHandle;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSFileHandle *_dataFile;
    long long _dataSize;
    NSArray *_items;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *items; // @synthesize items=_items;
@property long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

