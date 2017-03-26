//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsFoundation/CNWrappedDictionary.h>

@class ABCardViewStyleProvider, NSArray, NSButton, NSStackView, NSView;
@protocol ABCardCollectionRowView;

__attribute__((visibility("hidden")))
@interface ABCardCollectionRowScope : CNWrappedDictionary
{
}

@property(readonly) ABCardViewStyleProvider *styleProvider;
@property(readonly) NSButton *privacyCheckbox;
@property(readonly) NSView *plusButton;
@property(readonly) NSView *minusButton;
@property(readonly) NSView *accessoryView;
@property(readonly) NSView *messagingServiceView;
@property(readonly) NSArray *actionGlyphButtons;
@property(readonly) NSView *labelView;
@property(readonly) NSView *valueView;
@property(readonly) NSStackView *stackView;
@property(readonly) NSView<ABCardCollectionRowView> *rowView;
- (id)initWithRowView:(id)arg1 styleProvider:(id)arg2;

@end

