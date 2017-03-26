//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSPrintOperation, NSShadow;

@interface NSPrintThumbnailView : NSView
{
    NSPrintOperation *_operation;
    NSShadow *_paperShadow;
    NSImage *_cachedImage;
    long long _basePageNumber;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBorderOfType:(unsigned short)arg1 withScaleFactor:(double)arg2;
- (long long)_pageOffsetForRow:(long long)arg1 column:(long long)arg2;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)invalidateContents;
- (double)heightForWidth:(double)arg1;
- (double)widthForHeight:(double)arg1;
- (double)_paperAspectRatio;
- (struct CGSize)_paperSize;
- (id)_paperShadow;
- (BOOL)_reversePageOrientation;
- (BOOL)_mirrorHorizontal;
- (unsigned short)_pagesBorderType;
- (BOOL)_hasPagesBorder;
- (unsigned short)_pagesDirection;
- (struct CGSize)_pagesLayout;
- (long long)basePageNumber;
- (void)setBasePageNumber:(long long)arg1;
- (void)setOperation:(id)arg1;
- (void)dealloc;

@end

