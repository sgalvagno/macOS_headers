//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ILKSkimmingSlider.h"

@class NSImage, NSString;

@interface IPXTouchBarAdjustmentSlider : ILKSkimmingSlider
{
    BOOL _active;
    long long _expansionState;
    NSString *_title;
    NSImage *_icon;
}

+ (Class)cellClass;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long expansionState; // @synthesize expansionState=_expansionState;
- (void).cxx_destruct;
- (void)touchesBeganWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

