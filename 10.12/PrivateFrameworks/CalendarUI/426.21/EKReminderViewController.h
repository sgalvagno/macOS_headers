//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKViewController.h>

#import <CalendarUI/CalUIReminderViewTouchBarDelegate-Protocol.h>

@class CalUIReminderViewTouchBar, EKReminder, EKUIRemindGadget, EKUITitleGadget, NSString;

@interface EKReminderViewController : EKViewController <CalUIReminderViewTouchBarDelegate>
{
    CalUIReminderViewTouchBar *_reminderViewTouchBar;
    EKUITitleGadget *_titleGadget;
    EKUIRemindGadget *_remindGadget;
}

+ (id)emptyPlaceholderTitleString;
+ (id)newPlaceholderTitleString;
@property(retain) EKUIRemindGadget *remindGadget; // @synthesize remindGadget=_remindGadget;
@property(retain) EKUITitleGadget *titleGadget; // @synthesize titleGadget=_titleGadget;
@property(retain) CalUIReminderViewTouchBar *reminderViewTouchBar; // @synthesize reminderViewTouchBar=_reminderViewTouchBar;
- (void).cxx_destruct;
- (void)focusInspectorLocation;
- (void)focusInspectorDateTime;
- (void)removeInspectorLocation;
- (void)removeInspectorDateTime;
- (id)locationCandidateTouchBar;
- (void)toggleReminderInspector;
- (void)toggleReminderCompletion;
- (void)createNewReminder;
- (BOOL)isInspectorOpen;
- (BOOL)isReminderSelected;
- (BOOL)isReminderNew;
- (BOOL)canCreateNewReminder;
- (void)updateTouchBar;
- (void)_updateTouchBarFirstResponder:(id)arg1;
- (id)makeTouchBar;
- (void)firstResponderChanged:(id)arg1;
- (void)updateContainersWithChanges:(id)arg1;
@property(retain, nonatomic) EKReminder *reminder;
- (void)setObject:(id)arg1;
- (BOOL)labelWithColons;
- (double)defaultLabelWidth;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

