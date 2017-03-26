//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup
{
    double _scale;
    struct _cuintproperties {
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isOpaque:1;
        unsigned int _reserved:26;
    } _textureProperties;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (struct CGRect)alphaCroppedRect;
- (id)description;
@property(readonly, nonatomic) BOOL isAlphaCropped;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) int exifOrientation;
- (id)textureWithBufferAllocator:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (BOOL)_cacheRenditionProperties;

@end

