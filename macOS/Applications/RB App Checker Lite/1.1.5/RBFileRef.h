//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItem.h"
#import "RB_FileRefProtocol.h"

@class NSImage, NSMutableDictionary, NSString, NSURL;

@interface RBFileRef : NSObject <RB_FileRefProtocol, QLPreviewItem>
{
    struct FSRef ref;
    struct FSCatalogInfo cinfo;
    unsigned int info;
    unsigned int lsflags;
    char *posix;
    NSString *relPath;
    NSImage *smallIcon;
    id executable;
    id <RB_FileRefProtocol> facade;
    NSMutableDictionary *dictionary;
}

+ (id)topLevelRefWithPath:(id)arg1;
+ (id)fileRefWithPath:(id)arg1;
+ (void)invalidateContainerRefForSet:(id)arg1;
+ (id)containerRefForSet:(id)arg1;
- (id)iconForSize:(struct CGSize)arg1 preview:(BOOL)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned short)mode;
- (unsigned int)lsflags;
- (struct FSCatalogInfo *)cinfo;
- (BOOL)isAlias;
- (BOOL)isFolder;
- (struct FSRef *)FSRef;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *previewItemURL;
- (id)URL;
- (void)setRelPath:(id)arg1 forSet:(id)arg2;
- (id)relPathForSet:(id)arg1;
- (id)parent;
- (BOOL)conformsTo:(id)arg1;
- (id)UTI;
- (id)attribute:(struct __CFString *)arg1;
- (id)mainExecutable;
- (BOOL)isPackage;
- (BOOL)isFramework;
- (BOOL)isApplication;
- (id)extension;
- (id)displayName;
- (id)fileName;
- (void)setFacade:(id)arg1;
- (id)facade;
- (id)path;
- (char *)posix;
- (BOOL)isValid;
- (id)purged;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithRef:(struct FSRef *)arg1 andInfo:(struct FSCatalogInfo *)arg2;
- (id)initWithPath:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) id previewItemDisplayState;
@property(readonly) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

