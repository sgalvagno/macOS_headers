//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgressIndicator, NSString, NSTextField, NSWindow;

@interface LCAFakeIAWindowController : NSObject
{
    NSString *_title;
    NSTextField *_titleField;
    NSProgressIndicator *_progressBar;
    NSWindow *_window;
}

@property NSWindow *window; // @synthesize window=_window;
- (id)_kernedTitleString:(id)arg1 withFont:(id)arg2;
- (void)orderWindowOut:(id)arg1;
- (void)showWindowForLanguage:(id)arg1;

@end

