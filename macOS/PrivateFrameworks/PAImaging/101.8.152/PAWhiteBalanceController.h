//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, NUColorSampler, PAImageItemController;

@interface PAWhiteBalanceController : NSObject
{
    PAImageItemController *_imageItemController;
    NSUUID *_operationUUID;
}

@property(readonly) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
- (void).cxx_destruct;
@property(readonly) NUColorSampler *sampler;
- (void)processRAWTempTintColor:(id)arg1;
- (void)processPickedColor:(id)arg1;
- (void)_setTemperature:(double)arg1 tint:(double)arg2;
- (void)_setTemperatureAndTintFromRGBA:(double *)arg1;
- (void)setAuto;
- (void)reset;
@property int whiteBalanceType;
- (id)_descriptionEditController;
- (id)initWithAsset:(id)arg1 operationUUID:(id)arg2;

@end

