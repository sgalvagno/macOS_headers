//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NSObject-Protocol.h>

@class NFTechnologyEvent, NSError;

@protocol NFFieldDetectSessionCallbacks <NSObject>
- (void)didDetectTechnology:(NFTechnologyEvent *)arg1;
- (void)didDetectField:(BOOL)arg1;
- (void)didStartSession:(NSError *)arg1;
@end

