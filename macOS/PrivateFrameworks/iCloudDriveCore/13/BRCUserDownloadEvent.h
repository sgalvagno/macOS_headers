//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/BRCEventMetric.h>

@class NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface BRCUserDownloadEvent : BRCEventMetric
{
    BOOL _didSucceed;
    BOOL _isDownloadingForBackup;
    BOOL _isRecursiveDownload;
    NSUUID *_operationID;
    NSMutableSet *_rowIDs;
    unsigned long long _itemCount;
    unsigned long long _totalContentSize;
}

@property(nonatomic) unsigned long long totalContentSize; // @synthesize totalContentSize=_totalContentSize;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) BOOL isRecursiveDownload; // @synthesize isRecursiveDownload=_isRecursiveDownload;
@property(nonatomic) BOOL isDownloadingForBackup; // @synthesize isDownloadingForBackup=_isDownloadingForBackup;
@property(nonatomic) BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
@property(retain, nonatomic) NSMutableSet *rowIDs; // @synthesize rowIDs=_rowIDs;
@property(retain, nonatomic) NSUUID *operationID; // @synthesize operationID=_operationID;
- (void).cxx_destruct;
- (id)subDescription;
- (id)additionalPayload;
- (id)init;

@end

