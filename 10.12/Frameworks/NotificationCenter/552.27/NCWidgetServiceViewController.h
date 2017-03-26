//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotificationCenter/NCRemoteViewServiceViewController.h>

@class NCWidgetServiceSubsystem;

@interface NCWidgetServiceViewController : NCRemoteViewServiceViewController
{
    _Bool _supportsEditing;
    double _topAndBottomMargin;
    long long _previousWidgetMode;
    _Bool _hasContent;
}

@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
- (void)cancelOperation:(id)arg1;
- (struct CGSize)preferredContentSize;
- (struct NSEdgeInsets)marginInsets;
- (id)readyContext;
- (void)setPresentedViewController:(id)arg1;
- (void)clientViewDidLoad;
@property(readonly, nonatomic) NCWidgetServiceSubsystem *widgetService;

@end

