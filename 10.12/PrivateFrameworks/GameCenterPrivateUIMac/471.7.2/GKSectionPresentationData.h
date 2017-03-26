//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKSectionPresentationData : NSObject
{
    long long _section;
    double _headerMinY;
    double _headerMaxY;
    double _itemsMinY;
    double _itemsMaxY;
    double _footerMinY;
    double _footerMaxY;
    double _minY;
    double _maxY;
    double _showMoreMaxY;
    unsigned long long _numHeaders;
    unsigned long long _numFooters;
    unsigned long long _numOverlays;
    unsigned long long _numItems;
    unsigned long long _overlayOffset;
}

@property(nonatomic) unsigned long long overlayOffset; // @synthesize overlayOffset=_overlayOffset;
@property(nonatomic) unsigned long long numItems; // @synthesize numItems=_numItems;
@property(nonatomic) unsigned long long numOverlays; // @synthesize numOverlays=_numOverlays;
@property(nonatomic) unsigned long long numFooters; // @synthesize numFooters=_numFooters;
@property(nonatomic) unsigned long long numHeaders; // @synthesize numHeaders=_numHeaders;
@property(nonatomic) double showMoreMaxY; // @synthesize showMoreMaxY=_showMoreMaxY;
@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(nonatomic) double minY; // @synthesize minY=_minY;
@property(nonatomic) double footerMaxY; // @synthesize footerMaxY=_footerMaxY;
@property(nonatomic) double footerMinY; // @synthesize footerMinY=_footerMinY;
@property(nonatomic) double itemsMaxY; // @synthesize itemsMaxY=_itemsMaxY;
@property(nonatomic) double itemsMinY; // @synthesize itemsMinY=_itemsMinY;
@property(nonatomic) double headerMaxY; // @synthesize headerMaxY=_headerMaxY;
@property(nonatomic) double headerMinY; // @synthesize headerMinY=_headerMinY;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void)updateWithLayoutAttributes:(id)arg1 supplementaryLocation:(unsigned long long)arg2;
- (id)description;
- (id)initWithSection:(long long)arg1 presentationData:(id)arg2;

@end

