//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMType, NSArray, NSDictionary, NSMutableDictionary;

@interface AMTypeRegistry : NSObject
{
    NSArray *_basicTypes;
    NSDictionary *_categorizedBasicTypes;
    NSArray *_customApplicationTypes;
    NSDictionary *_categorizedCustomApplicationTypes;
    NSMutableDictionary *_typesByAutomatorIdentifier;
    AMType *_nothingType;
    AMType *_unknownType;
}

+ (id)sharedTypeRegistry;
@property(readonly, retain) AMType *unknownType; // @synthesize unknownType=_unknownType;
@property(readonly, retain) AMType *nothingType; // @synthesize nothingType=_nothingType;
- (id)imageRepresentationTypeForObject:(id)arg1;
- (id)imageRepresentationForObject:(id)arg1;
- (id)humanReadableNameForObject:(id)arg1 delimiter:(id)arg2;
- (id)typeWithAutomatorIdentifier:(id)arg1;
- (id)typesForApplicationWithBundleIdentifier:(id)arg1;
- (id)init;
@property(readonly, retain) NSDictionary *categorizedBasicTypes; // @synthesize categorizedBasicTypes=_categorizedBasicTypes;
@property(readonly, retain) NSArray *appBundleIDsDeclaringTypes;
- (void)_generateTypesIfNeeded;
- (id)_categorizeCustomApplicationTypes:(id)arg1;
- (id)_customApplicationTypes;
- (id)_internalCustomApplicationTypes;
- (id)_categorizeBasicTypes:(id)arg1;
- (id)_basicTypes;
- (void)_registerTypes:(id)arg1;
- (void)_registerType:(id)arg1;

@end

