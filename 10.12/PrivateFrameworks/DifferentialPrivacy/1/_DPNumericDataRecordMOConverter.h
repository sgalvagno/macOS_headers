//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPRecordConverter-Protocol.h>

@interface _DPNumericDataRecordMOConverter : NSObject <_DPRecordConverter>
{
}

- (id)updateRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRecord:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)copyRecord:(id)arg1 intoManagedObject:(id)arg2;
- (id)createRecordFromManagedObject:(id)arg1;

@end

