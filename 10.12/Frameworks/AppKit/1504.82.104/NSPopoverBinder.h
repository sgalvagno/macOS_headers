//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewStateBinder.h>

@interface NSPopoverBinder : NSViewStateBinder
{
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void *)arg4;
- (void)_updatePopover:(id)arg1 withContentWidth:(id)arg2 contentHeight:(id)arg3;
- (void)_updatePopover:(id)arg1 withPositioningRect:(id)arg2;
- (BOOL)shouldProcessObservations;
- (BOOL)isBindingReadOnly:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;

@end

