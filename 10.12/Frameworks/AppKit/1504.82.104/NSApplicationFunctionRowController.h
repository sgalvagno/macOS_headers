//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFunctionRow, NSMutableArray, NSMutableSet, NSTouchBarCustomizationController, NSTouchBarEscapeKeyViewController, NSTouchBarFinder, NSTouchBarViewController;

__attribute__((visibility("hidden")))
@interface NSApplicationFunctionRowController : NSObject
{
    NSFunctionRow *_applicationFunctionRowElement;
    NSFunctionRow *_escapeKeyFunctionRowElement;
    NSMutableArray *_currentBars;
    NSTouchBarViewController *_applicationTouchBarViewController;
    NSTouchBarEscapeKeyViewController *_escapeKeyTouchBarViewController;
    NSTouchBarCustomizationController *_customizationController;
    NSMutableSet *_observedBars;
    NSTouchBarFinder *_finder;
    unsigned int _observingPopoversForCustomization:1;
}

+ (id)sharedApplicationFunctionRowController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(readonly) NSFunctionRow *applicationFunctionRow; // @synthesize applicationFunctionRow=_applicationFunctionRowElement;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_refreshFunctionBarView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_sync;
- (void)_teardown;
- (void)_noteBarsChanged;
@property(readonly) NSTouchBarCustomizationController *_customizationController;
- (void)_setup;
- (void)_updateEscapeKeyItem;
- (void)_stopObservingBar:(id)arg1;
- (void)_startObservingBar:(id)arg1;

@end

