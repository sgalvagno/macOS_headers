//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class NSString;

@interface App_Store.AccountView : NSVisualEffectView
{
    // Error parsing type: , name: avatar
    // Error parsing type: , name: avatarView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: accessory
    // Error parsing type: , name: isSelected
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)layout;
- (BOOL)isFlipped;
@property(nonatomic, readonly) struct CGSize fittingSize;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, readonly) BOOL allowsVibrancy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

