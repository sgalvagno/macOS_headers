//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSIconView.h>

@class NSCell;

@interface NSNavIconView : NSIconView
{
    NSCell *_fauxHighlightedCell;
    unsigned int _showPreviewIcon:1;
    unsigned int _reserved:31;
}

- (void)mouseDown:(id)arg1;
- (void)sendMouseUpActionForDisabledCell:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_setDefaultPrototypeCell;
- (BOOL)showPreviewIcon;
- (id)initWithFrame:(struct CGRect)arg1;

@end

