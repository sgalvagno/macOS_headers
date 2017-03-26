//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IKImageView, NSDictionary, NSImage, NSMutableArray, NSObject, NSString, NSURL, QCComposition, QCView, QLPreviewView, QTMovie, QTMovieView;
@protocol BKItem;

__attribute__((visibility("hidden")))
@interface BKPreviewView : NSView
{
    NSObject<BKItem> *_item;
    NSView *_buttonBox;
    NSURL *_url;
    NSImage *_nsImage;
    struct CGImage *_cgImageRef;
    long long _imageOrientation;
    IKImageView *_ikImageView;
    QTMovie *_qtMovie;
    QTMovieView *_qtMovieView;
    NSString *_qcCompositionPath;
    QCComposition *_qcComposition;
    QCView *_qcView;
    QLPreviewView *_qlPreviewView;
    NSMutableArray *_itemKeys;
    NSMutableArray *_itemLabels;
    NSMutableArray *_itemFormatters;
    NSMutableArray *_itemTransformers;
    double _textHeight;
    BOOL _isTwoColumn;
    struct CGRect _previewRect;
    struct CGRect _imageRect;
    struct CGRect _textRect;
    BOOL _isPlaying;
    BOOL _isQCPaused;
    BOOL _mouseDownInPreview;
    BOOL _viewInitializedWithContent;
    id _delegate;
    NSDictionary *_imageAttributes;
}

+ (id)_queryImageAttributesForPath:(id)arg1;
+ (double)_firstLineSpacing;
+ (double)_lineSpacing;
+ (id)_firstValueAttributes;
+ (id)_valueAttributes;
+ (id)_labelAttributes;
+ (id)_fontAttributesForSize:(float)arg1 isBold:(BOOL)arg2 alignment:(unsigned long long)arg3 color:(id)arg4;
+ (id)_previewContentsForItemClass:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidMoveToWindow;
- (void)setDelegate:(id)arg1;
- (void)prepareToClose:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (struct CGSize)minimumSize;
- (struct CGSize)desiredSize;
- (void)layoutSubviews;
- (id)_stillImage;
- (void)_refreshPreview;
- (long long)_orientationOfImageSourceRef:(struct CGImageSource *)arg1;
- (void)_drawText;
- (void)_getTextKeysAndAttributes;
- (void)_dragWithEvent:(id)arg1;
- (void)_installContentSpecificSubview;
- (void)_clearContents;
- (void)_releaseQLPreviewView;
- (void)_releaseQCView;
- (void)_releaseQTMovieView;
- (void)_releaseIKImageView;

@end

