//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppContainer/ASBContainerAction.h>

@class NSString;

@interface ASBContainerActionCopy : ASBContainerAction
{
    NSString *_sourceSpec;
    NSString *_destSpec;
}

- (void).cxx_destruct;
- (BOOL)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;

@end

