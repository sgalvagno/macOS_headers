//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject
{
    WDDocument *mDocument;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_2bc0833e *mOriginalProperties;
    CDStruct_2bc0833e *mTrackedProperties;
}

+ (SEL)setFontSelectorForFontType:(int)arg1;
+ (SEL)fontOverriddenSelectorForFontType:(int)arg1;
+ (SEL)fontSelectorForFontType:(int)arg1;
- (id)description;
- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isBracketTwoLinesInOneOverridden;
- (void)setBracketTwoLinesInOne:(int)arg1;
- (int)bracketTwoLinesInOne;
- (BOOL)isTwoLinesInOneOverridden;
- (void)setTwoLinesInOne:(BOOL)arg1;
- (BOOL)twoLinesInOne;
- (BOOL)isCompressHorizontalInVerticalOverridden;
- (void)setCompressHorizontalInVertical:(BOOL)arg1;
- (BOOL)compressHorizontalInVertical;
- (BOOL)isHorizontalInVerticalOverridden;
- (void)setHorizontalInVertical:(BOOL)arg1;
- (BOOL)horizontalInVertical;
- (BOOL)isOffsetToPictureDataOverridden;
- (void)setOffsetToPictureData:(int)arg1;
- (int)offsetToPictureData;
- (BOOL)isObjectIDForOle2Overridden;
- (void)setObjectIDForOle2:(int)arg1;
- (int)objectIDForOle2;
- (BOOL)isOle2Overridden;
- (void)setOle2:(BOOL)arg1;
- (BOOL)ole2;
- (BOOL)isEmbeddedObjectOverridden;
- (void)setEmbeddedObject:(BOOL)arg1;
- (BOOL)embeddedObject;
- (BOOL)isFontSizeForBiTextOverridden;
- (void)setFontSizeForBiText:(unsigned short)arg1;
- (unsigned short)fontSizeForBiText;
- (BOOL)isLanguageForBiTextOverridden;
- (void)setLanguageForBiText:(int)arg1;
- (int)languageForBiText;
- (BOOL)isLanguageForFarEastOverridden;
- (void)setLanguageForFarEast:(int)arg1;
- (int)languageForFarEast;
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;
- (int)charPositionOfPictureBulletInBookmark;
- (BOOL)isListCharacterPictureBulletOverridden;
- (void)setListCharacterPictureBullet:(BOOL)arg1;
- (BOOL)isListCharacterPictureBullet;
- (BOOL)isSpecialCharacterOverridden;
- (void)setSpecialCharacter:(BOOL)arg1;
- (BOOL)isSpecialCharacter;
- (BOOL)formattingChangedDifferentFrom:(id)arg1;
- (BOOL)editDifferentFrom:(id)arg1;
- (BOOL)deletionDifferentFrom:(id)arg1;
- (BOOL)isEditDateOverridden;
- (void)setEditDate:(id)arg1;
- (id)editDate;
- (BOOL)isDeletionDateOverridden;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (BOOL)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (BOOL)isEditedOverridden;
- (void)setEdited:(int)arg1;
- (int)edited;
- (BOOL)isDeletedOverridden;
- (void)setDeleted:(int)arg1;
- (int)deleted;
- (BOOL)isUseCsFontOverridden;
- (void)setUseCsFont:(int)arg1;
- (int)useCsFont;
- (BOOL)isRightToLeftOverridden;
- (void)setRightToLeft:(int)arg1;
- (int)rightToLeft;
- (BOOL)isLanguageForDefaultTextOverridden;
- (void)setLanguageForDefaultText:(int)arg1;
- (int)languageForDefaultText;
- (BOOL)isColorAutoOverridden;
- (void)setColorAuto:(BOOL)arg1;
- (BOOL)isColorAuto;
- (BOOL)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (BOOL)isEmphasisMarkOverridden;
- (void)setEmphasisMark:(int)arg1;
- (int)emphasisMark;
- (BOOL)isVerticalAlignOverridden;
- (void)setVerticalAlign:(int)arg1;
- (int)verticalAlign;
- (BOOL)isShadow2010Overridden;
- (void)setShadow2010:(id)arg1;
- (id)shadow2010;
- (BOOL)isReflectionOverridden;
- (void)setReflection:(id)arg1;
- (id)reflection;
- (BOOL)isFontSizeOverridden;
- (void)setFontSize:(unsigned short)arg1;
- (unsigned short)fontSize;
- (BOOL)isPositionOverridden;
- (void)setPosition:(short)arg1;
- (short)position;
- (BOOL)isSpacingOverridden;
- (void)setSpacing:(short)arg1;
- (short)spacing;
- (BOOL)isHiddenOverridden;
- (void)setHidden:(int)arg1;
- (int)hidden;
- (BOOL)isLowerCaseOverridden;
- (void)setLowerCase:(BOOL)arg1;
- (BOOL)isLowerCase;
- (BOOL)isCapsOverridden;
- (void)setCaps:(int)arg1;
- (int)caps;
- (BOOL)isSmallCapsOverridden;
- (void)setSmallCaps:(int)arg1;
- (int)smallCaps;
- (BOOL)isLigatureOverridden;
- (void)setLigature:(int)arg1;
- (int)ligature;
- (BOOL)isHighlightColorOverridden;
- (void)setHighlightColor:(int)arg1;
- (int)highlightColor;
- (BOOL)isHighlightOverridden;
- (void)setHighlight:(BOOL)arg1;
- (BOOL)isHighlight;
- (BOOL)isDoubleStrikeThroughOverridden;
- (void)setDoubleStrikeThrough:(int)arg1;
- (int)doubleStrikeThrough;
- (BOOL)isStrikeThroughOverridden;
- (void)setStrikeThrough:(int)arg1;
- (int)strikeThrough;
- (BOOL)isUnderlineOverridden;
- (void)setUnderline:(int)arg1;
- (int)underline;
- (BOOL)isTextScaleOverridden;
- (void)setTextScale:(unsigned short)arg1;
- (unsigned short)textScale;
- (BOOL)isKerningOverridden;
- (void)setKerning:(unsigned short)arg1;
- (unsigned short)kerning;
- (BOOL)isUnderlineColorOverridden;
- (void)setUnderlineColor:(id)arg1;
- (id)underlineColor;
- (BOOL)isShadow2010OpacityOverridden;
- (void)setShadow2010Opacity:(float)arg1;
- (float)shadow2010Opacity;
- (BOOL)isShadowOverridden;
- (void)setShadow:(int)arg1;
- (int)shadow;
- (BOOL)isImprintOverridden;
- (void)setImprint:(int)arg1;
- (int)imprint;
- (BOOL)isEmbossedOverridden;
- (void)setEmbossed:(int)arg1;
- (int)embossed;
- (BOOL)isOutline2010WidthOverridden;
- (void)setOutline2010Width:(float)arg1;
- (float)outline2010Width;
- (BOOL)isOutlineColorOverridden;
- (void)setOutlineColor:(id)arg1;
- (id)outlineColor;
- (BOOL)isOutlineOverridden;
- (void)setOutline:(int)arg1;
- (int)outline;
- (BOOL)isItalicForBiTextOverridden;
- (void)setItalicForBiText:(int)arg1;
- (int)italicForBiText;
- (BOOL)isItalicOverridden;
- (void)setItalic:(int)arg1;
- (int)italic;
- (BOOL)isBoldForBiTextOverridden;
- (void)setBoldForBiText:(int)arg1;
- (int)boldForBiText;
- (BOOL)isBoldOverridden;
- (void)setBold:(int)arg1;
- (int)bold;
- (BOOL)isSymbolCharacterOverridden;
- (void)setSymbolCharacter:(unsigned short)arg1;
- (unsigned short)symbolCharacter;
- (BOOL)isFontHintOverridden;
- (void)setFontHint:(int)arg1;
- (int)fontHint;
- (void)setFont:(id)arg1 forFontType:(int)arg2;
- (BOOL)isFontOverriddenForFontType:(int)arg1;
- (id)fontForFontType:(int)arg1;
- (BOOL)isSymbolFontOverridden;
- (void)setSymbolFont:(id)arg1;
- (id)symbolFont;
- (BOOL)isFarEastFontOverridden;
- (void)setFarEastFont:(id)arg1;
- (id)farEastFont;
- (BOOL)isExtendedFontOverridden;
- (void)setExtendedFont:(id)arg1;
- (id)extendedFont;
- (BOOL)isFontOverridden;
- (void)setFont:(id)arg1;
- (id)font;
- (BOOL)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (BOOL)isBorderOverridden;
- (id)mutableBorder;
- (id)border;
- (void)clearBaseStyle;
- (BOOL)isBaseStyleOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)removeEmptyFormattingChanges:(id)arg1;
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (BOOL)isAnythingOverridden;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (int)reverseBooleanProperty:(int)arg1;
- (BOOL)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;
- (BOOL)editDifferentFrom:(id)arg1 mode:(int)arg2;
- (BOOL)deletionDifferentFrom:(id)arg1 mode:(int)arg2;
- (BOOL)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;
- (BOOL)isAnythingOverriddenIn:(CDStruct_2bc0833e *)arg1;

@end

