//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class MKImageView, NSDate, NSImage, NSLayoutConstraint, NSString, _MKUILabel;

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView
{
    MKImageView *_pictureView;
    _MKUILabel *_detailLabel;
    _MKUILabel *_reviewLabel;
    NSDate *_date;
    NSLayoutConstraint *_reviewLabelTopConstraint;
    NSLayoutConstraint *_reviewLabelToBottomConstraint;
    NSLayoutConstraint *_reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
    unsigned long long _rating;
    NSString *_author;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) unsigned long long rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (void)updateDetailLabelText;
- (id)detailLabelText;
- (void)setAuthor:(id)arg1 date:(id)arg2 rating:(unsigned long long)arg3;
@property(nonatomic) __weak NSString *reviewText; // @dynamic reviewText;
@property(nonatomic) __weak NSImage *picture; // @dynamic picture;
- (void)updateConstraints;
- (void)_updatePictureTheme:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)standardDateAuthorLabel;
- (void)_updateBaselineConstraints;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

