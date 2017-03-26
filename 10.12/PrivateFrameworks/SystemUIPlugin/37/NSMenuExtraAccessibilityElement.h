//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class NSMenuExtra;

@interface NSMenuExtraAccessibilityElement : NSAccessibilityElement
{
    NSMenuExtra *_menuExtra;
}

- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformCancel;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityWindow;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelected;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityTopLevelUIElement;
- (BOOL)isAccessibilityFocused;
- (struct CGRect)accessibilityFrame;
- (id)initWithMenuExtra:(id)arg1;

@end

