//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TQLPreviewViewController.h"

@interface TInfoQLPreviewViewController : TQLPreviewViewController
{
    struct CGRect _cachedSuperviewFrame;
    _Bool _handlingSuperviewFrameChange;
    double _leftRightMargin;
    struct TNotificationCenterObserver _superviewFrameChangedObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustPreviewFrame;
- (struct CGSize)calcPreviewSizeForWidth:(double)arg1;
- (void)superviewFrameChanged:(id)arg1;
- (void)viewLoaded;

@end

