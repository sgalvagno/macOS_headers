//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, Item, NSDictionary, NSString;

@protocol ITItemViewProtocol <NSObject>
@property(readonly, nonatomic) BOOL isSeparator;
@property(nonatomic, setter=setTransient:) BOOL isTransient;
@property(nonatomic, setter=setDimmed:) BOOL isDimmed;
@property(nonatomic, setter=setChecked:) BOOL isChecked;
@property(retain, nonatomic) CALayer *layer;
@property(readonly, nonatomic) struct CGRect frame;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) Item *item;
- (void)resetZoom;
- (void)zoom;
- (BOOL)hitTestX:(double)arg1 isScrollbarVisible:(BOOL)arg2;
- (void)redraw;
- (void)drawSizeValueSelected:(BOOL)arg1;
- (struct CGRect)nameFrame;
- (NSDictionary *)nameTextAttributesSelected:(BOOL)arg1;
- (void)drawIcon;
- (void)setFrameWidth:(double)arg1;
- (void)setFrameOriginYByIndex:(double)arg1;
@end

