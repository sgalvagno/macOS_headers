//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPAudio, LPCaptionBarPresentationProperties, LPImage, LPImagePresentationProperties, LPInlineMediaPlaybackInformation, LPVideo, NSArray, NSColor, NSNumber, NSString;

@protocol LPLinkPresentationPropertyProvider <NSObject>

@optional
- (LPInlineMediaPlaybackInformation *)inlinePlaybackInformation;
- (NSNumber *)minimumHeight;
- (NSColor *)backgroundColor;
- (LPAudio *)audio;
- (LPVideo *)video;
- (NSArray *)alternateImages;
- (LPImagePresentationProperties *)imageProperties;
- (LPImage *)image;
- (NSString *)quotedText;
- (LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
- (LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
- (LPCaptionBarPresentationProperties *)captionBar;
- (LPImage *)icon;
- (NSString *)mediaBottomCaption;
- (NSString *)mediaTopCaption;
- (NSString *)trailingBottomCaption;
- (NSString *)trailingTopCaption;
- (NSString *)bottomCaption;
- (NSString *)topCaption;
- (long long)style;
- (BOOL)isPreliminary;
@end

