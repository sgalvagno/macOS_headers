//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPayloadEncryption : NSObject
{
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;
- (void)initializeKey;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)init;

@end

