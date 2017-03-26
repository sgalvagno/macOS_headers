//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardLayout : NSObject <NSSecureCoding>
{
    BOOL _usesTwoHands;
    unsigned long long _count;
    struct _ShortRect *_frames;
    unsigned long long _framesCapacity;
    char *_strings;
    unsigned long long _stringsSize;
    unsigned long long _stringsCapacity;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL usesTwoHands; // @synthesize usesTwoHands=_usesTwoHands;
- (long long)keyContainingPoint:(struct CGPoint)arg1;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect)arg2;
- (void)ensureStringCapacity:(unsigned long long)arg1;
- (void)ensureFrameCapacity:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;

@end

