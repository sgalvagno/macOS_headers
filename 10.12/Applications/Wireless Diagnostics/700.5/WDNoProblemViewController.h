//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "WDScreenController-Protocol.h"

@class NSMatrix;

@interface WDNoProblemViewController : NSViewController <WDScreenController>
{
    NSMatrix *_option;
}

+ (id)screenViewName;
- (void).cxx_destruct;
- (void)onBack:(id)arg1;
- (void)onNext:(id)arg1;
- (void)showScreen;
- (void)unloadScreen;
- (void)loadScreen:(id)arg1;
- (void)awakeFromNib;
- (id)screenTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

