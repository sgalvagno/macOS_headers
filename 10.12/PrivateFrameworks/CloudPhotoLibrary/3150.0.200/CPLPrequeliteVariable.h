//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/PQLInjecting-Protocol.h>

@class CPLPrequeliteType, NSData, NSString, PQLNameInjection;

@interface CPLPrequeliteVariable : NSObject <PQLInjecting>
{
    PQLNameInjection *_injection;
    id _cachedValue;
    BOOL _hasCachedValue;
    NSString *_variableName;
    CPLPrequeliteType *_type;
}

+ (id)indexVariableForVariableWithName:(id)arg1 forTable:(id)arg2;
+ (id)variableWithName:(id)arg1 forTable:(id)arg2 type:(id)arg3;
+ (id)variableWithName:(id)arg1 type:(id)arg2;
@property(readonly) CPLPrequeliteType *type; // @synthesize type=_type;
@property(readonly) NSString *variableName; // @synthesize variableName=_variableName;
- (void).cxx_destruct;
- (void)discardCachedValue;
- (void)setCachedValue:(id)arg1;
- (id)cachedValue;
- (BOOL)hasCachedValue;
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
@property(readonly, nonatomic) NSData *sql;
- (id)initWithName:(id)arg1 table:(id)arg2 type:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

