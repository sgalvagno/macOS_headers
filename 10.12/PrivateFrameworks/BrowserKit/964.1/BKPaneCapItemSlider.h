//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BrowserKit/BKPaneCapItemSegmented.h>

@class NSProSlider;

@interface BKPaneCapItemSlider : BKPaneCapItemSegmented
{
    NSProSlider *_slider;
    void *_reservedPaneCapItemView1;
    void *_reservedPaneCapItemView2;
    void *_reservedPaneCapItemView3;
}

@property(retain) NSProSlider *slider; // @synthesize slider=_slider;
- (void)refreshSegmentedControl;

@end

