//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@interface _MXExtensionBaseContext : NSExtensionContext
{
    id _connectionDelegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) __weak id connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)receivedURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__MXExtensionContextBaseOpenURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)remoteContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteContext;

@end

