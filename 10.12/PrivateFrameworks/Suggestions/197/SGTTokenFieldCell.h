//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTokenFieldCell.h>

@class SGTSearchFieldCell;

__attribute__((visibility("hidden")))
@interface SGTTokenFieldCell : NSTokenFieldCell
{
    SGTSearchFieldCell *_searchFieldCell;
}

@property SGTSearchFieldCell *searchFieldCell; // @synthesize searchFieldCell=_searchFieldCell;
- (BOOL)tokenAttachment:(id)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (BOOL)tokenTextView:(id)arg1 writeSelectionToPasteboard:(id)arg2 type:(id)arg3;
- (id)_stringForRepresentedObjects:(id)arg1;
- (BOOL)_isEditingTextView:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)fieldEditorForView:(id)arg1;
- (id)menuForTokenAttachment:(id)arg1;
- (BOOL)hasMenuForTokenAttachment:(id)arg1;
- (id)_defaultPlaceholderString;
- (id)_searchField;
- (id)setUpTokenAttachmentCell:(id)arg1 forRepresentedObject:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (id)controlView;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_sgt_representedObjectsForAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end

