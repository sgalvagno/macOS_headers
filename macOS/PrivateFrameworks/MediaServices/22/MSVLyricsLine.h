//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsSection, NSArray, NSString;

@interface MSVLyricsLine : MSVLyricsTextElement
{
    BOOL _instrumentalBreak;
    long long _lineIndex;
    long long _originalLineIndex;
    MSVLyricsSection *_parentSection;
    MSVLyricsLine *_nextLine;
    NSArray *_words;
    NSString *_translationKey;
}

@property(copy, nonatomic) NSString *translationKey; // @synthesize translationKey=_translationKey;
@property(retain, nonatomic) NSArray *words; // @synthesize words=_words;
@property(retain, nonatomic) MSVLyricsLine *nextLine; // @synthesize nextLine=_nextLine;
@property(nonatomic) __weak MSVLyricsSection *parentSection; // @synthesize parentSection=_parentSection;
@property(nonatomic) long long originalLineIndex; // @synthesize originalLineIndex=_originalLineIndex;
@property(nonatomic) long long lineIndex; // @synthesize lineIndex=_lineIndex;
@property(nonatomic, getter=isInstrumentalBreak) BOOL instrumentalBreak; // @synthesize instrumentalBreak=_instrumentalBreak;
- (void).cxx_destruct;
- (BOOL)containsTimeOffset:(double)arg1 withErrorMargin:(double)arg2;
- (id)description;
- (id)init;

@end

