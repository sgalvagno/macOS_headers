//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, NSURL;

@protocol SGReverseTemplateJS
- (void)emailToJsonLd:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)setAssetPath:(NSURL *)arg1 locale:(NSString *)arg2;
- (void)schemaOrgToOutput:(NSArray *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)textMessageToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)emailToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)shouldDownloadFull:(NSDictionary *)arg1 reply:(void (^)(BOOL))arg2;
@end

