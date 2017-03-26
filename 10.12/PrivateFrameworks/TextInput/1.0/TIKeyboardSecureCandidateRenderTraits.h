//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, NSString, TIKeyboardSecureCandidateLayoutTraits, TIKeyboardSecureCandidateRGBColor, TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateRenderTraits : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isCandidateUI;
    TIKeyboardSecureCandidateLayoutTraits *_layoutTraits;
    TIKeyboardSecureCandidateTextTraits *_headerTextTraits;
    TIKeyboardSecureCandidateTextTraits *_inputTextTraits;
    NSString *_prefixText;
    NSString *_suffixText;
    NSArray *_resultCountToSingleCellWidth;
    double _singleCellHeight;
    double _singleCellVerticalPadding;
    double _dividerLineWidth;
    long long _maxCellCount;
    double _screenScale;
    NSString *_fontName;
    double _fontSize;
    TIKeyboardSecureCandidateRGBColor *_textColor;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) BOOL isCandidateUI; // @synthesize isCandidateUI=_isCandidateUI;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) long long maxCellCount; // @synthesize maxCellCount=_maxCellCount;
@property(nonatomic) double dividerLineWidth; // @synthesize dividerLineWidth=_dividerLineWidth;
@property(nonatomic) double singleCellVerticalPadding; // @synthesize singleCellVerticalPadding=_singleCellVerticalPadding;
@property(nonatomic) double singleCellHeight; // @synthesize singleCellHeight=_singleCellHeight;
@property(copy, nonatomic) NSArray *resultCountToSingleCellWidth; // @synthesize resultCountToSingleCellWidth=_resultCountToSingleCellWidth;
@property(copy, nonatomic) NSString *suffixText; // @synthesize suffixText=_suffixText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTextTraits; // @synthesize inputTextTraits=_inputTextTraits;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTextTraits; // @synthesize headerTextTraits=_headerTextTraits;
@property(retain, nonatomic) TIKeyboardSecureCandidateLayoutTraits *layoutTraits; // @synthesize layoutTraits=_layoutTraits;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double singleCellWidth;
- (void)dealloc;

@end

