//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RDLibrarySearchResultCategoryData : NSObject
{
    NSString *_lowercaseString;
    int _type;
    NSString *_fullString;
    NSArray *_tokens;
    unsigned long long _annotation;
}

+ (BOOL)isGeoTokenType:(int)arg1;
@property unsigned long long annotation; // @synthesize annotation=_annotation;
@property(retain) NSArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSString *fullString; // @synthesize fullString=_fullString;
- (void).cxx_destruct;
- (id)description;
@property(readonly) unsigned long long messageTracerCategoryMask;
- (id)matchingTokenIndices:(id)arg1;
- (id)tokenOffsets;
- (id)escapedFullString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isSceneCategory;
@property int type; // @synthesize type=_type;
@property(readonly) BOOL isSceneTokenType;
@property(readonly) BOOL isHighConfidenceScene;
- (id)highConfidenceSceneEquivalent;
@property(readonly) BOOL isLowConfidenceScene;

@end

