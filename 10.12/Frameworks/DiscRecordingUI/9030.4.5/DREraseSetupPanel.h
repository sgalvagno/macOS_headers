//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DiscRecordingUI/DRSetupPanel.h>

@class NSMatrix;

@interface DREraseSetupPanel : DRSetupPanel
{
    NSMatrix *_eraseTypes;
    void *_reservedEraseSetupPanel[2];
    void *_esp_privateStorage;
}

+ (id)setupPanel;
+ (void)initialize;
- (BOOL)mediaStateChanged:(id)arg1;
- (void)deviceSelectionChanged:(id)arg1;
- (void)open:(id)arg1;
- (void)eject:(id)arg1;
- (void)_confirmSheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)ok:(id)arg1;
- (void)setEraseTypes:(id)arg1;
- (void)eraseType:(id)arg1;
- (id)eraseObject;
- (void)setupForDisplay;
- (id)defaultDeviceKey;
- (id)init;
- (id)initWithNibName:(id)arg1;

@end

