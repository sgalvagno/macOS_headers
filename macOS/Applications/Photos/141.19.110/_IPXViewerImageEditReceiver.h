//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PADescriptionEditReceiver-Protocol.h"

@class IPXViewerImageController, NSString;

__attribute__((visibility("hidden")))
@interface _IPXViewerImageEditReceiver : NSObject <PADescriptionEditReceiver>
{
    IPXViewerImageController *_controller;
}

- (void).cxx_destruct;
@property __weak IPXViewerImageController *controller; // @synthesize controller=_controller;
- (void)descriptionEditController:(id)arg1 videoComplementVisibilityChanged:(BOOL)arg2;
- (void)descriptionEditController:(id)arg1 renderDescriptionOrientationChanged:(id)arg2;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 endInteractiveForOperationAtIndex:(unsigned long long)arg3;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 beginInteractiveForOperationAtIndex:(unsigned long long)arg3;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 operationDidChangeAtIndex:(unsigned long long)arg3 invalidMasterRect:(struct CGRect)arg4;
- (void)operationsChangedForDescriptionController:(id)arg1 renderDescription:(id)arg2;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

