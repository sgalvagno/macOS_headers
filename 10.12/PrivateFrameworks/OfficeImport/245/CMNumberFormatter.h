//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMNumberFormatter : NSObject
{
    int _format;
    int _language;
    void **_numberFormatter;
}

+ (id)formatterForNumberFormat:(int)arg1 language:(int)arg2;
- (id)stringForNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithNumberFormat:(int)arg1 language:(int)arg2;

@end

