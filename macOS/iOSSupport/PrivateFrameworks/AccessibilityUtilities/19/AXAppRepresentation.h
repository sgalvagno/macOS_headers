//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding>
{
    int _pid;
    NSString *_bundleIdentifier;
    long long _layoutRole;
}

+ (BOOL)supportsSecureCoding;
+ (id)appWithPID:(int)arg1 bundleID:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) BOOL isLayoutFullscreenModal;
@property(readonly, nonatomic) BOOL isLayoutPrimary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)_commonInit;
- (id)init;

@end

