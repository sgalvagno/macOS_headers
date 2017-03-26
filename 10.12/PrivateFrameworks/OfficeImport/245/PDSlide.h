//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class NSMutableArray, PDNotesSlide, PDSlideLayout;

__attribute__((visibility("hidden")))
@interface PDSlide : PDSlideChild
{
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}

- (id)description;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)transition;
- (id)background;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (void)doneWithContent;
- (void)addComment:(id)arg1;
- (id)commentAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentCount;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (void)setNotesSlide:(id)arg1;
- (id)notesSlide;
- (id)defaultTheme;
- (void)setSlideLayout:(id)arg1;
- (id)slideLayout;
- (void)dealloc;

@end

