//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreServices/NSUserActivity.h>

@interface NSUserActivity (ContactsUICore)
+ (id)_cnui_searchMailUserActivityForContact:(id)arg1;
+ (id)_cnui_userActivityWithActivityType:(id)arg1 destinationID:(id)arg2 customIdentifier:(id)arg3 contact:(id)arg4 intentWithPerson:(CDUnknownBlockType)arg5;
+ (id)_cnui_sendMessageIntentWithDestinationID:(id)arg1 customIdentifier:(id)arg2 contact:(id)arg3;
+ (id)_cnui_startVideoCallIntentWithDestinationID:(id)arg1 customIdentifier:(id)arg2 contact:(id)arg3;
+ (id)_cnui_startAudioCallIntentWithDestinationID:(id)arg1 customIdentifier:(id)arg2 contact:(id)arg3;
@end

