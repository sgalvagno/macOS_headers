//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPUImageColorAnalysis, NSImage;

@interface NPUImageColorAnalyzer : NSObject
{
    NPUImageColorAnalysis *_cachedAnalysis;
    NSImage *_image;
}

@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1;

@end

