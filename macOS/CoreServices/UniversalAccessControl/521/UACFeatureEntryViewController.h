//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, UAShortcutFeature;

@interface UACFeatureEntryViewController : NSViewController
{
    UAShortcutFeature *_shortcutFeature;
    NSButton *__featureCheckbox;
}

- (void).cxx_destruct;
@property __weak NSButton *_featureCheckbox; // @synthesize _featureCheckbox=__featureCheckbox;
@property(retain, nonatomic) UAShortcutFeature *shortcutFeature; // @synthesize shortcutFeature=_shortcutFeature;
- (void)awakeFromNib;
- (void)changedCheckbox:(id)arg1;
- (void)updateState;
- (id)initWithShortcutFeature:(id)arg1;
- (id)_init;

@end

