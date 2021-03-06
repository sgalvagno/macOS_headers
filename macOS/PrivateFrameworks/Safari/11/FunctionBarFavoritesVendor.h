//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FunctionBarFavoritesVending.h"

@class CombinedFavoritesController, NSString, WebBookmarkList;

__attribute__((visibility("hidden")))
@interface FunctionBarFavoritesVendor : NSObject <FunctionBarFavoritesVending>
{
    CombinedFavoritesController *_combinedFavoritesController;
    id <FunctionBarFavoritesClient> _client;
    WebBookmarkList *_vendedFolder;
}

@property(nonatomic) __weak id <FunctionBarFavoritesClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_favoritesDidChange:(id)arg1;
- (void)_notifyClientOfRefresh;
- (id)_defaultVendedFolder;
- (void)getFunctionBarFavoritesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canNavigateUp;
@property(retain, nonatomic) WebBookmarkList *vendedFolder; // @synthesize vendedFolder=_vendedFolder;
- (void)dealloc;
- (id)initWithCombinedFavoritesController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

