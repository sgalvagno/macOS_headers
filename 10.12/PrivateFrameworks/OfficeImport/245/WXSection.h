//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXSection : NSObject
{
}

+ (float)scaleFromPrinterSettings:(id)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)initialize;
+ (void)mapProperties:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapPrinterSettings:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapFooter:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapHeader:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;

@end

