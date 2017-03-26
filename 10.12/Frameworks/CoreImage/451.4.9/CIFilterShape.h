//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>

@interface CIFilterShape : NSObject <NSCopying>
{
    unsigned int _pad;
    void *_priv;
}

+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)_shapeInfinite;
- (id)description;
@property(readonly) struct CGRect extent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)intersectWithRect:(struct CGRect)arg1;
- (id)intersectWith:(id)arg1;
- (id)unionWithRect:(struct CGRect)arg1;
- (id)unionWith:(id)arg1;
- (id)insetByX:(int)arg1 Y:(int)arg2;
- (id)transformBy:(struct CGAffineTransform)arg1 interior:(BOOL)arg2;
- (id)initWithStruct:(struct filterShape *)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (void)finalize;
- (void)dealloc;
- (struct CGSRegionObject *)CGSRegion;

@end

