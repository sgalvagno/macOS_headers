//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASKTranslator : NSObject
{
}

+ (id)_descriptorByTranslatingScript:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_scriptByTranslatingDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingDialogReply:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_dialogReplyByTranslatingDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingAlertReply:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_alertReplyByTranslatingDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)sharedTranslator;
+ (void)load;
- (id)init;
- (void)_registerTranslations;

@end

