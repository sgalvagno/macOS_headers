//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPreferencePane, NSView;

@interface PrefViewController : NSObject
{
    NSView *_layoutView;
    NSPreferencePane *_layoutObject;
}

- (void).cxx_destruct;
@property(readonly) NSView *lastKeyView;
@property(readonly) NSView *firstKeyView;
@property(readonly) BOOL shouldClose;
- (void)awakeFromNib;
- (id)preferenceName;
- (id)init;

@end

