//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVRegionOfInterest : NSObject
{
    struct CGRect _rect;
    struct CGPDFNode *_cgPdfNode;
    unsigned long long _mediaType;
    unsigned long long _readingOrder;
    double _medianFontSize;
}

+ (id)regionOfInterestWithRect:(struct CGRect)arg1;
@property unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property double medianFontSize; // @synthesize medianFontSize=_medianFontSize;
@property unsigned long long readingOrder; // @synthesize readingOrder=_readingOrder;
@property(nonatomic) struct CGPDFNode *cgPdfNode; // @synthesize cgPdfNode=_cgPdfNode;
@property struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (BOOL)isEqualTo:(id)arg1;
- (void)dealloc;
- (id)initRegionOfInterestWithRect:(struct CGRect)arg1;

@end

