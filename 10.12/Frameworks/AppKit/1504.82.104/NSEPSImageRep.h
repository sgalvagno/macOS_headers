//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSData, NSPDFImageRep;

@interface NSEPSImageRep : NSImageRep
{
    struct CGPoint _bBoxOrigin;
    NSData *_epsData;
    NSPDFImageRep *_pdfImageRep;
}

+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredTypes;
+ (BOOL)canInitWithData:(id)arg1;
+ (id)_imagesFromIcon:(id)arg1 inApp:(id)arg2 zone:(struct _NSZone *)arg3;
+ (id)imageRepWithData:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSData *EPSRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_wantsToBeCached;
- (BOOL)draw;
- (void)prepareGState;
- (BOOL)drawInRect:(struct CGRect)arg1;
@property(readonly) struct CGRect boundingBox;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

