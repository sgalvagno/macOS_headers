//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSToolbarItemViewer;

@interface _NSToolbarItemViewerAccessibilityHelper : NSObject
{
    NSToolbarItemViewer *_toolbarItemViewer;
    long long _configuration;
}

+ (id)accessibilityHelperForToolbarItemViewer:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityChildrenAttribute;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityTitleAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)dealloc;
- (id)initWithToolbarItemViewer:(id)arg1;

@end

