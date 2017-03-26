//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import <MarkupUI/MUContentViewControllerAKControllerSubdelegate-Protocol.h>
#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/PDFPageVisibilityDelegate-Protocol.h>
#import <MarkupUI/PDFViewDelegate-Protocol.h>

@class MUCGPDFReader, NSClipView, NSCursor, NSMutableSet, NSString, PDFDocument;

__attribute__((visibility("hidden")))
@interface MUPDFContentViewController : MUContentViewController <PDFViewDelegate, PDFPageVisibilityDelegate, MUContentViewControllerProtocol, MUContentViewControllerAKControllerSubdelegate>
{
    BOOL contentViewControllerCropEnabled;
    NSCursor *_annotationCursor;
    NSMutableSet *_currentlyObservedCropAnnotations;
    NSMutableSet *_currentlyObservedPageModelControllers;
    PDFDocument *_contentPDFDocument;
    MUCGPDFReader *_pdfReader;
    id _frameChangedObserver;
    NSClipView *_pdfScrollViewContentView;
}

@property __weak NSClipView *pdfScrollViewContentView; // @synthesize pdfScrollViewContentView=_pdfScrollViewContentView;
@property(retain) id frameChangedObserver; // @synthesize frameChangedObserver=_frameChangedObserver;
@property(retain) MUCGPDFReader *pdfReader; // @synthesize pdfReader=_pdfReader;
@property(retain) PDFDocument *contentPDFDocument; // @synthesize contentPDFDocument=_contentPDFDocument;
@property(retain) NSMutableSet *currentlyObservedPageModelControllers; // @synthesize currentlyObservedPageModelControllers=_currentlyObservedPageModelControllers;
@property(retain) NSMutableSet *currentlyObservedCropAnnotations; // @synthesize currentlyObservedCropAnnotations=_currentlyObservedCropAnnotations;
@property(retain) NSCursor *annotationCursor; // @synthesize annotationCursor=_annotationCursor;
@property BOOL contentViewControllerCropEnabled; // @synthesize contentViewControllerCropEnabled;
- (void).cxx_destruct;
- (struct CGSize)_medianSizeForCurrentDocumentInPDFViewWithGetter:(CDUnknownBlockType)arg1;
- (void)_warnThatPDFOcclusionIsNonDestructive;
- (void)_warnThatPDFCroppingIsNonDestructive;
- (void)_callBlockAfterWaitingForMouseUpIfNecessary:(CDUnknownBlockType)arg1;
- (void)_showPDFOcclusionWarningIfNecessary;
- (void)_showPDFCropWarningIfNecessary;
- (void)_stopObservingAllPageModelControllers;
- (void)_stopObservingPageModelControllerForAddedAnnotations:(id)arg1;
- (void)_startObservingPageModelControllerForAddedAnnotations:(id)arg1;
- (void)_stopObservingAllCropAnnotations;
- (void)_stopObservingCropAnnotationForFirstEdit:(id)arg1;
- (void)_startObservingCropAnnotationForFirstEdit:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)shouldShowAnnotationsOfType:(id)arg1;
- (void)_pdfDocumentDidUnlock:(id)arg1;
- (void)pdfViewDidChangeCurrentSelection:(id)arg1;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)clearHighlightableSelection;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1;
- (BOOL)hasHighlightableSelection;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (BOOL)shouldDetectFormElements;
- (void)willPlaceSingleShotAnnotation:(id)arg1 onProposedPageModelController:(id *)arg2;
- (void)setPreferredCursor:(id)arg1;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2;
- (void)setupInitialDocumentAppearanceAndPosition;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (struct CGRect)borderFrame;
- (struct CGRect)contentRect;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)loadContentForAnnotationController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 andPDFReader:(id)arg2 annotationController:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 annotationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

