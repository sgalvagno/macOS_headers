//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class NSArray, NSBitmapImageRep, NSColor, NSData, NSDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol NSSecureCoding;

@protocol NSViewServiceMarshal <_UIViewServiceUIBehaviorInterface>
- (void)remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(NSString *)arg2 forItem:(NSString *)arg3;
- (void)remoteViewCaresAboutTouchBars:(BOOL)arg1;
- (void)remoteViewBackingScaleFactorDidChange:(double)arg1 reply:(void (^)(BOOL))arg2;
- (void)refreshAccessoryViewBitmap:(NSBitmapImageRep *)arg1 completion:(void (^)(NSError *))arg2;
- (void)invokeBlockOnCurrentFenceIfAny:(void (^)(void))arg1;
- (void)remoteViewIsContentView:(BOOL)arg1;
- (void)allowAppNap:(BOOL)arg1;
- (void)serviceViewControllerProxy:(void (^)(NSProxy<NSXPCProxyCreating> *, NSProxy<NSXPCProxyCreating> *))arg1;
- (void)accessibilityTokenForFocusedUIElement:(void (^)(NSData *))arg1;
- (void)setFontSmoothingBackgroundColor:(NSColor *)arg1;
- (void)hostWindowReceivedEventType:(unsigned long long)arg1;
- (void)setRemoteAccessoryViewCanBecomeKeyView:(BOOL)arg1;
- (void)setAccessoryViewSize:(struct CGSize)arg1 withReply:(void (^)(struct CGPoint))arg2;
- (void)forgetAccessoryView;
- (void)disableScreenUpdates:(void (^)(NSError *))arg1;
- (void)enableScreenUpdates:(void (^)(NSError *))arg1;
- (void)didBecomeAssociatedWithHostWindow:(unsigned int)arg1 withKeyness:(BOOL)arg2 inActiveApp:(BOOL)arg3;
- (void)willBecomeAssociatedWithHostWindow:(unsigned int)arg1 atLevel:(long long)arg2;
- (void)advanceToRunPhase:(void (^)(BOOL))arg1;
- (void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1;
- (void)remoteViewDidMove:(struct CGPoint)arg1;
- (void)hostWindowLevelDidChange:(long long)arg1;
- (void)hostWindowChangedEdgeResizingRects:(NSArray *)arg1;
- (void)hostWindowResignedKeyInActiveApp:(BOOL)arg1 isContentView:(BOOL)arg2 reply:(void (^)(void))arg3;
- (void)hostWindowBecameKeyInActiveApp:(BOOL)arg1 isContentView:(BOOL)arg2 reply:(void (^)(void))arg3;
- (void)remoteViewDidEndLiveResizeWithReply:(void (^)(void))arg1;
- (void)remoteViewWillStartLiveResizeWithReply:(void (^)(void))arg1;
- (void)remoteViewResignedFirstResponderInActiveApp:(BOOL)arg1 inFavorOf:(unsigned char)arg2;
- (void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3 inVisibleWindow:(BOOL)arg4 reply:(void (^)(unsigned char))arg5;
- (void)obtainFirstResponderState:(void (^)(unsigned char))arg1;
- (void)remoteViewGeometryDidChange:(struct CGRect)arg1 transactions:(NSSet *)arg2 withReply:(void (^)(struct CGSize, struct CGPoint))arg3;
- (void)setServiceObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)cancelActionHitRemoteView:(void (^)(BOOL))arg1;
- (void)updateAccessoryViewAccessibility:(NSDictionary *)arg1 enhancedUserInterface:(NSNumber *)arg2 withReply:(void (^)(NSData *))arg3;
- (void)exchangeAccessibilityTokens:(NSData *)arg1 enhancedUserInterface:(NSNumber *)arg2 withReply:(void (^)(NSDictionary *))arg3;
- (void)performAction:(NSString *)arg1 forTarget:(NSString *)arg2;
- (void)validateAction:(NSString *)arg1 withReply:(void (^)(BOOL, NSString *, struct, struct, NSString *))arg2;
- (void)endRemoteModalSession:(NSString *)arg1;
- (void)beginRemoteModalSession:(NSString *)arg1 title:(NSString *)arg2 size:(struct CGSize)arg3 withReply:(void (^)(BOOL))arg4;
- (void)setAppearance:(NSString *)arg1 withReply:(void (^)(void))arg2;
- (void)bootstrap:(CDStruct_43e9a6c1)arg1 withReply:(void (^)(NSString *, struct))arg2;
- (void)snapshot:(void (^)(NSError *, NSBitmapImageRep *))arg1;
- (void)endPrivateEventLoop;
@end

