//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface NSWeakObjectValue : NSValue
{
    void *_value;
    id _object;
    BOOL _useFallback;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)weakObjectValue;
- (void)getValue:(void *)arg1;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (unsigned long long)hash;
- (BOOL)isEqualToValue:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

