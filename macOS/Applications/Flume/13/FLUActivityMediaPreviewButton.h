//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUHoverButton.h"

@class FLUMedia;

@interface FLUActivityMediaPreviewButton : FLUHoverButton
{
    FLUMedia *_media;
}

@property(retain, nonatomic) FLUMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

