//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUHoverButton.h"

@class FLUTextFieldLabel, FLUView, ITProgressIndicator, NSImage, NSObject<OS_dispatch_queue>, NSString;

@interface FLUUploadFilterPreviewButton : FLUHoverButton
{
    BOOL _manageButton;
    NSString *_filename;
    NSImage *_thumbnailImage;
    CDUnknownBlockType _imageGenerationCompletionBlock;
    NSObject<OS_dispatch_queue> *_imageGenerationDispatchQueue;
    FLUTextFieldLabel *_nameLabel;
    FLUView *_dimView;
    ITProgressIndicator *_progressIndicatorView;
}

@property(retain, nonatomic) ITProgressIndicator *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) FLUView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) FLUTextFieldLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageGenerationDispatchQueue; // @synthesize imageGenerationDispatchQueue=_imageGenerationDispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType imageGenerationCompletionBlock; // @synthesize imageGenerationCompletionBlock=_imageGenerationCompletionBlock;
@property(retain, nonatomic) NSImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) BOOL manageButton; // @synthesize manageButton=_manageButton;
- (void).cxx_destruct;
- (void)refreshView;
- (void)setSelected:(BOOL)arg1;
- (void)updatePreview;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)dealloc;
- (void)setupAccessibility;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

