//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_IPThumbFactoryPhotoHelper.h"

@interface _IPThumbFactoryPhotoPanoramaHelper : _IPThumbFactoryPhotoHelper
{
}

- (void)renderFrameIntoCGContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2 asSelected:(BOOL)arg3 wantsDefaultFrame:(BOOL)arg4 inKeyView:(BOOL)arg5 rotated:(BOOL)arg6;
- (struct CGImage *)newThumbnailImageForPhoto:(struct IPPhotoInfo *)arg1 withSize:(struct CGSize)arg2 inRect:(struct CGRect)arg3 interpolationQuality:(int *)arg4 asSelected:(BOOL)arg5 wantsShadow:(BOOL)arg6 resolveAliases:(int)arg7 abort:(CDUnknownBlockType)arg8;
- (struct CGRect)rectForPhoto:(struct IPPhotoInfo *)arg1 inRect:(struct CGRect)arg2;

@end

