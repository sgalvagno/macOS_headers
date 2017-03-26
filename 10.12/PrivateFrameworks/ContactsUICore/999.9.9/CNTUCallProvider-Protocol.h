//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, NSSet, NSString;
@protocol CNTUDialRequest;

@protocol CNTUCallProvider <NSObject>
@property(readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, nonatomic) BOOL supportsVideo;
@property(readonly, nonatomic) BOOL supportsAudio;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id <CNTUDialRequest>)dialRequestForDestinationID:(NSString *)arg1 customIdentifier:(NSString *)arg2 contact:(CNContact *)arg3 video:(BOOL)arg4;
@end

