//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@interface PRSTableView : NSTableView
{
    BOOL _isVibrant;
}

@property(nonatomic) BOOL isVibrant; // @synthesize isVibrant=_isVibrant;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)allowsVibrancy;
- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;

@end

