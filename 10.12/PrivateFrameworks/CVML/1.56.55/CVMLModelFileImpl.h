//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLModelFile-Protocol.h>

@class NSString;

@interface CVMLModelFileImpl : NSObject <CVMLModelFile>
{
    const struct mapped_model_file *m_impl;
}

- (void)advise:(long long)arg1;
@property(readonly) unsigned long long length;
@property(readonly) const void *baseAddress;
- (id)initWithMappedModel:(const struct mapped_model_file *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *resourcePath;
@property(readonly) Class superclass;

@end

