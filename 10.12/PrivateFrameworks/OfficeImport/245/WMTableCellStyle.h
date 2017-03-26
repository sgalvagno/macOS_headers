//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/WMStyle.h>

__attribute__((visibility("hidden")))
@interface WMTableCellStyle : WMStyle
{
    double mLeftPadding;
    double mRightPadding;
}

+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
+ (id)dominantColorOf:(id)arg1;
- (double)rightPadding;
- (double)leftPadding;
- (void)addTableCellProperties:(id)arg1;
- (void)addTableCellStyleProperties:(id)arg1;
- (id)initWithTableCellProperties:(id)arg1;

@end

