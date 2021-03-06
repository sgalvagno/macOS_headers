//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSImageView, NSTextField, NSView;

@interface iCloudSetupTopLevelViews : NSObject
{
    BOOL _servicesEnable;
    BOOL _FMMEnable;
    NSView *_setupView;
    NSButton *_servicesEnableButton;
    NSButton *_FMMEnableButton;
    NSImageView *_FMMIcon;
    NSTextField *_setupWithFMMAppsTitle;
    NSTextField *_setupWithFMMAppsDescription;
    NSTextField *_setupWithFMMFMMTitle;
    NSTextField *_setupWithFMMFMMDescription;
}

+ (id)sharedTopLevelViews;
@property __weak NSTextField *setupWithFMMFMMDescription; // @synthesize setupWithFMMFMMDescription=_setupWithFMMFMMDescription;
@property __weak NSTextField *setupWithFMMFMMTitle; // @synthesize setupWithFMMFMMTitle=_setupWithFMMFMMTitle;
@property __weak NSTextField *setupWithFMMAppsDescription; // @synthesize setupWithFMMAppsDescription=_setupWithFMMAppsDescription;
@property __weak NSTextField *setupWithFMMAppsTitle; // @synthesize setupWithFMMAppsTitle=_setupWithFMMAppsTitle;
@property __weak NSImageView *FMMIcon; // @synthesize FMMIcon=_FMMIcon;
@property __weak NSButton *FMMEnableButton; // @synthesize FMMEnableButton=_FMMEnableButton;
@property __weak NSButton *servicesEnableButton; // @synthesize servicesEnableButton=_servicesEnableButton;
@property(retain) NSView *setupView; // @synthesize setupView=_setupView;
@property BOOL FMMEnable; // @synthesize FMMEnable=_FMMEnable;
@property BOOL servicesEnable; // @synthesize servicesEnable=_servicesEnable;
- (void).cxx_destruct;
- (void)setFMMAvailable:(BOOL)arg1;
- (void)reEnable;
- (id)init;

@end

