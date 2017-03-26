//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AnnotationKit/AKNoteAnimationWindowController.h>

#import <AnnotationKit/BKMutableNoteMarginViewDelegate-Protocol.h>

@class BKMutableNoteMarginView, NSString;
@protocol AKNoteEditorWindowDelegate;

@interface AKNoteEditorWindowController : AKNoteAnimationWindowController <BKMutableNoteMarginViewDelegate>
{
    BOOL _isOpening;
    BOOL _hasClosed;
    id <AKNoteEditorWindowDelegate> _delegate;
    BKMutableNoteMarginView *_mutableMarginView;
    unsigned long long _presentedEdge;
    id _eventMonitor;
}

+ (id)newNoteWindowController;
@property(retain) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(nonatomic) BOOL hasClosed; // @synthesize hasClosed=_hasClosed;
@property(nonatomic) BOOL isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) unsigned long long presentedEdge; // @synthesize presentedEdge=_presentedEdge;
@property(retain, nonatomic) BKMutableNoteMarginView *mutableMarginView; // @synthesize mutableMarginView=_mutableMarginView;
@property(nonatomic) __weak id <AKNoteEditorWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mutableMarginViewTextDidChange:(id)arg1;
- (void)marginViewWasClicked:(id)arg1;
- (double)p_windowHeightForWidth:(double)arg1;
- (double)suggestedHeightForWidth:(double)arg1;
- (struct CGRect)p_toRectForSize:(struct CGSize)arg1 fromRect:(struct CGRect)arg2 fromEdge:(unsigned long long)arg3 forWindow:(id)arg4;
- (void)setNoteText:(id)arg1;
- (id)noteText;
- (id)theme;
- (void)setTheme:(id)arg1;
- (void)close;
- (void)presentEditorWindowForWindow:(id)arg1 fromRect:(struct CGRect)arg2 edge:(unsigned long long)arg3 useScaling:(BOOL)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

