//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class NSAttributedString, NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable>
{
    struct __CFArray *selections;
    struct __CFArray *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
    NSAttributedString *structuredString;
    NSData *RTFDData;
}

- (id)RTFDData;
- (id)structuredString;
- (id)webArchiveData;
- (id)html;
- (id)plainText;
- (void)addSelection:(struct CGPDFSelection *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;

@end

