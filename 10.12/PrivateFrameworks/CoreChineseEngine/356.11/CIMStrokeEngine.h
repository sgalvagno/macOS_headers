//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreChineseEngine/CIMShapeBasedEngine.h>

@interface CIMStrokeEngine : CIMShapeBasedEngine
{
}

- (id)readingStringFromReading:(id)arg1;
- (id)getCharacterCodeForCharacter:(id)arg1;
- (id)wildcardCharacterSet;
- (id)candidatesForInput:(id)arg1;
- (BOOL)handleNumberKey:(unsigned short)arg1;
- (BOOL)canTypeNonMappedCharacters;
- (BOOL)shouldFadeLongReadings;
- (id)keyMappings;
- (unsigned long long)maxLengthOfInline;
- (id)keyboardLayoutName;
- (id)inputCharacterSet;
- (unsigned long long)analysisOptions;
- (int)mecabraInputMethodType;
- (id)helpAnchorName;

@end

