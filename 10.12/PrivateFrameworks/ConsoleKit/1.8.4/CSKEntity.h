//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ConsoleKit/CSKEntityPasteboardWritable-Protocol.h>
#import <ConsoleKit/CSKFilterMapping-Protocol.h>
#import <ConsoleKit/CSKStringsIndexerProtocol-Protocol.h>
#import <ConsoleKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString, NSTimeZone;

@interface CSKEntity : NSObject <CSKEntityPasteboardWritable, CSKFilterMapping, CSKStringsIndexerProtocol, NSCopying>
{
    BOOL _isVolatile;
    NSNumber *_identifier;
    NSString *_processImagePath;
    NSString *_libraryImagePath;
    NSDate *_timestamp;
    NSTimeZone *_timeZone;
    NSString *_formattedDateTime;
    NSString *_threadIdentifier;
    NSString *_processName;
    NSString *_libraryName;
    NSString *_libraryImageUUID;
    NSNumber *_processIdentifier;
    NSString *_formattedTime;
}

+ (id)compareDatesOfEntityA:(id)arg1 andEntityB:(id)arg2 withComparisonResult:(long long)arg3;
+ (id)csk_propertiesNameFromTableColumnIdentifiers:(id)arg1;
+ (id)overridedFilterValueForFilter:(id)arg1;
+ (id)propertyNameForFilter:(id)arg1;
@property(copy, nonatomic) NSString *formattedTime; // @synthesize formattedTime=_formattedTime;
@property(copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy, nonatomic) NSString *libraryImageUUID; // @synthesize libraryImageUUID=_libraryImageUUID;
@property(copy, nonatomic) NSString *libraryName; // @synthesize libraryName=_libraryName;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, nonatomic) BOOL isVolatile; // @synthesize isVolatile=_isVolatile;
@property(readonly, copy, nonatomic) NSString *formattedDateTime; // @synthesize formattedDateTime=_formattedDateTime;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *libraryImagePath; // @synthesize libraryImagePath=_libraryImagePath;
@property(readonly, copy, nonatomic) NSString *processImagePath; // @synthesize processImagePath=_processImagePath;
@property(readonly, copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)processIdentifierThreadIdentifierString;
- (BOOL)isEqualToEntity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 processImagePath:(id)arg2 libraryImagePath:(id)arg3 timestamp:(id)arg4 timeZone:(id)arg5 isVolatile:(BOOL)arg6;
- (id)init;
- (id)pasteboardDescriptionForProperties:(id)arg1;
- (void)csk_configureTableCellView:(id)arg1 withColumnIdentifier:(id)arg2 tableView:(id)arg3;
- (unsigned long long)stringDescriptionLengthForIndexer;
- (id)stringDescriptionForIndexer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

