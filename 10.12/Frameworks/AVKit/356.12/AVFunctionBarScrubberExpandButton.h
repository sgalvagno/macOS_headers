//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

__attribute__((visibility("hidden")))
@interface AVFunctionBarScrubberExpandButton : NSButton
{
    double _minValue;
    double _maxValue;
    double _currentValue;
}

+ (Class)cellClass;
@property(readonly) double normalizedCurrentValue;
@property double currentValue;
@property double maxValue;
@property double minValue;

@end

