//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AVSharingServicesDelegate;

@interface AVShareController : NSObject
{
    id <AVSharingServicesDelegate> _delegate;
}

@property __weak id <AVSharingServicesDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)shareItemURL;
- (void)showSharingServicePickerForPlayerView:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (void)populateSharingServicesForPlayerView:(id)arg1 menu:(id)arg2;

@end

