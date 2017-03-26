//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSAppearance, NSString, NSViewController, NSWindow;

@interface NSWindowTemplate : NSObject <NSCoding, NSUserInterfaceItemIdentification>
{
    struct CGRect windowRect;
    int windowStyleMask;
    int windowBacking;
    NSString *windowTitle;
    id viewClass;
    NSString *windowClass;
    id windowView;
    NSWindow *realObject;
    id extension;
    struct CGSize minSize;
    struct __WtFlags {
        unsigned int _PADDING:9;
        unsigned int isRestorable:1;
        unsigned int hidesToolbarButton:1;
        unsigned int autorecalculatesKeyViewLoop:1;
        unsigned int hideShadow:1;
        unsigned int allowsToolTipsWhenInactive:1;
        unsigned int autoSetMiniaturizableMask:1;
        unsigned int autoSetZoomableMask:1;
        unsigned int :2;
        unsigned int savePosition:1;
        unsigned int autoPositionMask:6;
        unsigned int dynamicDepthLimit:1;
        unsigned int wantsToBeColor:1;
        unsigned int visible:1;
        unsigned int oneShot:1;
        unsigned int defer:1;
        unsigned int dontFreeWhenClosed:1;
        unsigned int hidesOnDeactivate:1;
    } _wtFlags;
    struct CGRect screenRect;
    NSString *frameAutosaveName;
    struct CGSize maxSize;
    struct CGSize contentMinSize;
    struct CGSize contentMaxSize;
    unsigned long long windowBackingLocation;
    unsigned long long windowSharingType;
    char autorecalculateContentBorderThicknesses[4];
    double contentBorderThicknesses[4];
    NSString *userInterfaceIdentifier;
    unsigned long long animationBehavior;
    unsigned long long collectionBehavior;
    BOOL isRestorableWasDecodedFromArchive;
    NSAppearance *appearance;
    NSViewController *_contentViewController;
    struct CGSize _minFullScreenContentSize;
    struct CGSize _maxFullScreenContentSize;
    BOOL _minFullScreenContentSizeIsSet;
    BOOL _maxFullScreenContentSizeIsSet;
    NSString *_tabbingIdentifier;
    long long _tabbingMode;
}

+ (void)initialize;
@property BOOL maxFullScreenContentSizeIsSet; // @synthesize maxFullScreenContentSizeIsSet=_maxFullScreenContentSizeIsSet;
@property BOOL minFullScreenContentSizeIsSet; // @synthesize minFullScreenContentSizeIsSet=_minFullScreenContentSizeIsSet;
@property long long tabbingMode; // @synthesize tabbingMode=_tabbingMode;
@property(copy, nonatomic) NSString *tabbingIdentifier; // @synthesize tabbingIdentifier=_tabbingIdentifier;
@property(retain, nonatomic) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) NSAppearance *appearance; // @synthesize appearance;
@property(copy) NSString *identifier;
- (void)setUserInterfaceItemIdentifier:(id)arg1;
- (id)userInterfaceItemIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property struct CGSize maxFullScreenContentSize;
@property struct CGSize minFullScreenContentSize;
- (void)encodeWithCoder:(id)arg1;
- (id)nibInstantiate;
- (BOOL)isRestorable;
- (void)setRestorable:(BOOL)arg1;
- (unsigned long long)collectionBehavior;
- (void)setCollectionBehavior:(unsigned long long)arg1;
- (long long)animationBehavior;
- (void)setAnimationBehavior:(long long)arg1;
- (double)contentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2;
- (BOOL)autorecalculatesContentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setAutorecalculatesContentBorderThickness:(BOOL)arg1 forEdge:(unsigned long long)arg2;
- (void)setShowsToolbarButton:(BOOL)arg1;
- (BOOL)showsToolbarButton;
- (void)setContentMinSize:(struct CGSize)arg1;
- (struct CGSize)contentMinSize;
- (void)setContentMaxSize:(struct CGSize)arg1;
- (struct CGSize)contentMaxSize;
- (void)setWindowBackingLocation:(unsigned long long)arg1;
- (unsigned long long)windowBackingLocation;
- (void)setWindowSharingType:(unsigned long long)arg1;
- (unsigned long long)windowSharingType;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (BOOL)autorecalculatesKeyViewLoop;
- (void)setAutorecalculatesKeyViewLoop:(BOOL)arg1;
- (BOOL)hasShadow;
- (void)setHasShadow:(BOOL)arg1;
- (BOOL)allowsToolTipsWhenApplicationIsInactive;
- (void)setAllowsToolTipsWhenApplicationIsInactive:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
- (struct CGSize)maxSize;
- (void)setMinSize:(struct CGSize)arg1;
- (struct CGSize)minSize;
- (id)frameAutosaveName;
- (void)setFrameAutosaveName:(id)arg1;
- (void)setInterfaceStyle:(unsigned long long)arg1;
- (unsigned long long)interfaceStyle;
- (void)setAutoPositionMask:(unsigned long long)arg1;
- (unsigned long long)autoPositionMask;
- (void)setWantsToBeColor:(BOOL)arg1;
- (BOOL)wantsToBeColor;
- (void)setHidesOnDeactivate:(BOOL)arg1;
- (BOOL)hidesOnDeactivate;
- (void)setReleasedWhenClosed:(BOOL)arg1;
- (BOOL)isReleasedWhenClosed;
- (void)setDeferred:(BOOL)arg1;
- (BOOL)isDeferred;
- (void)setDynamicDepthLimit:(BOOL)arg1;
- (BOOL)hasDynamicDepthLimit;
- (void)setOneShot:(BOOL)arg1;
- (BOOL)isOneShot;
- (void)setBackingType:(unsigned long long)arg1;
- (unsigned long long)backingType;
- (void)setStyleMask:(unsigned long long)arg1;
- (unsigned long long)styleMask;
- (Class)windowClassForNibInstantiate;
- (void)setClassName:(id)arg1;
- (id)className;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;

@end

