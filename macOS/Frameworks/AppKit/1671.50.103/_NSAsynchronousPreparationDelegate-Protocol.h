//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class _NSAsynchronousPreparation;
@protocol _NSAsynchronousPreparationInputParameters;

@protocol _NSAsynchronousPreparationDelegate <NSObject>
- (void)asynchronousPreparationDidChangePreparedResult:(_NSAsynchronousPreparation *)arg1;
- (id)asynchronousPreparation:(_NSAsynchronousPreparation *)arg1 prepareResultUsingParameters:(id <_NSAsynchronousPreparationInputParameters>)arg2;
@end

