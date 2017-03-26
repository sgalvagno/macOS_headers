//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PLPhotoAnalysisFaceSuggestion : NSObject
{
    NSNumber *_clusterSequenceNumber;
    NSString *_faceLocalIdentifier;
    NSArray *_matchingFaceLocalIdentifiers;
    BOOL _isConfirmed;
}

@property(readonly, nonatomic, getter=isConfirmed) BOOL confirmed; // @synthesize confirmed=_isConfirmed;
@property(readonly, copy, nonatomic) NSArray *matchingFaceLocalIdentifiers; // @synthesize matchingFaceLocalIdentifiers=_matchingFaceLocalIdentifiers;
@property(readonly, copy, nonatomic) NSString *faceLocalIdentifier; // @synthesize faceLocalIdentifier=_faceLocalIdentifier;
@property(readonly, copy, nonatomic) NSNumber *clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
- (void).cxx_destruct;
- (id)description;
- (id)suggestionDictionaryRepresentation;
- (id)initWithSuggestionDictionary:(id)arg1;

@end

