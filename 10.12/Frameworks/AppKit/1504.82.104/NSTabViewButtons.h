//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTabView;

__attribute__((visibility("hidden")))
@interface NSTabViewButtons : NSView
{
    NSTabView *_tabView;
}

@property NSTabView *tabView; // @synthesize tabView=_tabView;
- (id)_vibrancyFilter;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;

@end

