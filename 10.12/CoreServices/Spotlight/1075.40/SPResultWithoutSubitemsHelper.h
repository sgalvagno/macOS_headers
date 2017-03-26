//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSPreviewController.h>

@class NSImage, NSImageView, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface SPResultWithoutSubitemsHelper : PRSPreviewController
{
    BOOL _awoke;
    NSString *_version;
    NSString *_filePath;
    NSString *_displayName;
    NSImage *_icon;
    NSString *_groupHeading;
    NSTextField *_appName;
    NSTextField *_appVersion;
    NSImageView *_iconView;
    NSView *_lineView;
    NSTextField *_kind;
    NSTextField *_size;
    NSTextField *_created;
    NSTextField *_modified;
    NSTextField *_lastOpened;
    NSLayoutConstraint *_vSpacerConstraint;
    NSLayoutConstraint *_hSpacerConstraint;
    NSView *_leftSpacer;
    NSView *_rightSpacer;
}

@property __weak NSView *rightSpacer; // @synthesize rightSpacer=_rightSpacer;
@property __weak NSView *leftSpacer; // @synthesize leftSpacer=_leftSpacer;
@property(retain) NSLayoutConstraint *hSpacerConstraint; // @synthesize hSpacerConstraint=_hSpacerConstraint;
@property(retain) NSLayoutConstraint *vSpacerConstraint; // @synthesize vSpacerConstraint=_vSpacerConstraint;
@property __weak NSTextField *lastOpened; // @synthesize lastOpened=_lastOpened;
@property __weak NSTextField *modified; // @synthesize modified=_modified;
@property __weak NSTextField *created; // @synthesize created=_created;
@property __weak NSTextField *size; // @synthesize size=_size;
@property __weak NSTextField *kind; // @synthesize kind=_kind;
@property __weak NSView *lineView; // @synthesize lineView=_lineView;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property __weak NSTextField *appVersion; // @synthesize appVersion=_appVersion;
@property __weak NSTextField *appName; // @synthesize appName=_appName;
@property(readonly) NSString *groupHeading; // @synthesize groupHeading=_groupHeading;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)openItem:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)awakeFromNib;
- (void)setupForObject:(id)arg1;
- (BOOL)addSlicesForObject:(id)arg1;
- (void)setupSlice:(id)arg1 forResult:(id)arg2 attribute:(id)arg3 lastView_p:(id *)arg4 constraints:(id)arg5;
- (id)init;

@end

