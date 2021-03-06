//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSNumber, NSString;

@interface DBTEAMLOGPaperContentAddToFolderDetails : NSObject <DBSerializable, NSCopying>
{
    NSString *_eventUuid;
    NSNumber *_targetIndex;
    NSNumber *_parentIndex;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *parentIndex; // @synthesize parentIndex=_parentIndex;
@property(readonly, nonatomic) NSNumber *targetIndex; // @synthesize targetIndex=_targetIndex;
@property(readonly, copy, nonatomic) NSString *eventUuid; // @synthesize eventUuid=_eventUuid;
- (void).cxx_destruct;
- (BOOL)isEqualToPaperContentAddToFolderDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithEventUuid:(id)arg1 targetIndex:(id)arg2 parentIndex:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

