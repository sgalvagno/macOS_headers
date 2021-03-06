//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@interface NSCollectionLayoutSpacing : NSObject <NSCopying>
{
    double _spacing;
    BOOL _isFlexible;
}

+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)defaultSpacing;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isFixedSpacing;
@property(readonly, nonatomic) BOOL isFlexibleSpacing;
@property(readonly, nonatomic) double spacing;
- (id)description;
- (id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2;

@end

