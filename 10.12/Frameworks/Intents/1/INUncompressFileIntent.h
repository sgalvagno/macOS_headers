//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INUncompressFileIntent-Protocol.h>

@class NSString;

@interface INUncompressFileIntent : INIntent <INUncompressFileIntent>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setEntityName:(id)arg1;
@property(readonly, copy) NSString *entityName;
- (void)setEntityType:(id)arg1;
@property(readonly, copy) NSString *entityType;
- (id)initWithEntityType:(id)arg1 entityName:(id)arg2;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

