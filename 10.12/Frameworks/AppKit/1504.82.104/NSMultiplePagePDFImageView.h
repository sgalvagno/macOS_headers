//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView
{
    NSPDFImageRep *_imageRep;
}

- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setImageRep:(id)arg1;
- (id)imageRep;
- (long long)numberOfPages;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)dealloc;

@end

