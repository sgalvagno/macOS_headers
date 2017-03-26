//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUAudioUnitProperty : NSObject <NSSecureCoding>
{
    NSString *_key;
    unsigned int _scope;
    unsigned int _element;
}

+ (BOOL)supportsSecureCoding;
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
+ (id)propertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)initWithKey:(id)arg1;

@end

