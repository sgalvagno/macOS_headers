//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAView.h>

#import "LgSectionView-Protocol.h"

@class CLgView;

@interface CLgAudioEditorInspectorView : MAView <LgSectionView>
{
    CLgView *parentView;
}

@property CLgView *parentView; // @synthesize parentView;
- (void)drawRect:(struct CGRect)arg1;
- (struct FENSTER *)Fenster;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)hasPlayhead;
- (BOOL)isContents;
@property(readonly) int section;

@end

