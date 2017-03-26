//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSProRenditionSliceInformation : NSObject
{
    long long _renditionType;
    double _boundaries[4];
    struct CGRect _destinationRect;
}

- (id)description;
- (struct CGRect)destinationRect;
- (double)positionOfSliceBoundary:(unsigned long long)arg1;
- (long long)renditionType;
- (struct CGSize)_bottomRightCapSize;
- (struct CGSize)_topLeftCapSize;
- (id)initWithRenditionType:(long long)arg1 destinationRect:(struct CGRect)arg2 topLeftInset:(struct CGSize)arg3 bottomRightInset:(struct CGSize)arg4;
- (id)initWithSliceInformation:(id)arg1 destinationRect:(struct CGRect)arg2;

@end

