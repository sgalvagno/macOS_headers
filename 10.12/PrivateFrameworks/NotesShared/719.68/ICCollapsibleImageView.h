//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICCollapsibleBaseView.h>

@class NSImage, NSImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView
{
    BOOL _shouldEnableLetterpressIfSupported;
    struct NSImage *_image;
    struct NSImageView *_imageView;
}

@property(nonatomic) BOOL shouldEnableLetterpressIfSupported; // @synthesize shouldEnableLetterpressIfSupported=_shouldEnableLetterpressIfSupported;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)performSetup;

@end

