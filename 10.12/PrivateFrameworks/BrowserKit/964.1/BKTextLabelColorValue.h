//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrowserKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BKTextLabelColorValue : NSObject <NSCopying>
{
    NSString *_text;
    long long _labelColorIndex;
}

@property long long labelColorIndex; // @synthesize labelColorIndex=_labelColorIndex;
@property(copy) NSString *text; // @synthesize text=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

