//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCROutputThreadedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCROutputComponent : SCROutputThreadedObject
{
    NSString *_name;
}

+ (BOOL)isRunningUnitTests;
+ (void)setIsRunningUnitTests:(BOOL)arg1;
+ (void)initialize;
- (void)processEmbeddedVOCommandsInAction:(id)arg1;
- (void)replaceVOEmbeddedCommand:(id)arg1 inAction:(id)arg2;
- (void)replaceVOEmbeddedCommand:(id)arg1 withRange:(struct _NSRange)arg2 inAction:(id)arg3;
- (void)setAudioPositionForBusId:(unsigned int)arg1 withAction:(id)arg2;
- (void)_appendModifierStringForKey:(id)arg1 toString:(id)arg2;
- (id)localizedStringForComposedCharacter:(id)arg1 prefix:(id)arg2;
- (id)createModifiersPrefixStringFromAction:(id)arg1;
- (void)setObject:(id)arg1 forAttribute:(id)arg2;
- (id)objectForAttribute:(id)arg1;
- (void)performAction:(id)arg1 delegate:(id)arg2;
- (void)nonBlockingActionsAreComplete;
- (void)_dispatchNonBlockingActionsAreComplete;
- (void)displayConfigurationDidChange;
- (void)_displayConfigurationDidChange;
- (void)_dispatchDisplayConfigurationDidChange;
- (int)preflightSequentialSteps:(id)arg1 runnerName:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

