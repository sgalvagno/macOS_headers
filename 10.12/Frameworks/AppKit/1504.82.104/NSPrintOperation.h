//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSGraphicsContext, NSPDFPanel, NSPrintInfo, NSPrintPanel, NSString, NSView;

@interface NSPrintOperation : NSObject
{
}

+ (void)setCurrentOperation:(id)arg1;
+ (id)currentOperation;
+ (id)EPSOperationWithView:(id)arg1 insideRect:(struct CGRect)arg2 toData:(id)arg3;
+ (id)PDFOperationWithView:(id)arg1 insideRect:(struct CGRect)arg2 toData:(id)arg3;
+ (id)printOperationWithView:(id)arg1;
+ (id)EPSOperationWithView:(id)arg1 insideRect:(struct CGRect)arg2 toPath:(id)arg3 printInfo:(id)arg4;
+ (id)EPSOperationWithView:(id)arg1 insideRect:(struct CGRect)arg2 toData:(id)arg3 printInfo:(id)arg4;
+ (id)PDFOperationWithView:(id)arg1 insideRect:(struct CGRect)arg2 toPath:(id)arg3 printInfo:(id)arg4;
+ (id)PDFOperationWithView:(id)arg1 insideRect:(struct CGRect)arg2 toData:(id)arg3 printInfo:(id)arg4;
+ (id)printOperationWithView:(id)arg1 printInfo:(id)arg2;
+ (void)_setPrintEventRetrofitInfo:(id)arg1;
- (void)cleanUpOperation;
- (BOOL)deliverResult;
- (void)destroyContext;
- (id)createContext;
@property(readonly) long long currentPage;
@property(readonly) struct _NSRange pageRange;
@property(readonly) NSGraphicsContext *context;
@property(copy) NSPrintInfo *printInfo;
@property(readonly) NSView *view;
- (BOOL)runOperation;
- (void)runOperationModalForWindow:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void *)arg4;
@property long long pageOrder;
@property BOOL canSpawnSeparateThread;
@property(retain) NSPDFPanel *PDFPanel;
@property(retain) NSPrintPanel *printPanel;
@property BOOL showsProgressPanel;
@property BOOL showsPrintPanel;
@property(copy) NSString *jobTitle;
@property(readonly) long long preferredRenderingQuality;
@property(readonly, getter=isCopyingOperation) BOOL copyingOperation;
- (BOOL)_isResponsibleForFileCoordination;
- (long long)_pageSet;
- (BOOL)isEPSOperation;
- (id)baseAffineTransform;
- (void)setBaseAffineTransform:(id)arg1;
- (struct CGRect)_renderingBounds;
- (BOOL)_isRenderingBorder;
- (BOOL)_isLockingFocus;
- (void)_setLockingFocus:(BOOL)arg1;
- (struct _PrivatePrintOperationInfo *)_operationInfo;
- (BOOL)_isCancelledAfterHandlingUserEvents;
- (void)_setPreferredRenderingQuality:(long long)arg1;
- (void)_setRenderingBorder:(BOOL)arg1;
- (double)_pageScaling;
- (struct CGRect)_currentPageBounds;
- (id)_effectiveJobTitle;
- (long long)_lastRenderPageNumber;
- (long long)_firstRenderPageNumber;
- (long long)_lastJobPageNumber;
- (long long)_firstJobPageNumber;
- (BOOL)_tryToSetCurrentPageNumber:(long long)arg1;
- (void)_invalidatePagination;
- (void)_forceKnowsPageRangeMessage;
- (BOOL)showPanels;
- (void)setShowPanels:(BOOL)arg1;
- (id)jobStyleHint;
- (void)setJobStyleHint:(id)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;

@end

