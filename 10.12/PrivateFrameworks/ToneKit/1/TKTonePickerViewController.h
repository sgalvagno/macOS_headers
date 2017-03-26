//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ToneKit/TKTonePickerContentViewControllerDelegate-Protocol.h>
#import <ToneKit/TKTonePickerViewDelegate-Protocol.h>

@class NSResponder, NSString, TKTonePickerController;
@protocol TKTonePickerContentViewController, TKTonePickerViewControllerDelegate;

@interface TKTonePickerViewController : NSViewController <TKTonePickerContentViewControllerDelegate, TKTonePickerViewDelegate>
{
    BOOL _monitoringHostingWindowClosing;
    id <TKTonePickerViewControllerDelegate> _delegate;
    unsigned long long _style;
    TKTonePickerController *_tonePickerController;
    id <TKTonePickerContentViewController> _tonePickerContentViewController;
}

+ (Class)_tonePickerContentViewControllerClassForStyle:(unsigned long long)arg1;
@property(nonatomic, getter=_isMonitoringHostingWindowClosing, setter=_setMonitoringHostingWindowClosing:) BOOL _monitoringHostingWindowClosing; // @synthesize _monitoringHostingWindowClosing;
@property(retain, nonatomic, setter=_setTonePickerContentViewController:) id <TKTonePickerContentViewController> _tonePickerContentViewController; // @synthesize _tonePickerContentViewController;
@property(retain, nonatomic, setter=_setTonePickerController:) TKTonePickerController *_tonePickerController; // @synthesize _tonePickerController;
@property(nonatomic, setter=_setStyle:) unsigned long long _style; // @synthesize _style;
@property(nonatomic) id <TKTonePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)viewForSizingTonePickerView:(id)arg1;
- (id)viewForBaselineLayoutOfTonePickerView:(id)arg1;
- (void)tonePickerContentViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)_hostingWindowWillClose:(id)arg1;
- (void)_endMonitoringHostingWindowWillClose;
- (void)_beginMonitoringHostingWindowWillClose;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)loadView;
@property(readonly, nonatomic) NSResponder *tonePickerResponder;
@property(copy, nonatomic) NSString *selectedToneIdentifier;
@property(nonatomic, getter=isNoneAtTop) BOOL noneAtTop;
@property(nonatomic) BOOL showsNone;
@property(copy, nonatomic) NSString *defaultToneIdentifier;
@property(nonatomic) BOOL showsDefault;
@property(readonly, nonatomic) unsigned long long style;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) int alertType;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1 style:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAlertType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

