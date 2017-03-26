//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSDictionary, NSImage, NSString;

@interface EKUITextButton : NSButton
{
    NSDictionary *_textAttributes;
    NSString *_text;
    NSImage *_originalImage;
}

+ (Class)cellClass;
@property(retain) NSImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setTitle:(id)arg1 withAttributes:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (id)init;

@end

