//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GLUTMenu, NSCursor, NSMutableSet, NSOpenGLContext, NSTimer;

__attribute__((visibility("hidden")))
@interface GLUTView : NSView
{
    NSOpenGLContext *_openGLContext;
    struct _GLUTList _allChildrens;
    struct _GLUTNode _siblings;
    GLUTView *_visibilityNext;
    GLUTView *_savedSuperview;
    NSCursor *_nativeCursor;
    GLUTMenu *_menu[3];
    NSMutableSet *_viewStorage;
    CDUnknownFunctionPointerType _keyDownFunc;
    CDUnknownFunctionPointerType _keyUpFunc;
    CDUnknownFunctionPointerType _mouseFunc;
    CDUnknownFunctionPointerType _motionFunc;
    CDUnknownFunctionPointerType _passiveMotionFunc;
    CDUnknownFunctionPointerType _entryFunc;
    CDUnknownFunctionPointerType _specialFunc;
    CDUnknownFunctionPointerType _specialUpFunc;
    CDUnknownFunctionPointerType _displayFunc;
    CDUnknownFunctionPointerType _reshapeFunc;
    CDUnknownFunctionPointerType _windowStatusFunc;
    CDUnknownFunctionPointerType _visibilityFunc;
    CDUnknownFunctionPointerType _wmCloseFunc;
    CDUnknownFunctionPointerType _spaceballMotionFunc;
    CDUnknownFunctionPointerType _spaceballRotateFunc;
    CDUnknownFunctionPointerType _spaceballButtonFunc;
    CDUnknownFunctionPointerType _buttonBoxFunc;
    CDUnknownFunctionPointerType _dialFunc;
    CDUnknownFunctionPointerType _tabletMotionFunc;
    CDUnknownFunctionPointerType _tabletButtonFunc;
    CDUnknownFunctionPointerType _joystickFunc;
    CDUnknownFunctionPointerType _fdisplayFunc;
    CDUnknownFunctionPointerType _fwmcloseFunc;
    CDUnknownFunctionPointerType _fkeyDownFunc;
    CDUnknownFunctionPointerType _fkeyUpFunc;
    CDUnknownFunctionPointerType _fmouseFunc;
    CDUnknownFunctionPointerType _fmotionFunc;
    CDUnknownFunctionPointerType _fpassiveMotionFunc;
    CDUnknownFunctionPointerType _fentryFunc;
    CDUnknownFunctionPointerType _fspecialFunc;
    CDUnknownFunctionPointerType _fspecialUpFunc;
    CDUnknownFunctionPointerType _freshapeFunc;
    CDUnknownFunctionPointerType _fwindowStatusFunc;
    CDUnknownFunctionPointerType _fvisibilityFunc;
    CDUnknownFunctionPointerType _fspaceballMotionFunc;
    CDUnknownFunctionPointerType _fspaceballRotateFunc;
    CDUnknownFunctionPointerType _fspaceballButtonFunc;
    CDUnknownFunctionPointerType _fbuttonBoxFunc;
    CDUnknownFunctionPointerType _fdialFunc;
    CDUnknownFunctionPointerType _ftabletMotionFunc;
    CDUnknownFunctionPointerType _ftabletButtonFunc;
    CDUnknownFunctionPointerType _fjoystickFunc;
    struct __vFlags {
        unsigned int forceReshape:1;
        unsigned int ignoreKeyRepeats:1;
        unsigned int isVisibilityUpdateAllowed:1;
        unsigned int isDamaged:1;
        unsigned int isShown:1;
        unsigned int isSubwindow:1;
        unsigned int treatAsSingle:1;
        unsigned int wasMouseInside:1;
        unsigned int hadMouseDown:3;
        unsigned int wasMouseEmulated:2;
        unsigned int duplicateEmulatedMouseDown:1;
        unsigned int reserved:2;
    } _flags;
    BOOL _visState;
    BOOL _newVisState;
    int _cursorID;
    int _winid;
    long long _trackingRectTag;
    double _pollInterval;
    NSTimer *_joyTimer;
    NSTimer *_spaceballTimer;
    int _iMouseLocX;
    int _iMouseLocY;
    int _eventMask;
    int _curEventMask;
    BOOL _inFullScreen;
    int _isVBLSync;
}

+ (void)evaluateVisibilityOfViews:(id)arg1;
- (void)recursiveCollectViewsIntoSet:(id)arg1;
- (void)enableVisibilityUpdates;
- (void)_updateComputedVisibility;
- (void)_recursiveMarkHidden;
- (void)_evaluateVisibility;
- (id)coveredViews;
- (id)_orderedSiblings;
- (BOOL)isVisible;
- (void)print:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_commonMouseDragged:(id)arg1;
- (void)_commonMouseUp:(id)arg1;
- (void)_commonMouseDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2;
- (void)detachMenuFromButton:(int)arg1;
- (void)attachMenu:(id)arg1 toButton:(int)arg2;
- (void)processSpaceball:(id)arg1;
- (void)processJoystick:(id)arg1;
- (void)detachFromSuperview;
- (void)attachSubview:(id)arg1;
- (void)didEndMorph:(int)arg1;
- (void)willBeginMorph:(int)arg1;
- (void)recursiveDidEndMorph:(int)arg1;
- (void)recursiveWillBeginMorph:(int)arg1;
- (void)prepareForMiniaturization;
- (id)imageWithTIFFInsideRect:(struct CGRect)arg1;
- (id)bitmapInsideRect:(struct CGRect)arg1;
- (void)_recursiveCopyPixelsTo:(id)arg1 sourceRect:(struct CGRect)arg2 baseView:(id)arg3;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_commonReshape;
- (BOOL)isFlipped;
- (void)handleWorkEvent:(struct _GLUTWorkEvent *)arg1;
- (void)_updateCurrentEventMask;
- (void)_updateTrackingRects:(id)arg1;
- (void)_recursiveKickSurface;
- (void)setCursor:(int)arg1;
- (void)_recursiveInvalidateCursorRectsWithWindow:(id)arg1;
- (void)resetCursorRects;
- (id)_inheritedNativeCursor;
- (int)cursor;
- (void *)getFortranCallback:(int)arg1;
- (void)setFortranCallback:(int)arg1 callback:(void *)arg2;
- (CDUnknownFunctionPointerType)wmCloseCallback;
- (void)setWMCloseCallback:(CDUnknownFunctionPointerType)arg1;
- (CDUnknownFunctionPointerType)visibilityCallback;
- (void)setVisibilityCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setJoystickCallback:(CDUnknownFunctionPointerType)arg1 pollInterval:(double)arg2;
- (void)setTabletButtonCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setTabletMotionCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setDialCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setButtonBoxCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setSpaceballButtonCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setSpaceballRotateCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setSpaceballMotionCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setWindowStatusCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setReshapeCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setDisplayCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setSpecialUpCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setSpecialDownCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setMotionCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setMouseCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setKeyUpCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setKeyDownCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setEntryCallback:(CDUnknownFunctionPointerType)arg1;
- (void)setPassiveMotionCallback:(CDUnknownFunctionPointerType)arg1;
- (BOOL)isVBLSync;
- (void)setEventMask:(int)arg1;
- (int)eventMask;
- (double)joystickPollInterval;
- (void)setIgnoreKeyRepeats:(BOOL)arg1;
- (BOOL)ignoreKeyRepeats;
- (unsigned int)numberOfChildrens;
- (int)parentWindowID;
- (int)windowID;
- (BOOL)isTreatAsSingle;
- (void)setShown:(BOOL)arg1;
- (BOOL)isShown;
- (BOOL)isDamaged;
- (int)visibilityState;
- (struct CGSize)windowSize;
- (BOOL)isSubwindow;
- (struct CGPoint)windowPosition;
- (void)_surfaceNeedsUpdate:(id)arg1;
- (void)update;
- (id)openGLContext;
- (void)resignCurrentGLUTView;
- (void)makeCurrentGLUTView;
- (void)lockFocus;
- (BOOL)isOpaque;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2 windowID:(int)arg3 treatAsSingle:(BOOL)arg4 isSubwindow:(BOOL)arg5 isVBLSynced:(BOOL)arg6;

@end

