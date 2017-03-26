//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalDrawImageRendering : NSObject
{
}

+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_lightColorForColor:(id)arg1 opaque:(BOOL)arg2;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4 colorBar:(BOOL)arg5;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBar:(BOOL)arg3;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(BOOL)arg2 declined:(BOOL)arg3 cancelled:(BOOL)arg4 tentative:(BOOL)arg5 needsReply:(BOOL)arg6 colorBar:(BOOL)arg7 dayViewBackgroundStyle:(int)arg8;
+ (id)birthdayAllDaySelectedDotImage;
+ (id)birthdayAllDayDotImage;
+ (id)birthdaySmallSelectedDotImage;
+ (id)birthdaySmallDotImage;
+ (id)birthdaySelectedDotImage;
+ (id)birthdayDotImage;
+ (id)accountDotImageWithIdentifier:(id)arg1;
+ (void)drawIconsInRect:(struct CGRect)arg1 withRenderer:(id)arg2;
+ (void)_drawIcon:(id)arg1 inRect:(struct CGRect)arg2 withRenderer:(id)arg3;
+ (id)eventIcon:(id)arg1 withName:(id)arg2 withColor:(id)arg3;
+ (id)allDayInvitationOutlineFlatLeftWithColor:(id)arg1;
+ (id)allDayInvitationOutlineFlatRightWithColor:(id)arg1;
+ (id)allDayInvitationOutlineFlatBothWithColor:(id)arg1;
+ (id)allDayInvitationOutlineWithColor:(id)arg1;
+ (id)tentativeCornersWithColor:(id)arg1;
+ (id)tentativeOutlineWithColor:(id)arg1;
+ (id)oldTentativeOutlineWithColor:(id)arg1;
+ (id)_imageWithName:(id)arg1 andCalColor:(id)arg2;
+ (id)_imageWithName:(id)arg1 andColor:(id)arg2;
+ (id)dotImageForOccurrenceColor:(id)arg1 diameter:(double)arg2 strokeWidth:(double)arg3 options:(id)arg4;
+ (id)cachedSwatchImageForColor:(id)arg1 largeSize:(BOOL)arg2;
+ (id)cachedCheckboxImageForColor:(id)arg1;
+ (id)cachedImageForOccurrenceColor:(id)arg1 options:(id)arg2;
+ (id)cachedOccurrenceImageForCalendarColor:(id)arg1 tileOptions:(id)arg2;
+ (id)cachedImageForOccurrenceColor:(id)arg1 height:(double)arg2 pathRadius:(double)arg3 alpha:(double)arg4 options:(id)arg5 category:(id)arg6;
+ (struct CGImage *)newCGImageForOccurrenceColor:(id)arg1 height:(double)arg2 pathRadius:(double)arg3 alpha:(double)arg4 options:(id)arg5;
+ (void)pushRoundedRectPath:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withCornerRadius:(double)arg3;
+ (struct CGImage *)imageRefWithName:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithName:(id)arg1 andType:(id)arg2;

@end

