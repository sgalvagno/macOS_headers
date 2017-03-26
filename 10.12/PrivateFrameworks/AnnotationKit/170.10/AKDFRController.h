//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKDFRAnnotationPropertiesControllerDelegate-Protocol.h>
#import <AnnotationKit/NSTouchBarDelegate-Protocol.h>
#import <AnnotationKit/NSTouchBarProvider-Protocol.h>

@class AKController, AKDFRShapeController, AKDFRTextController, NSString, NSTouchBar, NSTouchBarItem;

@interface AKDFRController : NSObject <AKDFRAnnotationPropertiesControllerDelegate, NSTouchBarProvider, NSTouchBarDelegate>
{
    NSTouchBar *_touchBar;
    BOOL _centersWithPrincipleItems;
    BOOL _isInDFRAction;
    CDUnknownBlockType _updateDFRBlock;
    AKController *_controller;
    AKDFRTextController *_textController;
    AKDFRShapeController *_shapeController;
    NSTouchBarItem *_sketchItem;
    NSTouchBarItem *_textItem;
}

+ (id)_imageFromTag:(long long)arg1;
+ (id)_accessibilityIdentifierForTag:(long long)arg1;
+ (id)_accessibilityLabelFromTag:(long long)arg1;
@property(retain) NSTouchBarItem *textItem; // @synthesize textItem=_textItem;
@property(retain) NSTouchBarItem *sketchItem; // @synthesize sketchItem=_sketchItem;
@property(retain) AKDFRShapeController *shapeController; // @synthesize shapeController=_shapeController;
@property(retain) AKDFRTextController *textController; // @synthesize textController=_textController;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property BOOL isInDFRAction; // @synthesize isInDFRAction=_isInDFRAction;
@property BOOL centersWithPrincipleItems; // @synthesize centersWithPrincipleItems=_centersWithPrincipleItems;
@property(copy) CDUnknownBlockType updateDFRBlock; // @synthesize updateDFRBlock=_updateDFRBlock;
- (void).cxx_destruct;
- (void)_validateDefaultTools;
- (void)_validateButton:(id)arg1;
- (void)_validateLineTools;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)_validateShapeControls;
- (void)_validateTextControls;
- (void)revalidateItems;
- (void)_revalidateItems;
- (void)lineWidthActionFrom:(id)arg1;
- (void)forwardToActionControllerFrom:(id)arg1;
- (void)updateTouchBar;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)principleItemIdentifier;
- (id)touchBarItemIdentifiers;
- (id)makeTouchBar;
@property(retain) NSTouchBar *touchBar;
- (id)_createButtonWithTag:(long long)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

