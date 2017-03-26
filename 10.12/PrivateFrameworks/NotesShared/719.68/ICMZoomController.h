//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface ICMZoomController : NSObject
{
    BOOL _onlyAcceptsCustomZooms;
    double _zoomFactor;
    long long _localZoomFactorIndex;
    double _attachmentBrickZoomFactor;
    double _checklistZoomFactor;
    NSHashTable *_delegates;
    long long _savedZoomFactorIndex;
}

+ (double)checklistZoomFactor;
+ (double)attachmentBrickZoomFactor;
+ (double)noteListZoomFactor;
+ (double)globalZoomFactor;
+ (id)convertFontSizeArrayToMultipliersFromArray:(id)arg1;
+ (id)checklistZoomFactors;
+ (double)maxAttachmentBrickZoomFactor;
+ (id)attachmentBrickZoomFactors;
+ (id)noteListZoomFactors;
+ (id)localZoomFactors;
+ (id)globalZoomFactors;
+ (long long)globalZoomFactorIndex;
+ (void)setGlobalZoomFactorIndex:(long long)arg1;
@property(nonatomic) long long savedZoomFactorIndex; // @synthesize savedZoomFactorIndex=_savedZoomFactorIndex;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) BOOL onlyAcceptsCustomZooms; // @synthesize onlyAcceptsCustomZooms=_onlyAcceptsCustomZooms;
@property(nonatomic) double checklistZoomFactor; // @synthesize checklistZoomFactor=_checklistZoomFactor;
@property(nonatomic) double attachmentBrickZoomFactor; // @synthesize attachmentBrickZoomFactor=_attachmentBrickZoomFactor;
@property(nonatomic) long long localZoomFactorIndex; // @synthesize localZoomFactorIndex=_localZoomFactorIndex;
@property(readonly, nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg1;
- (void)notifyDelegates;
- (void)addDelegate:(id)arg1;
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomAttributedString:(id)arg1;
- (id)zoomAttributedString:(id)arg1;
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomAttributes:(id)arg1;
- (id)zoomAttributes:(id)arg1;
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(BOOL)arg2;
- (id)unzoomFontInAttributes:(id)arg1;
- (id)zoomFontInAttributes:(id)arg1;
- (id)unzoomFont:(id)arg1;
- (id)zoomFont:(id)arg1;
- (void)applyZoomFactorIndex;
- (BOOL)zoomToCustomFactor:(double)arg1;
- (BOOL)zoomResetToGlobalDefault;
- (BOOL)zoomOut;
- (BOOL)zoomIn;
- (BOOL)canZoomOut;
- (BOOL)canZoomIn;
@property(readonly, nonatomic) double localZoomFactor;
- (id)init;

@end

