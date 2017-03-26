//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityMockUIElement.h>

@class NSRulerMarker;

@interface NSAccessibilityRulerMarker : NSAccessibilityMockUIElement
{
    NSRulerMarker *_marker;
}

+ (id)markerWithRulerMarker:(id)arg1 parent:(id)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsMarkerTypeDescriptionAttributeSettable;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (BOOL)accessibilityIsMarkerTypeAttributeSettable;
- (id)accessibilityMarkerTypeAttribute;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)marker;
- (void)dealloc;
- (id)initWithRulerMarker:(id)arg1 parent:(id)arg2;

@end

