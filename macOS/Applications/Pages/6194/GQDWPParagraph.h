//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDWPInlineList.h"

#import "ICExportable-Protocol.h"

@class GQDSStyle, NSString;

@interface GQDWPParagraph : GQDWPInlineList <ICExportable>
{
    GQDSStyle *mParaStyle;
    long long mListLevel;
    BOOL mRestartList;
    BOOL mContinue;
    BOOL mIsHidden;
}

- (BOOL)isHidden;
- (BOOL)cont;
- (BOOL)restartList;
- (long long)listLevel;
- (id)paragraphStyle;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initMutableWithParagraphStyle:(id)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setCont:(BOOL)arg1;
- (void)setRestartList:(BOOL)arg1;
- (void)setListLevel:(long long)arg1;
- (void)setParagraphStyle:(id)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;
- (BOOL)omit_sfaID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

