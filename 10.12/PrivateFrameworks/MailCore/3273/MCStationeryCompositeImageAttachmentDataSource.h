//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/MCAttachmentDataSource-Protocol.h>

@class MCStationeryCompositeImage, NSString;

@interface MCStationeryCompositeImageAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    MCStationeryCompositeImage *_stationeryCompositeImage;
}

@property(readonly, copy, nonatomic) MCStationeryCompositeImage *stationeryCompositeImage; // @synthesize stationeryCompositeImage=_stationeryCompositeImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (id)approximateSizeForAccessLevel:(long long)arg1;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithStationeryCompositeImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

