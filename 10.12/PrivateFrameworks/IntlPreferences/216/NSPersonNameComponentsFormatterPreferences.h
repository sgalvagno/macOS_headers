//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSPersonNameComponentsFormatterPreferences : NSObject
{
}

+ (id)infoClassFromPreferencesSource:(unsigned long long)arg1;
+ (id)mappedPreferencesForPreferences:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
+ (void)_syncronizeGizmoDefaultWithKey:(id)arg1 value:(long long)arg2;
+ (void)setShortNameIsEnabled:(BOOL)arg1;
+ (void)setPreferNicknamesDefault:(BOOL)arg1;
+ (void)setShortNameFormat:(long long)arg1;
+ (void)setDefaultDisplayNameOrder:(long long)arg1;
+ (void)_postPreferencesChangedNotification;
+ (void)_setPreference:(id)arg1 toValue:(long long)arg2 usingExistingGetter:(SEL)arg3;

@end

