//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"

@class NSArray, NSPasteboard, _TtC22Asset_Catalog_Tinkerer27QuickLookableCollectionView;

@interface Asset_Catalog_Tinkerer.(QuickLookableCollectionViewPreviewHandler in _F5C37F67678F591E915BD31797FB9EAB) : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate>
{
    // Error parsing type: , name: pasteboard
    // Error parsing type: , name: collectionView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
@property(nonatomic, readonly) NSArray *previewItems;
@property(nonatomic, retain) _TtC22Asset_Catalog_Tinkerer27QuickLookableCollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic, retain) NSPasteboard *pasteboard; // @synthesize pasteboard;

@end

