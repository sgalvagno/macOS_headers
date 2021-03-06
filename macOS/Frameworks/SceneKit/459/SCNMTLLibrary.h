//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SCNMTLLibraryManager;
@protocol MTLLibrary;

__attribute__((visibility("hidden")))
@interface SCNMTLLibrary : NSObject
{
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
    id <MTLLibrary> _library;
}

@property(readonly, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
- (void)_load;
- (void)dealloc;
- (id)initWithPath:(id)arg1 manager:(id)arg2;

@end

