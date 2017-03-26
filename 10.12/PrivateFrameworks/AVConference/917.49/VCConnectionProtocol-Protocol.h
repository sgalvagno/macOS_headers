//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSString;
@protocol VCConnectionProtocol;

@protocol VCConnectionProtocol <NSObject>
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) unsigned int type;
@property int priority;
@property int remoteCellTech;
@property int localCellTech;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) BOOL isVPN;
@property(readonly) BOOL isRelay;
@property int cellularMTU;
@property(readonly) BOOL isIPv6;
@property(readonly) BOOL isRemoteOnCellular;
@property(readonly) BOOL isLocalOnCellular;
@property(readonly) BOOL isRemoteOnWiFi;
@property(readonly) BOOL isLocalOnWiFi;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)isOnSameInterfacesWithConnection:(id <VCConnectionProtocol>)arg1;
- (BOOL)isSameAsConnection:(id <VCConnectionProtocol>)arg1;
@end

