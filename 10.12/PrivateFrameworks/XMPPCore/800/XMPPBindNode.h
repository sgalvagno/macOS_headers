//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XMPPCore/XMPPNode.h>

@class NSString;

@interface XMPPBindNode : XMPPNode
{
    NSString *_jid;
    NSString *_resource;
}

- (BOOL)shouldNotifyDelegate;
- (id)resource;
- (id)jid;
- (id)newChildWithName:(id)arg1 attributes:(id)arg2;
- (void)dealloc;

@end

