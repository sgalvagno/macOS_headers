//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreInterest/IFPropagatedScoreEngine-Protocol.h>

@class NSString;

@interface IFPropagatedScoreEngineNaive : NSObject <IFPropagatedScoreEngine>
{
}

- (double)propagatedScoreForSensedScore:(double)arg1 destination:(id)arg2 distance:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

