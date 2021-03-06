//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSAccessibilityExtras-Protocol.h"
#import "TSAccessibilitySpecializer-Protocol.h"

@class NSString;

@interface TSAccessibility : NSObject <TSAccessibilitySpecializer, TSAccessibilityExtras>
{
    BOOL _accessibilitySupportLoaded;
}

+ (id)sharedInstance;
+ (id)specializedStringsTable;
+ (Class)specializedClass;
@property(nonatomic) BOOL accessibilitySupportLoaded; // @synthesize accessibilitySupportLoaded=_accessibilitySupportLoaded;
- (id)canvasViewHelp;
- (id)canvasViewDescription;
- (BOOL)supportsAdvancedTextSearchExperience;
- (BOOL)supportsTableEditing;
- (BOOL)supportsCharts;
- (void)loadAccessibilitySupport;
- (void)addSafeCategoryNamesToCollection:(id)arg1;
- (void)performValidation;
- (void)dealloc;
- (void)registerAccessibilityNotification;
- (void)handlePostingAnnouncement:(id)arg1 sender:(id)arg2 priority:(int)arg3 sound:(id)arg4;
- (void)handleLayoutChangedNotificationWithTarget:(id)arg1;
- (void)addExtraSafeCategoryNamesToCollection:(id)arg1;
- (void)performExtraValidation;
- (BOOL)needsAccessibilityAnnouncements;
- (BOOL)needsAccessibilityElements;
- (id)preferencesDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

