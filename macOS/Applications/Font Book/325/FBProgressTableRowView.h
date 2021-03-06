//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSPathControl, NSProgressIndicator, NSTextField, NSView;

@interface FBProgressTableRowView : NSTableCellView
{
    BOOL _abortRequested;
    NSView *_backgroundView;
    NSTextField *_titleField;
    NSTextField *_taskField;
    NSPathControl *_pathControl;
    NSProgressIndicator *_progressIndicator;
    NSButton *_abortButton;
}

@property BOOL abortRequested; // @synthesize abortRequested=_abortRequested;
@property(retain) NSButton *abortButton; // @synthesize abortButton=_abortButton;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(retain) NSTextField *taskField; // @synthesize taskField=_taskField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)requestAbort:(id)arg1;

@end

