//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "App_Store.BaseCollectionViewCell.h"

@class NSView, _TtC9App_Store11ArtworkView, _TtC9App_Store13SeparatorView, _TtC9App_Store20DynamicTypeTextField;

@interface App_Store.ActionCollectionViewCell : App_Store.BaseCollectionViewCell
{
    // Error parsing type: , name: textLabelView
    // Error parsing type: , name: accessoryView
    // Error parsing type: , name: lazilyCreatedArtworkView
    // Error parsing type: , name: isArtworkHidden
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: accessoryType
}

+ (struct CGSize)itemSizeWithFitting:(struct CGSize)arg1 in:(id)arg2 title:(id)arg3 hasArtwork:(BOOL)arg4 hasDisclosureIndicator:(BOOL)arg5;
- (CDUnknownBlockType).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)layout;
@property(nonatomic, readonly) _TtC9App_Store13SeparatorView *separatorView; // @synthesize separatorView;
@property(nonatomic) BOOL isArtworkHidden; // @synthesize isArtworkHidden;
@property(nonatomic, readonly) _TtC9App_Store11ArtworkView *artworkView;
@property(nonatomic, retain) NSView *accessoryView; // @synthesize accessoryView;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *textLabelView; // @synthesize textLabelView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize preferredArtworkSize;

@end

