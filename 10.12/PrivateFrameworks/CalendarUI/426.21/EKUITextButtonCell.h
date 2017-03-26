//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface EKUITextButtonCell : NSButtonCell
{
    BOOL _mouseOver;
    NSImage *_originalImage;
}

@property(retain) NSImage *originalImage; // @synthesize originalImage=_originalImage;
@property BOOL mouseOver; // @synthesize mouseOver=_mouseOver;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;

@end

