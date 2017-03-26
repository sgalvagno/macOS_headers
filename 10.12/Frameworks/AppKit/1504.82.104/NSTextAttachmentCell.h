//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCell.h>

#import <AppKit/NSTextAttachmentCell-Protocol.h>

@class NSString, NSTextAttachment;

@interface NSTextAttachmentCell : NSCell <NSTextAttachmentCell>
{
    NSTextAttachment *_attachment;
}

- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
@property NSTextAttachment *attachment;
- (BOOL)wantsToTrackMouseForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (BOOL)wantsToTrackMouseForEvent:(id)arg1;
- (BOOL)wantsToTrackMouse;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_accessibilityShowMenu:(id)arg1;
- (id)proxy;
- (BOOL)accessibilityIsURLAttributeSettable;
- (id)accessibilityURLAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityAttributeNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

