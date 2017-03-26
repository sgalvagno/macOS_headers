//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGReverseTemplateJS-Protocol.h>

@class JSContext, JSVirtualMachine, NSMutableArray, NSString, NSURL, SGAsset, SGReverseTemplatesJSDataDetectors;
@protocol OS_dispatch_queue;

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS>
{
    JSVirtualMachine *_jsVM;
    NSMutableArray *_memoryMappedFiles;
    JSContext *_jsContext;
    SGReverseTemplatesJSDataDetectors *_dd;
    SGAsset *_asset;
    NSURL *_assetPath;
    NSString *_localeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)outputExceptionsFromOutput:(id)arg1;
- (void)emailToJsonLd:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)schemaOrgToOutput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)textMessageToOutput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)emailToOutput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)shouldDownloadFull:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2;
- (BOOL)shouldDownloadFull:(id)arg1;
- (void)holdXpcTransactionForShortDelay;
- (id)loadJSFromASCIIFile:(id)arg1;
- (void)initCurrentAsset;
- (id)processLoadRequestWithFileName:(id)arg1;
- (void)setAssetPath:(id)arg1 locale:(id)arg2;
- (void)freeJSContext;
- (id)getJSContext;
- (id)init;

@end

