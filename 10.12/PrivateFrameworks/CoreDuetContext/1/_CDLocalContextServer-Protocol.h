//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDuetContext/_CDContextServer-Protocol.h>

@class NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDLocalContextServer <_CDContextServer>
- (void)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forPath:(_CDContextualKeyPath *)arg2 handler:(void (^)(BOOL))arg3;
@end

