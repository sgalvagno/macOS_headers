//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABDrawable : NSObject
{
}

+ (id)readDrawableFromZipPackageData:(const struct CsData *)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)setUpXmlDrawingState:(id)arg1 withBinaryReaderState:(id)arg2 targetDocument:(id)arg3 colorMap:(id)arg4;
+ (id)readDrawablesFromContainer:(id)arg1 state:(id)arg2;
+ (id)readDrawableFromObject:(id)arg1 state:(id)arg2;

@end

