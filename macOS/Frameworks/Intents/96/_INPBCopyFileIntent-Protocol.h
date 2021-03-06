//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBFileProperty, _INPBIntentMetadata, _INPBString;

@protocol _INPBCopyFileIntent <NSObject>
+ (Class)propertiesType;
@property(nonatomic) BOOL hasSourceType;
@property(nonatomic) int sourceType;
@property(readonly, nonatomic) BOOL hasSourceName;
@property(retain, nonatomic) _INPBString *sourceName;
@property(readonly, nonatomic) unsigned long long propertiesCount;
@property(copy, nonatomic) NSArray *properties;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) BOOL hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@property(nonatomic) BOOL hasDestinationType;
@property(nonatomic) int destinationType;
@property(readonly, nonatomic) BOOL hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsSourceType:(NSString *)arg1;
- (NSString *)sourceTypeAsString:(int)arg1;
- (_INPBFileProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (void)addProperties:(_INPBFileProperty *)arg1;
- (void)clearProperties;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(NSString *)arg1;
- (NSString *)destinationTypeAsString:(int)arg1;
@end

