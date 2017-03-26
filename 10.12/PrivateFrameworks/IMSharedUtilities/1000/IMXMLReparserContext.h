//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface IMXMLReparserContext : NSObject
{
    NSString *_inContent;
    NSString *_outContent;
    NSArray *_attributesToPreserve;
    NSDictionary *_attributesToMerge;
    NSError *_error;
}

@property(readonly, retain, nonatomic) NSDictionary *attributesToMerge; // @synthesize attributesToMerge=_attributesToMerge;
@property(readonly, retain, nonatomic) NSArray *attributesToPreserve; // @synthesize attributesToPreserve=_attributesToPreserve;
@property(readonly, retain, nonatomic) NSString *outContent; // @synthesize outContent=_outContent;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, retain) NSString *_inContent; // @synthesize _inContent;
- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;

@end

