//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopoverTouchBarItem.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface PopoverTouchBarItemPlus : NSPopoverTouchBarItem
{
    NSView *_customCollapsedRepresentation;
    NSView *_customCustomizationView;
    id <PopoverTouchBarItemPlusDelegate> _popoverItemPlusDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PopoverTouchBarItemPlusDelegate> popoverItemPlusDelegate; // @synthesize popoverItemPlusDelegate=_popoverItemPlusDelegate;
- (id)collapsedRepresentation;
- (id)makeViewForCustomizationPalette;

@end

