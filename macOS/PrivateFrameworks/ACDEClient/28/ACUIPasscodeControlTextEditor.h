//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@protocol ACUIPasscodeControlTextEditorDelegate;

@interface ACUIPasscodeControlTextEditor : NSTextView
{
    id <ACUIPasscodeControlTextEditorDelegate> _pasteDelegate;
}

@property(nonatomic) id <ACUIPasscodeControlTextEditorDelegate> pasteDelegate; // @synthesize pasteDelegate=_pasteDelegate;
- (void)paste:(id)arg1;
- (void)dealloc;

@end

