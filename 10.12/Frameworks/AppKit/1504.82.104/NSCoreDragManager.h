//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSDragManager.h>

@class NSDraggingSession;

@interface NSCoreDragManager : _NSDragManager
{
    NSDraggingSession *_dragSession;
    struct OpaqueCoreDragHandler *applicationHandlerRef;
}

+ (void)doCommandBySelector:(SEL)arg1;
+ (void)insertText:(id)arg1;
- (void)_cancelAllFilePromiseDrags;
- (void)_registerFilePromiseDraggingEndedTarget:(id)arg1;
- (void)dragImage:(id)arg1 fromWindow:(id)arg2 at:(struct CGPoint)arg3 offset:(struct CGSize)arg4 event:(id)arg5 pasteboard:(id)arg6 source:(id)arg7 slideBack:(BOOL)arg8;
- (id)beginDraggingSessionWithItems:(id)arg1 fromWindow:(id)arg2 event:(id)arg3 source:(id)arg4;
- (id)draggingSessionWithSequenceNumber:(long long)arg1;
- (id)_alternateDragSource;
- (void)_setAlternateDragSource:(id)arg1;
- (id)_dragLocalSource;
- (void)_dragUntilMouseUp:(id)arg1 accepted:(char *)arg2;
- (void)slideImage:(id)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3;
- (BOOL)unregisterDragTypesForWindow:(id)arg1;
- (BOOL)switchWindow:(id)arg1 dragRegistrationToRemoteContext:(unsigned int)arg2;
- (int)registerDragTypes:(id)arg1 forWindow:(id)arg2;
- (void)registerForCompletionOfDrag:(void *)arg1;

@end

