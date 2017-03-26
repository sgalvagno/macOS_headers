//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCNShadable;

@interface _SCNShadableCompilationIssue : NSObject
{
    id <SCNShadable> _shadable;
    NSString *_entryPoint;
    NSString *_effectiveModifier;
    NSString *_message;
    unsigned long long _type;
}

+ (id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 type:(unsigned long long)arg5;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *effectiveModifier; // @synthesize effectiveModifier=_effectiveModifier;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) id <SCNShadable> shadable; // @synthesize shadable=_shadable;
- (void)dealloc;

@end

