//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TabSearchItem : NSObject
{
    id _representedObject;
    NSString *_title;
}

+ (id)itemWithRepresentedObject:(id)arg1;
+ (id)itemWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;

@end

