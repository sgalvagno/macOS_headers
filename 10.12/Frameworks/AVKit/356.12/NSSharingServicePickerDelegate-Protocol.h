//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class NSArray, NSSharingService, NSSharingServicePicker;
@protocol NSSharingServiceDelegate;

@protocol NSSharingServicePickerDelegate <NSObject>

@optional
- (void)sharingServicePicker:(NSSharingServicePicker *)arg1 didChooseSharingService:(NSSharingService *)arg2;
- (id <NSSharingServiceDelegate>)sharingServicePicker:(NSSharingServicePicker *)arg1 delegateForSharingService:(NSSharingService *)arg2;
- (NSArray *)sharingServicePicker:(NSSharingServicePicker *)arg1 sharingServicesForItems:(NSArray *)arg2 proposedSharingServices:(NSArray *)arg3;
@end

