//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

#import <AppKit/NSTouchBarItemTypeGroup-Protocol.h>

@class NSString, NSTouchBar;

@interface NSGroupTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeGroup>
{
    NSTouchBar *_groupTouchBar;
    NSString *_customizationLabel;
}

+ (id)groupItemWithIdentifier:(id)arg1 items:(id)arg2;
@property(retain) NSTouchBar *groupTouchBar; // @synthesize groupTouchBar=_groupTouchBar;
- (void)_itemViewMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2 preferredSize:(struct CGSize *)arg3;
@property(copy) NSString *customizationLabel;
- (long long)_type;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize)fallbackItemSizeForCustomization;
- (id)makeViewForCustomizationPreview;
- (id)makeViewForCustomizationPalette;
- (void)setGroupFunctionBar:(id)arg1;
- (id)groupFunctionBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

