//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage;

@interface SLColorArt : NSObject
{
    NSColor *_backgroundColor;
    NSColor *_primaryColor;
    NSColor *_secondaryColor;
    NSColor *_detailColor;
    NSImage *_scaledImage;
    struct CGSize _scaledSize;
}

@property struct CGSize scaledSize; // @synthesize scaledSize=_scaledSize;
@property(copy, nonatomic) NSImage *scaledImage; // @synthesize scaledImage=_scaledImage;
@property(retain) NSColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain) NSColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain) NSColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)findTextColors:(id)arg1 primaryColor:(id *)arg2 secondaryColor:(id *)arg3 detailColor:(id *)arg4 backgroundColor:(id)arg5;
- (id)findEdgeColor:(id)arg1 imageColors:(id *)arg2;
- (void)analyzeImage:(id)arg1;
- (id)scaleImage:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithImage:(id)arg1 scaledSize:(struct CGSize)arg2;

@end

