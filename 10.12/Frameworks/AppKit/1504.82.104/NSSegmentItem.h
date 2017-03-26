//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAnimatablePropertyContainer-Protocol.h>
#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSDictionary, NSImage, NSImageView, NSMenu, NSSegmentItemView, NSSegmentedCell, NSString;

@interface NSSegmentItem : NSObject <NSCopying, NSCoding, NSAnimatablePropertyContainer>
{
    double _width;
    NSImage *_image;
    NSString *_label;
    NSMenu *_menu;
    NSString *_toolTip;
    long long _tag;
    struct {
        unsigned int needsRecalc:1;
        unsigned int selected:1;
        unsigned int disabled:1;
        unsigned int showMenuIndicator:1;
        unsigned int mouseInside:1;
        unsigned int inactiveStateDisablesRollovers:1;
        unsigned int imageScaling:2;
        unsigned int showsBadge:1;
        unsigned int springLoadingHighlight:2;
        unsigned int animating:1;
        unsigned int reserved:20;
    } _flags;
    double _fullWidth;
    double _shrinkage;
    struct CGRect _imageRect;
    struct CGRect _labelRect;
    struct CGRect _menuIndRect;
    long long _toolTipTag;
    NSImage *_alternateImage;
    NSSegmentedCell *_owningCell;
}

+ (id)defaultAnimationForKey:(id)arg1;
@property long long toolTipTag; // @synthesize toolTipTag=_toolTipTag;
@property(readonly, getter=_menuIndRect) struct CGRect menuIndRect; // @synthesize menuIndRect=_menuIndRect;
@property(readonly, getter=_labelRect) struct CGRect labelRect; // @synthesize labelRect=_labelRect;
@property(readonly, getter=_fullWidth) double fullWidth; // @synthesize fullWidth=_fullWidth;
@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property long long tag; // @synthesize tag=_tag;
- (id)animationForKey:(id)arg1;
@property(copy) NSDictionary *animations;
- (id)animator;
- (id)description;
- (void)_setToolTipTag:(long long)arg1;
- (long long)_toolTipTag;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
@property(getter=_shrinkage, setter=_setShrinkage:) double shrinkage; // @synthesize shrinkage=_shrinkage;
@property(readonly, getter=_displayWidth) double displayWidth;
- (void)_recalcRectsForCell:(id)arg1;
@property(readonly, getter=_needsRecalc) BOOL needsRecalc;
- (void)_setNeedsRecalc;
- (void)_setOwningCell:(id)arg1;
- (id)_badgeEmblemForValue:(long long)arg1;
@property(readonly, getter=_badgeEmblem) NSImage *badgeEmblem;
@property(getter=_badgeValue, setter=_setBadgeValue:) long long badgeValue;
@property(retain, getter=_badgeView, setter=_setBadgeView:) NSImageView *badgeView;
@property(retain, getter=_menu, setter=_setMenu:) NSMenu *menu;
@property(copy, getter=_label, setter=_setLabel:) NSString *label;
@property(getter=_springLoadingHighlight, setter=_setSpringLoadingHighlight:) long long springLoadingHighlight;
@property(getter=_showsBadge, setter=_setShowsBadge:) BOOL showsBadge;
@property(getter=_imageScaling, setter=_setImageScaling:) unsigned long long imageScaling;
@property(getter=_inactiveStateDisablesRollovers, setter=_setInactiveStateDisablesRollovers:) BOOL inactiveStateDisablesRollovers;
@property(getter=_mouseInside, setter=_setMouseInside:) BOOL mouseInside;
@property(getter=_showMenuIndicator, setter=_setShowMenuIndicator:) BOOL showMenuIndicator;
@property(getter=_disabled, setter=_setDisabled:) BOOL disabled;
@property(getter=_selected, setter=_setSelected:) BOOL selected;
@property(retain, getter=_alternateImage, setter=_setAlternateImage:) NSImage *alternateImage;
@property(readonly, getter=_imageRect) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, getter=_image, setter=_setImage:) NSImage *image;
@property(setter=_setWidth:) double width;
@property(retain) NSSegmentItemView *segmentItemView;
@property long long index;
- (id)_auxiliaryStorage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

