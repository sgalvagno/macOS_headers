//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCActivityMonitor, NSProgressIndicator, NSString, NSTextField, NSView;
@protocol LoadingOverlayModalDelegate;

@interface LoadingOverlay : NSObject
{
    MCActivityMonitor *_activityMonitor;
    NSView *_overlayView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_statusMessageField;
    id <LoadingOverlayModalDelegate> _modalDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LoadingOverlayModalDelegate> modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(nonatomic) __weak NSTextField *statusMessageField; // @synthesize statusMessageField=_statusMessageField;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
- (void)stop;
- (void)_activityEnded:(id)arg1;
@property(retain, nonatomic) NSString *statusMessage;
@property(retain, nonatomic) MCActivityMonitor *activityMonitor;
- (void)displayInSuperviewAfterDelay:(id)arg1;
- (void)displayInSuperview:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithModalDelegate:(id)arg1;

@end

