//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSPObject.h"

@class KNUIState;

@interface KNArchivedUIState : TSPObject
{
    KNUIState *_uiState;
}

@property(readonly, nonatomic) KNUIState *uiState; // @synthesize uiState=_uiState;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)p_validateViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (BOOL)validateDesktopViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (BOOL)validateMobileViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (id)initWithUIState:(id)arg1 context:(id)arg2;

@end

