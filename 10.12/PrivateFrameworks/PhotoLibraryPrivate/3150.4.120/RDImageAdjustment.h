//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSNumber, NSString, RDImageAdjustmentTable;

@interface RDImageAdjustment : RDModel
{
}

+ (Class)tableClass;
@property(readonly, nonatomic) long long dbVersion;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) BOOL isEnabled;
@property(readonly, copy, nonatomic) NSNumber *adjIndex;
@property(readonly, copy, nonatomic) NSString *maskUuid;
@property(readonly, copy, nonatomic) NSString *versionUuid;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) RDImageAdjustmentTable *table;

@end

