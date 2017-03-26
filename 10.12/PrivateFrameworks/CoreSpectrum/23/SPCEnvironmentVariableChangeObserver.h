//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpectrum/SPCModelChangeObserver-Protocol.h>
#import <CoreSpectrum/SPCVariableObserver-Protocol.h>

@class NSString;

@interface SPCEnvironmentVariableChangeObserver : NSObject <SPCModelChangeObserver, SPCVariableObserver>
{
    NSString *_variableName;
    CDUnknownBlockType _changeHandler;
}

@property(readonly, copy) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, copy) NSString *variableName; // @synthesize variableName=_variableName;
- (void)changeManager:(id)arg1 didReceiveChangesInChangeGroup:(id)arg2;
- (id)initWithVariableName:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

