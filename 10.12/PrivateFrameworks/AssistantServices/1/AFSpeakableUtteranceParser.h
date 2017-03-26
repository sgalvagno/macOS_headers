//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface AFSpeakableUtteranceParser : NSObject
{
    NSMutableDictionary *_providers;
    id _functionHandler;
    NSLocale *_locale;
}

+ (id)parseUserGeneratedMessage:(id)arg1;
+ (BOOL)_shouldAutomaticallyProvideFunctions;
- (void).cxx_destruct;
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id *)arg2;
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2;
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(BOOL)arg2 error:(id *)arg3 hadEmpties:(char *)arg4;
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 hadEmpties:(char *)arg5;
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4;
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4;
@property(nonatomic) BOOL handlesFunctions;
@property(nonatomic) BOOL handleTTSCodes;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end

