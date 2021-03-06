//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVFunctionBarCaptureInputSourceItem : NSObject
{
    BOOL _builtIn;
    BOOL _noAudioItem;
    BOOL _enabled;
    NSString *_title;
    id _representedObject;
}

@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, getter=isNoAudioItem) BOOL noAudioItem; // @synthesize noAudioItem=_noAudioItem;
@property(readonly, getter=isBuiltIn) BOOL builtIn; // @synthesize builtIn=_builtIn;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 builtIn:(BOOL)arg2 noAudioItem:(BOOL)arg3 enabled:(BOOL)arg4;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

