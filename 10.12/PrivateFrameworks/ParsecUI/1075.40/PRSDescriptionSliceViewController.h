//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

#import <ParsecUI/NSTextViewDelegate-Protocol.h>

@class NSString, PRSDescriptionCardSection;

@interface PRSDescriptionSliceViewController : PRSCardSectionSliceViewController <NSTextViewDelegate>
{
    BOOL _isGeneric;
    BOOL _descriptionExpanded;
}

@property BOOL descriptionExpanded; // @synthesize descriptionExpanded=_descriptionExpanded;
@property BOOL isGeneric; // @synthesize isGeneric=_isGeneric;
- (void)setGeneric:(BOOL)arg1;
- (id)descriptionTextViewMinHeightConstraint;
- (id)descriptionTextView;
- (id)titleTextField;
- (id)descriptionSliceView;
- (void)syncAttributes;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (double)height;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSDescriptionCardSection *descriptionCardSection;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithDescriptionCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

