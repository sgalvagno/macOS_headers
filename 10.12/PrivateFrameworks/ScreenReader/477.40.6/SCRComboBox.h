//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRStandardText.h>

__attribute__((visibility("hidden")))
@interface SCRComboBox : SCRStandardText
{
    BOOL _isFacebookComboBox;
}

- (void)addObserversToSharedFocusElementsForElement;
- (BOOL)isControlElement;
- (id)typeDescription;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (id)defaultActionName;
- (void)appendExpandedStatusDescription:(id)arg1;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

