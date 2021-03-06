//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import "WFContentItemClass.h"

@class NSItemProvider, NSString, WFFileType;

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass>
{
    BOOL _useNewLoadingAPI;
    NSString *_contentName;
    WFFileType *_fileURLType;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1;
+ (id)itemProviderTypeIdentifierOverrides;
@property(retain, nonatomic) WFFileType *fileURLType; // @synthesize fileURLType=_fileURLType;
@property(nonatomic) BOOL useNewLoadingAPI; // @synthesize useNewLoadingAPI=_useNewLoadingAPI;
@property(copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
- (void).cxx_destruct;
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)cachesSupportedTypes;
- (id)outputTypes;
- (id)name;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateObjectRepresentationWithNewAPI:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateFileRepresentationWithNewAPI:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
@property(readonly, nonatomic) NSItemProvider *itemProvider;

@end

