//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@interface CNObservable (CNAutocomplete)
- (id)networkObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;
- (id)localObservableWithScheduler:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;
- (id)localObservableWithScheduler:(id)arg1;
- (id)activityIndicatingObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
@end

