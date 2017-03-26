//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProImageAndTextCell.h>

@class BKImageAndTextCellPrivateData, NSArray, NSString;

@interface BKImageAndTextCell : NSProImageAndTextCell
{
    struct OpaqueIconRef *_iconRef;
    BKImageAndTextCellPrivateData *_privateData;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (id)fieldEditorForView:(id)arg1;
@property(readonly) NSString *selectedBadge;
@property(retain) NSArray *badgeDescriptions; // @dynamic badgeDescriptions;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (struct CGRect)trackingRectForCellFrame:(struct CGRect)arg1;
- (void)setRolloverState:(long long)arg1;
- (long long)rolloverState;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_alwaysMakeSpaceForImage;
- (struct CGRect)_imageRectForCellRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)setObjectValue:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (id)badgeDescriptionForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
@property(readonly) double imageAspectRatio;
- (struct CGRect)_drawBadgesWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_updateBadgeCellsAndLayoutBadgesWithFrame:(struct CGRect)arg1 inView:(id)arg2 rects:(struct CGRect *)arg3;
- (void)_setSelectedBadge:(id)arg1;
- (id)_badgeCells;
- (void)_setBadgeRenditionKeys:(id)arg1;
- (id)_badgeRenditionKeys;
- (void)_setBadgeFacets:(id)arg1;
- (id)_badgeFacets;
- (void)_setBadges:(id)arg1;
- (id)_badges;
- (id)_privateData;
- (struct CGRect)_imageRectWithControlView:(id)arg1 inRect:(struct CGRect)arg2 srcImageSize:(struct CGSize)arg3 imageAspectRatio:(double)arg4;
- (struct CGSize)_imageSizeWithControlView:(id)arg1 srcImageSize:(struct CGSize)arg2 imageAspectRatio:(double)arg3;

@end

