//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSURL;

@interface DVDSettingsController : NSObject
{
    NSString *_diskUniqueId;
    NSString *_username;
    NSURL *_diskSettingsURL;
    NSURL *_authorizationSettingsURL;
    NSURL *_preferencesURL;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_authorizationSettings;
    BOOL _parentalControlsEnabled;
    BOOL _playOnce;
}

- (void).cxx_destruct;
- (BOOL)authorizedWriteDictionary:(id)arg1 toURL:(id)arg2;
@property(readonly, nonatomic, getter=shouldPlayOnce) BOOL playOnce;
@property(readonly, nonatomic, getter=isMediaAuthorized) BOOL mediaAuthorized;
@property(readonly, nonatomic, getter=areParentalControlsEnabled) BOOL parentalControlsEnabled;
- (BOOL)alwaysAllowDisc:(BOOL)arg1;
- (void)toggleParentalControls;
@property(readonly, nonatomic) unsigned short lastPlayAngle;
@property(readonly, nonatomic) NSData *lastPlayData;
- (void)saveLastPlaySettings;
- (void)updateLastPlaySettings;
- (id)loadSettingsAtURL:(id)arg1 rootKey:(id)arg2;
- (void)_loadSettings;
- (id)init;

@end

