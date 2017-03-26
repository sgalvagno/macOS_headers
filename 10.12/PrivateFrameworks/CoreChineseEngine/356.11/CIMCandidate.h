//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKCandidateDefinitionUnit.h>

@class NSString;

@interface CIMCandidate : IMKCandidateDefinitionUnit
{
    NSString *_surface;
    NSString *_reading;
    NSString *_displayReading;
    unsigned long long _scriptType;
    BOOL _usesPointerAsUniqueKey;
    BOOL _predictionCandidate;
    BOOL _facemarkCandidate;
}

@property(readonly, getter=isFacemarkCandidate) BOOL facemarkCandidate; // @synthesize facemarkCandidate=_facemarkCandidate;
@property(readonly, getter=isPredictionCandidate) BOOL predictionCandidate; // @synthesize predictionCandidate=_predictionCandidate;
@property BOOL usesPointerAsUniqueKey; // @synthesize usesPointerAsUniqueKey=_usesPointerAsUniqueKey;
@property unsigned long long scriptType; // @synthesize scriptType=_scriptType;
@property(copy) NSString *displayReading; // @synthesize displayReading=_displayReading;
@property(copy) NSString *reading; // @synthesize reading=_reading;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)uniqueKey;
- (id)axHelpString;
@property(readonly, getter=isCompositionCandidate) BOOL compositionCandidate;
@property(readonly, getter=isCompletionCandidate) BOOL complectionCandidate;
@property(readonly, getter=isEmojiCandidate) BOOL emojiCandidate;
@property(readonly, getter=isLearningDictionaryCandidate) BOOL learningDictionaryCandidate;
@property(readonly, getter=isUserWordCandidate) BOOL userWordCandidate;
@property(readonly, getter=isExtensionCandidate) BOOL extensionCandidate;
@property(copy) NSString *surface; // @synthesize surface=_surface;
- (id)initWithSurface:(id)arg1 reading:(id)arg2;
- (id)initWithSurface:(id)arg1 reading:(id)arg2 displayReading:(id)arg3;

@end

