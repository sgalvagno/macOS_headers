//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSSet, NSString;

@interface HFSelectedUserCollection : NSObject <NAIdentifiable>
{
    unsigned long long _type;
    NSSet *_specificUsers;
}

+ (id)collectionWithResolvedUsers:(id)arg1 inHome:(id)arg2;
+ (id)na_identity;
+ (id)collectionWithSpecificUsers:(id)arg1;
+ (id)currentUserCollection;
+ (id)allUsersCollection;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *specificUsers; // @synthesize specificUsers=_specificUsers;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)resolveSelectedUsersWithHome:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 specificUsers:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

