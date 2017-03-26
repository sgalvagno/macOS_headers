//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKInputController, IMKSimulatorWindow, NSString;
@protocol IMKSimulatorDelegate><NSObject, IMKTextInput><NSObject;

@interface IMKSimulatorController : NSObject
{
    IMKSimulatorWindow *_currentWindow;
    NSString *_inputMode;
    BOOL _inPressAndHoldEvent;
    BOOL _isPressAndHold;
}

+ (id)sharedController;
@property(nonatomic) BOOL isPressAndHold; // @synthesize isPressAndHold=_isPressAndHold;
@property(nonatomic) BOOL inPressAndHoldEvent; // @synthesize inPressAndHoldEvent=_inPressAndHoldEvent;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(retain, nonatomic) IMKSimulatorWindow *currentWindow; // @synthesize currentWindow=_currentWindow;
@property(readonly, nonatomic) id <IMKSimulatorDelegate><NSObject> simulatorDelegate;
@property(readonly, nonatomic) id <IMKTextInput><NSObject> currentClient;
@property(readonly, nonatomic) IMKInputController *currentInputController;
@property(nonatomic) BOOL spotlightOn;
@property(nonatomic) long long orientation;
@property(nonatomic) long long direction;
- (void)windowFocusSwitched:(id)arg1;
- (void)inputModeChanged;
- (void)didHandleEvent:(id)arg1;
- (void)showNewWindow;
- (Class)inputControllerClass;
- (Class)clientClass;
- (void)dealloc;
- (id)init;

@end

