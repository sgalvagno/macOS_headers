//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPhoneticRun : NSObject
{
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}

- (id)description;
- (void)setCharBaseCount:(unsigned int)arg1;
- (unsigned int)charBaseCount;
- (void)setCharBaseIndex:(unsigned int)arg1;
- (unsigned int)charBaseIndex;
- (void)setCharIndex:(unsigned int)arg1;
- (void)adjustIndex:(unsigned long long)arg1;
- (unsigned int)charIndex;
- (id)init;

@end

