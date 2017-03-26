//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : NSView
{
    NSImageView *_placeholderImageView;
    NSImageView *_cardImageView;
}

@property(retain, nonatomic) NSImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) NSImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)_updateCardImage:(struct CGImage *)arg1;
- (void)_prepareConstraints;
- (id)initWithRemotePaymentInstrument:(id)arg1;

@end

