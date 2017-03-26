//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIUFoundation/SIUClientProtocol-Protocol.h>

@class CreateImageOperation, NSOperationQueue, NSString;

@interface SIUImagingDelegate : NSObject <SIUClientProtocol>
{
    NSOperationQueue *_operationQueue;
    CreateImageOperation *_creationOperation;
    NSString *_outputPath;
    double _runTime;
}

@property(retain, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CreateImageOperation *creationOperation; // @synthesize creationOperation=_creationOperation;
- (void)installSourceFromList:(id)arg1;
- (void)setCreatedImagePath:(id)arg1;
- (void)outputImagingString:(id)arg1;
- (void)progressUpdate:(id)arg1;
- (void)stopImageCreation;
- (double)creationDuration;
- (void)createAnImageFromDictionary:(id)arg1 allowingInteraction:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

