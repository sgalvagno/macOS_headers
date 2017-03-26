//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NCBannerModel, NSString;
@protocol NCBannerExtensionDelegate;

@interface NCBannerExtensionViewController : NSViewController
{
    _Bool _ready;
    NCBannerModel *_bannerModel;
    id <NCBannerExtensionDelegate> _delegate;
    NSString *_expandTitle;
}

@property(readonly, nonatomic) NSString *expandTitle; // @synthesize expandTitle=_expandTitle;
@property(readonly, nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) __weak id <NCBannerExtensionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NCBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
- (void).cxx_destruct;
- (void)handeCancelButtonPress;
- (BOOL)handleActionButtonPress;
- (id)firstResponder;
@property(readonly, nonatomic) NSString *expandedActionTitle;
- (id)initWithBanner:(id)arg1;

@end

