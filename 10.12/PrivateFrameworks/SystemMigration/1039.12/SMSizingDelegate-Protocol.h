//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol SMSizingDelegate
- (BOOL)hasCustomPathsForSystem:(id)arg1 destinationSystem:(id)arg2;
- (void)beginSizeCalculationForForCustomPathType:(unsigned long long)arg1 user:(NSString *)arg2 onSourceSystem:(id)arg3 andDestinationSystem:(id)arg4;
- (void)beginSizeCalculationForComponent:(NSNumber *)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3;
- (NSNumber *)sizeForComponent:(NSNumber *)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3;
- (NSNumber *)sizeForPathGroup:(unsigned long long)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3;
@end

