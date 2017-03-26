//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class NSArray, NSMutableArray, NSOperationQueue;

@interface SPCElement : SPCObject
{
    NSOperationQueue *_observerChangesQueue;
    SPCElement *_superelement;
    NSArray *_observers;
    NSMutableArray *_elementParts;
    long long _themeDocumentElementID;
}

@property(nonatomic) long long themeDocumentElementID; // @synthesize themeDocumentElementID=_themeDocumentElementID;
@property(retain, nonatomic) NSMutableArray *elementParts; // @synthesize elementParts=_elementParts;
@property(readonly, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(nonatomic) SPCElement *superelement; // @synthesize superelement=_superelement;
- (void)applyAssetToElementStates:(id)arg1;
- (void)applyAssetFilesToElementStates:(id)arg1;
- (id)applicableAssetFilesFromAsset:(id)arg1 forElementPart:(id)arg2;
- (id)_applicableAssetFilesByElementPartWithAssetFiles:(id)arg1;
- (id)logicalPathToEnvironment;
- (id)imageForElementPartNamed:(id)arg1 inState:(id)arg2;
- (id)imageForElementPartAtIndex:(unsigned long long)arg1 inState:(id)arg2;
- (void)removeObjectFromElementPartsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inElementPartsAtIndex:(unsigned long long)arg2;
- (void)addElementPart:(id)arg1;
- (id)recursiveDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

@end

