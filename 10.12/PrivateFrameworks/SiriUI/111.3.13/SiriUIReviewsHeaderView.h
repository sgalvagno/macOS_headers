//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/SiriUIReusableSubtitledHeaderView.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface SiriUIReviewsHeaderView : SiriUIReusableSubtitledHeaderView
{
    NSView *_ratingView;
    double _verticalSpaceNeededForRatingsView;
    NSView *_providerView;
    struct UIOffset _ratingViewOffset;
    struct UIOffset _providerViewOffset;
}

@property(nonatomic) struct UIOffset providerViewOffset; // @synthesize providerViewOffset=_providerViewOffset;
@property(retain, nonatomic) NSView *providerView; // @synthesize providerView=_providerView;
@property(nonatomic) double verticalSpaceNeededForRatingsView; // @synthesize verticalSpaceNeededForRatingsView=_verticalSpaceNeededForRatingsView;
@property(nonatomic) struct UIOffset ratingViewOffset; // @synthesize ratingViewOffset=_ratingViewOffset;
@property(retain, nonatomic) NSView *ratingView; // @synthesize ratingView=_ratingView;
- (void).cxx_destruct;
- (void)layout;
- (void)prepareForReuse;
- (double)desiredHeightForWidth:(double)arg1;

@end

