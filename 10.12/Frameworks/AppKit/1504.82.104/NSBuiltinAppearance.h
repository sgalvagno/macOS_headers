//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAppearance.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface NSBuiltinAppearance : NSAppearance
{
    NSBundle *_systemAppearanceBundle;
}

- (id)_bundleResourceName;
- (id)_appearanceForSourceListTableView;
- (BOOL)_isBuiltinAppearance;
- (void)dealloc;
- (id)initWithBundleResourceName:(id)arg1;

@end

