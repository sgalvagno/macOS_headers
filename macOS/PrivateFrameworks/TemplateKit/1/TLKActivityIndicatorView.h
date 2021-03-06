//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSProgressIndicator, TLKLabel, TLKMultilineText;

@interface TLKActivityIndicatorView : TLKView
{
    TLKMultilineText *_subtitle;
    NSProgressIndicator *_activityIndicator;
    TLKLabel *_subtitleLabel;
}

@property(retain, nonatomic) TLKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) NSProgressIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
- (id)subtitleLabelText;
- (void)observedPropertiesChanged;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)usesDefaultInsets;
- (id)setupContentView;

@end

