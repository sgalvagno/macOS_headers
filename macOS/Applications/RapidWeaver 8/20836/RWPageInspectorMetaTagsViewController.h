//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSArrayController, NSButton, NSColor, NSImage, NSPopUpButton, NSScrollView, NSString, NSTableView, NSTextField, NSView, RWPage, RWSiteSettingsDropImageView;

__attribute__((visibility("hidden")))
@interface RWPageInspectorMetaTagsViewController : NSViewController
{
    BOOL removeObservers;
    NSScrollView *_scrollView;
    NSView *_contentView;
    NSArrayController *_pageHeadersController;
    NSTableView *_metaTagsTable;
    NSButton *_addButton;
    NSButton *_removeButton;
    NSPopUpButton *_optionsButton;
    NSButton *_doneButton;
    RWSiteSettingsDropImageView *_openGraphImageView;
    NSImage *_openGraphImage;
    NSTextField *_metaTemplateTextField;
}

+ (id)keyPathsForValuesAffectingOpenGraphImage;
+ (id)keyPathsForValuesAffectingOpenGraphDescriptionCharacterCountColor;
+ (id)keyPathsForValuesAffectingOpenGraphDescriptionCharacterCount;
+ (id)keyPathsForValuesAffectingDescriptionFieldCharacterCountColor;
+ (id)keyPathsForValuesAffectingDescriptionFieldCharacterCount;
+ (id)keyPathsForValuesAffectingRobotsDescription;
+ (id)keyPathsForValuesAffectingPage;
@property __weak NSTextField *metaTemplateTextField; // @synthesize metaTemplateTextField=_metaTemplateTextField;
@property(readonly) NSImage *openGraphImage; // @synthesize openGraphImage=_openGraphImage;
@property __weak RWSiteSettingsDropImageView *openGraphImageView; // @synthesize openGraphImageView=_openGraphImageView;
@property __weak NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property __weak NSPopUpButton *optionsButton; // @synthesize optionsButton=_optionsButton;
@property __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSTableView *metaTagsTable; // @synthesize metaTagsTable=_metaTagsTable;
@property __weak NSArrayController *pageHeadersController; // @synthesize pageHeadersController=_pageHeadersController;
@property __weak NSView *contentView; // @synthesize contentView=_contentView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)openPanelForDropImageView:(id)arg1;
- (void)_updateOpenGraphImageURL:(id)arg1;
- (unsigned long long)dropImageView:(id)arg1 shouldAcceptDrop:(id)arg2;
- (id)_allowedTypesForDropImageView:(id)arg1;
- (void)dropImageViewDidDeleteImage:(id)arg1;
- (void)dropImageView:(id)arg1 didChangeImage:(id)arg2;
@property(readonly) NSColor *openGraphDescriptionCharacterCountColor;
@property(readonly) NSString *openGraphDescriptionCharacterCount;
@property(readonly) NSColor *descriptionFieldCharacterCountColor;
@property(readonly) NSString *descriptionFieldCharacterCount;
@property(readonly) NSString *robotsDescription;
@property(readonly) RWPage *page;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)removeSelectedMetaTag:(id)arg1;
- (void)addMetaTag:(id)arg1;
- (void)addRemoveDefaultMetaTag:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardownObservers;
- (void)setupObservers;
- (void)viewDidLoad;
- (void)dealloc;

@end

