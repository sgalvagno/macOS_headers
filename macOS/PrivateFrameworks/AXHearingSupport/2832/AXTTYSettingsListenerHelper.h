//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AXTTYSettingsListenerHelper : NSObject
{
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)addSelectorKey:(SEL)arg1;
- (id)initWithListenerAddress:(void *)arg1;

@end

