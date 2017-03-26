//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@class IPKPopOverView, IPKTextField, NSButton;

@interface IPMapDisplayCalloutView : NSView
{
    IPKTextField *_titleTextField;
    NSButton *_chevronButton;
    NSView *_documentView;
    IPKPopOverView *_popOverView;
}

- (void)_buildView;
- (id)_buttonWithFrameSize:(struct CGSize)arg1 image:(id)arg2 altImage:(id)arg3;
- (void)_loadArt;
- (void)viewDidMoveToSuperview;
- (void)setShowDetailTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitleString:(id)arg1;
- (void)awakeFromNib;

@end

