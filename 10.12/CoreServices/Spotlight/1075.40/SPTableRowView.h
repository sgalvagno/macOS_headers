//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPBaseTableRowView.h"

@interface SPTableRowView : SPBaseTableRowView
{
    BOOL _gridlinedBelow;
    double _inset;
}

@property double inset; // @synthesize inset=_inset;
@property(getter=isGridlinedBelow) BOOL gridlinedBelow; // @synthesize gridlinedBelow=_gridlinedBelow;
- (void)drawBackgroundInRect:(struct CGRect)arg1;

@end

