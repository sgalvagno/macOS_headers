//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPrediction : NSObject
{
    ABLEStaticMapInclusiveDomainVectorRange *_bonDoubleMap;
}

+ (id)bonPredictWithArray:(id)arg1;
+ (id)bonPredict;
@property(retain) ABLEStaticMapInclusiveDomainVectorRange *bonDoubleMap; // @synthesize bonDoubleMap=_bonDoubleMap;
- (void).cxx_destruct;
- (float)lookupForPredicted:(float)arg1 andBatteryLevel:(float)arg2;
- (id)initWithJsonResource:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

