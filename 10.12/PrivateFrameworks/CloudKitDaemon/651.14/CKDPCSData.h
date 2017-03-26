//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>
#import <CloudKitDaemon/PQLValuable-Protocol.h>

@class NSData, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface CKDPCSData : NSObject <PQLValuable, NSSecureCoding>
{
    struct _OpaquePCSShareProtection *_pcs;
    NSString *_etag;
    NSData *_pcsData;
    NSString *_pcsKeyID;
}

+ (BOOL)supportsSecureCoding;
+ (id)newFromSqliteValue:(struct Mem *)arg1;
@property(retain, nonatomic) NSString *pcsKeyID; // @synthesize pcsKeyID=_pcsKeyID;
@property(copy, nonatomic) NSData *pcsData; // @synthesize pcsData=_pcsData;
@property(copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
@property(readonly, nonatomic) id <NSSecureCoding> itemID;
@property(nonatomic) struct _OpaquePCSShareProtection *pcs; // @synthesize pcs=_pcs;
- (void)dealloc;
- (id)initWithPCSData:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

