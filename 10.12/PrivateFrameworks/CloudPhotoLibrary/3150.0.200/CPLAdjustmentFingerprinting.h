//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLAdjustments, CPLResource;

@interface CPLAdjustmentFingerprinting : NSObject
{
    BOOL _hasRedEye;
    BOOL _hasAutoEnhance;
    BOOL _hasSimpleLightenDarken;
    BOOL _hasOtherAdjustments;
    CPLAdjustments *_otherAdjustments;
    CPLResource *_baseImage;
    CPLResource *_largeAdjustmentData;
    CPLResource *_secondaryAdjustmentData;
}

@property(retain, nonatomic) CPLResource *secondaryAdjustmentData; // @synthesize secondaryAdjustmentData=_secondaryAdjustmentData;
@property(retain, nonatomic) CPLResource *largeAdjustmentData; // @synthesize largeAdjustmentData=_largeAdjustmentData;
@property(retain, nonatomic) CPLResource *baseImage; // @synthesize baseImage=_baseImage;
@property(retain, nonatomic) CPLAdjustments *otherAdjustments; // @synthesize otherAdjustments=_otherAdjustments;
@property(nonatomic) BOOL hasOtherAdjustments; // @synthesize hasOtherAdjustments=_hasOtherAdjustments;
@property(nonatomic) BOOL hasSimpleLightenDarken; // @synthesize hasSimpleLightenDarken=_hasSimpleLightenDarken;
@property(nonatomic) BOOL hasAutoEnhance; // @synthesize hasAutoEnhance=_hasAutoEnhance;
@property(nonatomic) BOOL hasRedEye; // @synthesize hasRedEye=_hasRedEye;
- (void).cxx_destruct;
- (id)otherAdjustmentsFingerprint;
- (id)similarToOriginalAdjustmentsFingerprint;

@end

