//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PKDistribution;

@interface PKProductArchiver : NSObject
{
    NSString *_productPath;
    NSString *_baselineUnarchivedProduct;
    CDUnknownBlockType _baselineNameMapper;
    CDUnknownBlockType _writeActionHandler;
    PKDistribution *_overrideDistribution;
    BOOL _copyOwnershipFromOriginalBom;
    NSDictionary *_options;
}

@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSString *baselineUnarchivedProduct; // @synthesize baselineUnarchivedProduct=_baselineUnarchivedProduct;
@property(retain) PKDistribution *overrideDistribution; // @synthesize overrideDistribution=_overrideDistribution;
@property BOOL copyOwnershipFromOriginalBom; // @synthesize copyOwnershipFromOriginalBom=_copyOwnershipFromOriginalBom;
- (BOOL)_writeScriptsAtPath:(id)arg1 toArchive:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (BOOL)_writePackageAtPath:(id)arg1 toArchive:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (BOOL)writeToArchive:(id)arg1 error:(id *)arg2;
- (void)setWriteActionHandler:(CDUnknownBlockType)arg1;
- (void)setMapBaselineNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUnarchivedProduct:(id)arg1;

@end

