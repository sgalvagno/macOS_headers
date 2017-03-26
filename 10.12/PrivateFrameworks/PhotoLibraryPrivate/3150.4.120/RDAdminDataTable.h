//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDAdminDataTable : RDTable
{
    LiKeyPath *_propertyAreaKeyPath;
    LiKeyPath *_propertyNameKeyPath;
    LiKeyPath *_propertyValueKeyPath;
    LiKeyPath *_blobPropertyValueKeyPath;
    LiKeyPath *_storedDataTypeKeyPath;
    LiKeyPath *_persistAfterRebuildKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *persistAfterRebuildKeyPath; // @synthesize persistAfterRebuildKeyPath=_persistAfterRebuildKeyPath;
@property(readonly, nonatomic) LiKeyPath *storedDataTypeKeyPath; // @synthesize storedDataTypeKeyPath=_storedDataTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *blobPropertyValueKeyPath; // @synthesize blobPropertyValueKeyPath=_blobPropertyValueKeyPath;
@property(readonly, nonatomic) LiKeyPath *propertyValueKeyPath; // @synthesize propertyValueKeyPath=_propertyValueKeyPath;
@property(readonly, nonatomic) LiKeyPath *propertyNameKeyPath; // @synthesize propertyNameKeyPath=_propertyNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *propertyAreaKeyPath; // @synthesize propertyAreaKeyPath=_propertyAreaKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

