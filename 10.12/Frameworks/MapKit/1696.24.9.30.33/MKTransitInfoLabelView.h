//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKUILabel.h>

@class MKArtworkDataSourceCache, MKMapItem, NSArray;

@interface MKTransitInfoLabelView : _MKUILabel
{
    BOOL _truncateBySwitchingToTextOnly;
    BOOL _containsText;
    double _maxWidth;
    MKMapItem *_mapItem;
    long long _shieldSize;
    long long _iconSize;
    NSArray *_labelItems;
    double _spaceBetweenShields;
    double _spaceBetweenIcons;
    MKArtworkDataSourceCache *_artworkCache;
}

@property(retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(readonly, nonatomic) BOOL containsText; // @synthesize containsText=_containsText;
@property(nonatomic) double spaceBetweenIcons; // @synthesize spaceBetweenIcons=_spaceBetweenIcons;
@property(nonatomic) double spaceBetweenShields; // @synthesize spaceBetweenShields=_spaceBetweenShields;
@property(copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) BOOL truncateBySwitchingToTextOnly; // @synthesize truncateBySwitchingToTextOnly=_truncateBySwitchingToTextOnly;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (id)_imageForShieldDataSource:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_stringAttributes;
- (id)_generateText:(BOOL)arg1 allowElipsis:(BOOL)arg2;
- (void)_setupLabelInfo;
- (void)dealloc;
- (id)init;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)initWithMapItem:(id)arg1;

@end

