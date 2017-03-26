//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/MKOldWindowModuleController.h>

@class NSProDocumentTabModule;

@interface NSProWindowModuleController : MKOldWindowModuleController
{
    NSProDocumentTabModule *_documentTabModule;
    void *_proReserved7;
    void *_proReserved8;
    void *_proReserved9;
}

- (id)customContentSeparatorColorForState:(BOOL)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)_installModuleView;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)installAllDocumentsForcefully:(BOOL)arg1;
- (void)installAllDocuments;
- (void)installOneDocument;
- (void)installDocument:(id)arg1;
- (void)setDocumentTabModule:(id)arg1;
- (id)documentTabModule;

@end

