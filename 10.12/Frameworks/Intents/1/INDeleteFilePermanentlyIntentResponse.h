//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INDeleteFilePermanentlyIntentResponseExport-Protocol.h>

@class NSNumber, NSString, _INPBDeleteFilePermanentlyIntentResponse;

@interface INDeleteFilePermanentlyIntentResponse : INIntentResponse <INDeleteFilePermanentlyIntentResponseExport>
{
    _INPBDeleteFilePermanentlyIntentResponse *_responseMessagePBRepresentation;
}

+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(copy) NSNumber *success;
@property(copy) NSNumber *confirm;
- (id)_responseMessagePBRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

