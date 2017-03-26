//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreChineseEngine/CIMShapeBasedEngine.h>

@interface CIMCangjieEngine : CIMShapeBasedEngine
{
}

+ (id)ASCIIFromCangjie:(id)arg1;
+ (id)cangjieToASCIIMap;
- (BOOL)shouldOptimizeLayoutForFixedSize;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)arg1;
- (id)shownInlineText;
- (id)enumeratedCandidates;
- (id)getCharacterCodeForCharacter:(id)arg1;
- (BOOL)updateMarkedTextOnSelectionChange;
- (BOOL)inlineBeginsWithWildcard;
- (id)wildcardCharacterSet;
- (id)punctuationListForKey:(unsigned short)arg1;
- (unsigned long long)maximumLengthOfValidInputCodes;
- (unsigned long long)maxLengthOfInline;
- (id)keyboardLayoutName;
- (id)inputCharacterSet;
- (int)mecabraInputMethodType;
- (unsigned long long)analysisOptions;
- (void)updateSettings;
- (id)helpAnchorName;

@end

