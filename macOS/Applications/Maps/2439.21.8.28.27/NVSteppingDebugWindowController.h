//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NVRoute;

__attribute__((visibility("hidden")))
@interface NVSteppingDebugWindowController : NSWindowController
{
    NVRoute *_route;
    NSArray *_signs;
}

@property(retain, nonatomic) NSArray *signs; // @synthesize signs=_signs;
@property(retain, nonatomic) NVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)transitStepForSign:(id)arg1;
- (void)updateRoute:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)nibName;

@end

