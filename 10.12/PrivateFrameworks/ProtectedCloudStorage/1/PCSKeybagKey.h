//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ProtectedCloudStorage/NSSecureCoding-Protocol.h>

@class NSData;

@interface PCSKeybagKey : NSObject <NSSecureCoding>
{
    NSData *_data;
    long long _flags;
}

+ (BOOL)supportsSecureCoding;
@property long long flags; // @synthesize flags=_flags;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

