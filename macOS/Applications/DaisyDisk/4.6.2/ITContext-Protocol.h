//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class ITSelection, ItemTableViewStyles;
@protocol IXHostProtocol;

@protocol ITContext
@property(readonly, nonatomic) long long sizeMathBase;
@property(readonly, nonatomic) double sizeCellWidth;
@property(readonly, nonatomic) double sizeUnitCellWidth;
@property(readonly, nonatomic) double sizeFractionCellWidth;
@property(readonly, nonatomic) double sizeIntegerCellWidth;
@property(readonly, nonatomic) ItemTableViewStyles *styles;
@property(readonly, nonatomic) id <IXHostProtocol> ixHost;
@property(readonly, nonatomic) BOOL errorMode;
@property(readonly, nonatomic) ITSelection *selection;
@end

