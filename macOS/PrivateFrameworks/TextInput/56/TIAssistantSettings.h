//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TIAssistantSettings : NSObject
{
}

+ (void)launchDictationSettings;
+ (void)launchKeyboardSettings;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissDialog;
+ (void)dismissedDataSharingWithResponse:(long long)arg1;
+ (void)promptToEnableDictationWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)promptReminderDataSharingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)promptToRemindDataSharingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)promptToEnableDataSharingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)presentDialogForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)connectForOperations:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
+ (void)setTestBlock:(CDUnknownBlockType)arg1;

@end

