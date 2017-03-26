//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSFunctionRow.h>

@class NSDictionary, NSFunctionRowBackgroundColorView, NSLayoutConstraint, NSLayoutXAxisAnchor, NSViewController, _NSFunctionRowPanel;

__attribute__((visibility("hidden")))
@interface _NSFunctionRow : NSFunctionRow
{
    NSViewController *_viewController;
    struct __DFRElement *_DFRElement;
    NSDictionary *_attributes;
    _NSFunctionRowPanel *_window;
    NSFunctionRowBackgroundColorView *_rootView;
    NSLayoutXAxisAnchor *_visualCenterXAnchor;
    NSLayoutConstraint *_rootWidth;
    NSLayoutConstraint *_rootHeight;
    NSLayoutConstraint *_rootVisualCenterX;
    unsigned int _active:1;
}

- (id)description;
- (id)CAContext;
- (id)touches;
- (struct CGRect)frame;
- (id)visualCenterXAnchor;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)minimizeSystemModal;
- (void)dismissSystemModal;
- (void)presentSystemModalWithSystemTrayIdentifier:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (const struct __DFRElement *)DFRElement;
- (void)dealloc;
- (id)initWithDFRElementAttributes:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilitySizeAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)_dumpLayer;

@end

