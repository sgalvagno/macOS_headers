//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDIptcPropertyTable;

@interface RDIptcProperty : RDModel
{
}

+ (Class)tableClass;
@property(readonly, copy, nonatomic) NSDate *modDate;
@property(readonly, nonatomic) long long searchStringId;
@property(readonly, nonatomic) long long stringId;
@property(readonly, copy, nonatomic) NSString *propertyKey;
@property(readonly, nonatomic) long long versionId;
@property(readonly, nonatomic) RDIptcPropertyTable *table;

@end

