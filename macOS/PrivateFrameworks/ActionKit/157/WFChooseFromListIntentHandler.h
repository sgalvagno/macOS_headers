//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFChooseFromListIntentHandling.h"

@class NSString;

@interface WFChooseFromListIntentHandler : NSObject <WFChooseFromListIntentHandling>
{
}

- (void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleChooseFromList:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

