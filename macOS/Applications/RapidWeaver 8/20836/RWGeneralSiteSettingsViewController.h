//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RWSiteSettingsViewController.h"

#import "RWSiteSettingsDropImageViewDelegate.h"

@class NSButton, NSPopUpButton, NSScrollView, NSStackView, NSString, NSTextField, NSURLComponents, NSView, RWSiteSettingsDropImageView;

__attribute__((visibility("hidden")))
@interface RWGeneralSiteSettingsViewController : RWSiteSettingsViewController <RWSiteSettingsDropImageViewDelegate>
{
    RWSiteSettingsDropImageView *_siteLogoDropImageView;
    RWSiteSettingsDropImageView *_webClipDropImageView;
    RWSiteSettingsDropImageView *_faviconDropImageView;
    NSScrollView *_scrollView;
    NSStackView *_stackView;
    NSView *_siteTextFieldsView;
    NSView *_siteImagesView;
    NSView *_horizontalLineView;
    NSView *_logoBannerView;
    NSString *_siteBaseURL;
    RWSiteSettingsDropImageView *_bannerDropImageView;
    RWSiteSettingsDropImageView *_pinnedTabIconDropImageView;
    NSButton *_pinnedTabIconColorButton;
    NSButton *_titleCheckbox;
    NSButton *_sloganCheckbox;
    NSButton *_footerCheckbox;
    NSButton *_emailCheckbox;
    NSTextField *_recommendedImageSizeLabel;
    NSPopUpButton *_siteLanguageMenu;
    NSURLComponents *_httpsComponents;
}

+ (id)keyPathsForValuesAffectingLogoDescriptionText;
+ (id)keyPathsForValuesAffectingBannerDescriptionText;
@property(retain, nonatomic) NSURLComponents *httpsComponents; // @synthesize httpsComponents=_httpsComponents;
@property __weak NSPopUpButton *siteLanguageMenu; // @synthesize siteLanguageMenu=_siteLanguageMenu;
@property __weak NSTextField *recommendedImageSizeLabel; // @synthesize recommendedImageSizeLabel=_recommendedImageSizeLabel;
@property __weak NSButton *emailCheckbox; // @synthesize emailCheckbox=_emailCheckbox;
@property __weak NSButton *footerCheckbox; // @synthesize footerCheckbox=_footerCheckbox;
@property __weak NSButton *sloganCheckbox; // @synthesize sloganCheckbox=_sloganCheckbox;
@property __weak NSButton *titleCheckbox; // @synthesize titleCheckbox=_titleCheckbox;
@property __weak NSButton *pinnedTabIconColorButton; // @synthesize pinnedTabIconColorButton=_pinnedTabIconColorButton;
@property __weak RWSiteSettingsDropImageView *pinnedTabIconDropImageView; // @synthesize pinnedTabIconDropImageView=_pinnedTabIconDropImageView;
@property __weak RWSiteSettingsDropImageView *bannerDropImageView; // @synthesize bannerDropImageView=_bannerDropImageView;
@property(retain, nonatomic) NSString *siteBaseURL; // @synthesize siteBaseURL=_siteBaseURL;
@property(retain) NSView *logoBannerView; // @synthesize logoBannerView=_logoBannerView;
@property(retain) NSView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property(retain) NSView *siteImagesView; // @synthesize siteImagesView=_siteImagesView;
@property(retain) NSView *siteTextFieldsView; // @synthesize siteTextFieldsView=_siteTextFieldsView;
@property __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak RWSiteSettingsDropImageView *faviconDropImageView; // @synthesize faviconDropImageView=_faviconDropImageView;
@property(nonatomic) __weak RWSiteSettingsDropImageView *webClipDropImageView; // @synthesize webClipDropImageView=_webClipDropImageView;
@property(nonatomic) __weak RWSiteSettingsDropImageView *siteLogoDropImageView; // @synthesize siteLogoDropImageView=_siteLogoDropImageView;
- (void).cxx_destruct;
- (void)dropImageViewDidDeleteImage:(id)arg1;
- (void)dropImageView:(id)arg1 didChangeImage:(id)arg2;
- (id)openPanelForDropImageView:(id)arg1;
- (unsigned long long)dropImageView:(id)arg1 shouldAcceptDrop:(id)arg2;
- (void)siteLanguageChanged:(id)arg1;
- (void)colorPanelUpdated:(id)arg1;
- (void)colorButtonClicked:(id)arg1;
- (void)setSelectedPinnedTabIconColor:(id)arg1;
- (id)selectedPinnedTabIconColor;
- (id)_allowedTypesForDropImageView:(id)arg1;
- (void)updateStackView;
- (id)logoDescriptionText;
@property(readonly, nonatomic) __weak NSString *bannerDescriptionText;
- (void)siteBaseURLChanged:(id)arg1;
- (void)showNoHTTPSSupportAlert;
- (void)showHTTPSSupportAlert;
- (BOOL)validateSiteBaseURL:(id *)arg1 error:(id *)arg2;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

