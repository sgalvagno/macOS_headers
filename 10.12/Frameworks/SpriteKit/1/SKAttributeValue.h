//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>

@interface SKAttributeValue : NSObject <NSCoding>
{
    long long _type;
    float floatValues[4];
    unsigned short halfFloatValues[4];
}

+ (id)valueWithVectorFloat4: /* Error: Ran out of types for this method. */;
+ (id)valueWithVectorFloat3: /* Error: Ran out of types for this method. */;
+ (id)valueWithVectorFloat2: /* Error: Ran out of types for this method. */;
+ (id)valueWithFloat:(float)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
// Error parsing type for property vectorFloat4Value:
// Property attributes: T,N

// Error parsing type for property vectorFloat3Value:
// Property attributes: T,N

// Error parsing type for property vectorFloat2Value:
// Property attributes: T,N

@property(nonatomic) float floatValue;
- (BOOL)copyValueTo:(void *)arg1 type:(long long)arg2 count:(unsigned int)arg3;

@end

